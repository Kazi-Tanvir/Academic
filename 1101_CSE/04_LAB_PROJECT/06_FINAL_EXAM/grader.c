/*
 * FOOD ORDERING SYSTEM - AUTOMATED TEST / MARKING HARNESS
 *
 * Usage:
 *   1. Save the student's completed exam program as code.c.
 *   2. Keep grader.c in the same directory.
 *   3. Compile and run:
 *        gcc -std=c11 -Wall -Wextra grader.c -o grader && ./grader
 *
 * The harness includes code.c and renames its main() so it can call
 * the submitted functions. It awards fractional marks per test, sums
 * them, then rounds the final total UP to the next integer.
 *
 * File tests enforce this readable CSV-like text layout:
 *   order count
 *   ORDER,orderId,customerName,itemCount,subtotal,discount,deliveryCharge,total
 *   ITEM,itemId,itemName,price,quantity   (one line per item)
 * The format assumes names do not contain commas or newlines.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define main student_original_main
#include "code.c"
#undef main

#define EPSILON 0.02f
#define TEST_FILE "grader_orders_test.txt"
#define BAD_FILE "grader_missing_directory/no_such_file.txt"
#define CORRUPT_FILE "grader_corrupt_test.txt"

static float earned = 0.0f;
static int passed_tests = 0;
static int failed_tests = 0;

static int nearly_equal(float actual, float expected)
{
    return fabsf(actual - expected) <= EPSILON;
}

static void check(const char *name, int passed, float points)
{
    if (passed)
    {
        earned += points;
        passed_tests++;
        printf("[PASS] %-56s (+%.3f)\n", name, points);
    }
    else
    {
        failed_tests++;
        printf("[FAIL] %-56s (+0.000 / %.3f)\n", name, points);
    }
}

static void check_float(const char *name, float actual, float expected,
                        float points)
{
    check(name, nearly_equal(actual, expected), points);
}

/* PART A: BASIC ORDER PROCESSING (7 marks) */

static void test_calculateItemSubtotal(void)
{
    const float p = 1.0f;
    check_float("calculateItemSubtotal: ordinary values",
                calculateItemSubtotal(250.0f, 3), 750.0f, p / 3.0f);
    check_float("calculateItemSubtotal: zero quantity",
                calculateItemSubtotal(250.0f, 0), 0.0f, p / 3.0f);
    check_float("calculateItemSubtotal: zero price",
                calculateItemSubtotal(0.0f, 8), 0.0f, p / 3.0f);
}

static void test_calculateDiscount(void)
{
    const float p = 3.0f;
    check_float("calculateDiscount: below 500",
                calculateDiscount(499.99f), 0.0f, p / 8.0f);
    check_float("calculateDiscount: exactly 500 (5%)",
                calculateDiscount(500.0f), 25.0f, p / 8.0f);
    check_float("calculateDiscount: just below 1000 (5%)",
                calculateDiscount(999.99f), 49.9995f, p / 8.0f);
    check_float("calculateDiscount: exactly 1000 (10%)",
                calculateDiscount(1000.0f), 100.0f, p / 8.0f);
    check_float("calculateDiscount: just below 2000 (10%)",
                calculateDiscount(1999.99f), 199.999f, p / 8.0f);
    check_float("calculateDiscount: exactly 2000 (15%)",
                calculateDiscount(2000.0f), 300.0f, p / 8.0f);
    check_float("calculateDiscount: maximum discount cap",
                calculateDiscount(10000.0f), 1000.0f, p / 8.0f);
    check_float("calculateDiscount: zero subtotal",
                calculateDiscount(0.0f), 0.0f, p / 8.0f);
}

static void test_calculateDeliveryCharge(void)
{
    const float p = 2.0f;
    check_float("calculateDeliveryCharge: distance 0",
                calculateDeliveryCharge(100.0f, 0.0f), 50.0f, p / 8.0f);
    check_float("calculateDeliveryCharge: exactly 3 km",
                calculateDeliveryCharge(100.0f, 3.0f), 50.0f, p / 8.0f);
    check_float("calculateDeliveryCharge: just over 3 km",
                calculateDeliveryCharge(100.0f, 3.01f), 80.0f, p / 8.0f);
    check_float("calculateDeliveryCharge: exactly 7 km",
                calculateDeliveryCharge(100.0f, 7.0f), 80.0f, p / 8.0f);
    check_float("calculateDeliveryCharge: just over 7 km",
                calculateDeliveryCharge(100.0f, 7.01f), 120.0f, p / 8.0f);
    check_float("calculateDeliveryCharge: exactly 12 km",
                calculateDeliveryCharge(100.0f, 12.0f), 120.0f, p / 8.0f);
    check_float("calculateDeliveryCharge: over 12 km",
                calculateDeliveryCharge(100.0f, 12.01f), 180.0f, p / 8.0f);
    check_float("calculateDeliveryCharge: free at subtotal 1500",
                calculateDeliveryCharge(1500.0f, 20.0f), 0.0f, p / 8.0f);
}

static void test_calculateFinalBill(void)
{
    const float p = 1.0f;
    check_float("calculateFinalBill: ordinary bill",
                calculateFinalBill(1000.0f, 100.0f, 80.0f),
                980.0f, p / 3.0f);
    check_float("calculateFinalBill: zero discount and delivery",
                calculateFinalBill(400.0f, 0.0f, 0.0f),
                400.0f, p / 3.0f);
    check_float("calculateFinalBill: zero subtotal",
                calculateFinalBill(0.0f, 0.0f, 50.0f),
                50.0f, p / 3.0f);
}

/* PART B: MULTIPLE ITEMS / ORDERS (10 marks) */
static void test_calculateItemsSubtotal(void)
{
    const float p = 2.0f;
    float prices[] = {10.0f, 2.5f, 100.0f, 7.0f};
    int quantities[] = {2, 4, 0, 3};
    check_float("calculateItemsSubtotal: mixed values",
                calculateItemsSubtotal(prices, quantities, 4),
                51.0f, p / 4.0f);
    check_float("calculateItemsSubtotal: one item",
                calculateItemsSubtotal(prices, quantities, 1),
                20.0f, p / 4.0f);
    check_float("calculateItemsSubtotal: n = 0",
                calculateItemsSubtotal(prices, quantities, 0),
                0.0f, p / 4.0f);
    check_float("calculateItemsSubtotal: negative n",
                calculateItemsSubtotal(prices, quantities, -3),
                0.0f, p / 4.0f);
}

static void test_calculateTotalSales(void)
{
    const float p = 1.0f;
    float totals[] = {500.0f, 700.0f, 1000.0f, 0.0f};
    check_float("calculateTotalSales: multiple orders",
                calculateTotalSales(totals, 3), 2200.0f, p / 3.0f);
    check_float("calculateTotalSales: empty list",
                calculateTotalSales(totals, 0), 0.0f, p / 3.0f);
    check_float("calculateTotalSales: negative n",
                calculateTotalSales(totals, -1), 0.0f, p / 3.0f);
}

static void test_calculateAverageOrder(void)
{
    const float p = 1.0f;
    float totals[] = {500.0f, 700.0f, 1000.0f};
    check_float("calculateAverageOrder: ordinary average",
                calculateAverageOrder(totals, 3), 2200.0f / 3.0f,
                p / 4.0f);
    check_float("calculateAverageOrder: one order",
                calculateAverageOrder(totals, 1), 500.0f, p / 4.0f);
    check_float("calculateAverageOrder: n = 0",
                calculateAverageOrder(totals, 0), 0.0f, p / 4.0f);
    check_float("calculateAverageOrder: negative n",
                calculateAverageOrder(totals, -2), 0.0f, p / 4.0f);
}

static void test_findHighestOrder(void)
{
    const float p = 2.0f;
    float totals[] = {500.0f, 1200.0f, 800.0f, 1200.0f};
    check("findHighestOrder: maximum in middle",
          findHighestOrder(totals, 3) == 1, p / 5.0f);
    check("findHighestOrder: tie returns first index",
          findHighestOrder(totals, 4) == 1, p / 5.0f);
    check("findHighestOrder: one element",
          findHighestOrder(totals, 1) == 0, p / 5.0f);
    check("findHighestOrder: n = 0",
          findHighestOrder(totals, 0) == -1, p / 5.0f);
    check("findHighestOrder: negative n",
          findHighestOrder(totals, -1) == -1, p / 5.0f);
}

static void test_searchOrder(void)
{
    const float p = 2.0f;
    int ids[] = {101, 105, 109, 105};
    check("searchOrder: first element",
          searchOrder(ids, 4, 101) == 0, p / 5.0f);
    check("searchOrder: repeated ID returns first match",
          searchOrder(ids, 4, 105) == 1, p / 5.0f);
    check("searchOrder: another matching element",
          searchOrder(ids, 4, 109) == 2, p / 5.0f);
    check("searchOrder: missing ID",
          searchOrder(ids, 4, 999) == -1, p / 5.0f);
    check("searchOrder: empty list",
          searchOrder(ids, 0, 101) == -1, p / 5.0f);
}

static void test_countOrdersAbove(void)
{
    const float p = 2.0f;
    float totals[] = {500.0f, 1000.0f, 1500.0f, 1000.0f, 999.0f};
    check("countOrdersAbove: inclusive threshold",
          countOrdersAbove(totals, 5, 1000.0f) == 3, p / 5.0f);
    check("countOrdersAbove: threshold above all",
          countOrdersAbove(totals, 5, 2000.0f) == 0, p / 5.0f);
    check("countOrdersAbove: threshold below all",
          countOrdersAbove(totals, 5, 0.0f) == 5, p / 5.0f);
    check("countOrdersAbove: empty list",
          countOrdersAbove(totals, 0, 100.0f) == 0, p / 5.0f);
    check("countOrdersAbove: negative n",
          countOrdersAbove(totals, -1, 100.0f) == 0, p / 5.0f);
}

/* PART C: STRUCTURE-BASED ORDER PROCESSING (7 marks) */
static void test_addItemToOrder(void)
{
    const float p = 4.0f;
    Order order;
    int i, all_ok;

    memset(&order, 0, sizeof(order));
    check("addItemToOrder: first item succeeds",
          addItemToOrder(&order, 1, "Burger", 250.0f, 2) == 1,
          p / 8.0f);
    check("addItemToOrder: itemCount updated",
          order.itemCount == 1, p / 8.0f);
    check("addItemToOrder: item fields stored",
          order.items[0].itemId == 1 &&
          strcmp(order.items[0].name, "Burger") == 0 &&
          nearly_equal(order.items[0].price, 250.0f) &&
          order.items[0].quantity == 2, p / 8.0f);
    check("addItemToOrder: duplicate item ID allowed",
          addItemToOrder(&order, 1, "Burger", 250.0f, 1) == 1 &&
          order.itemCount == 2, p / 8.0f);

    memset(&order, 0, sizeof(order));
    all_ok = 1;
    for (i = 0; i < MAX_ITEMS; i++)
    {
        char name[30];
        snprintf(name, sizeof(name), "Item%d", i);
        if (addItemToOrder(&order, i + 10, name,
                           (float)(i + 1), i + 1) != 1)
            all_ok = 0;
    }
    check("addItemToOrder: all available slots can be filled",
          all_ok && order.itemCount == MAX_ITEMS, p / 8.0f);
    check("addItemToOrder: refuses item when full",
          addItemToOrder(&order, 999, "Extra", 1.0f, 1) == 0,
          p / 8.0f);
    check("addItemToOrder: full order count remains unchanged",
          order.itemCount == MAX_ITEMS, p / 8.0f);

    memset(&order, 0, sizeof(order));
    check("addItemToOrder: zero-price/zero-quantity item",
          addItemToOrder(&order, 7, "Free", 0.0f, 0) == 1 &&
          order.itemCount == 1 &&
          nearly_equal(order.items[0].price, 0.0f) &&
          order.items[0].quantity == 0, p / 8.0f);
}

static void test_calculateOrder(void)
{
    const float p = 2.0f;
    Order order;
    memset(&order, 0, sizeof(order));
    order.itemCount = 2;
    order.items[0].price = 250.0f;
    order.items[0].quantity = 2;
    order.items[1].price = 100.0f;
    order.items[1].quantity = 1;

    calculateOrder(&order, 5.0f);
    check_float("calculateOrder: subtotal from stored items",
                order.subtotal, 600.0f, p / 4.0f);
    check_float("calculateOrder: discount updated",
                order.discount, 30.0f, p / 4.0f);
    check_float("calculateOrder: delivery updated",
                order.deliveryCharge, 80.0f, p / 4.0f);
    check_float("calculateOrder: final total updated",
                order.total, 650.0f, p / 4.0f);
}

static void test_findOrderById(void)
{
    const float p = 1.0f;
    Order orders[3];
    memset(orders, 0, sizeof(orders));
    orders[0].orderId = 1001;
    orders[1].orderId = 1002;
    orders[2].orderId = 1003;

    check("findOrderById: first order",
          findOrderById(orders, 3, 1001) == 0, p / 4.0f);
    check("findOrderById: last order",
          findOrderById(orders, 3, 1003) == 2, p / 4.0f);
    check("findOrderById: missing ID",
          findOrderById(orders, 3, 9999) == -1, p / 4.0f);
    check("findOrderById: empty list",
          findOrderById(orders, 0, 1001) == -1, p / 4.0f);
}

/* PART D: POINTER + FILE PERSISTENCE (6 marks) */
static void make_sample_orders(Order orders[], int *n)
{
    memset(orders, 0, sizeof(Order) * 2);
    *n = 2;

    orders[0].orderId = 1001;
    strcpy(orders[0].customerName, "Test Customer");
    orders[0].itemCount = 2;
    orders[0].items[0].itemId = 1;
    strcpy(orders[0].items[0].name, "Burger");
    orders[0].items[0].price = 250.0f;
    orders[0].items[0].quantity = 2;
    orders[0].items[1].itemId = 2;
    strcpy(orders[0].items[1].name, "Coffee");
    orders[0].items[1].price = 100.0f;
    orders[0].items[1].quantity = 1;
    orders[0].subtotal = 600.0f;
    orders[0].discount = 30.0f;
    orders[0].deliveryCharge = 80.0f;
    orders[0].total = 650.0f;

    orders[1].orderId = 1002;
    strcpy(orders[1].customerName, "Ayesha Rahman");
    orders[1].itemCount = 2;
    orders[1].items[0].itemId = 3;
    strcpy(orders[1].items[0].name, "Family Pizza");
    orders[1].items[0].price = 1500.0f;
    orders[1].items[0].quantity = 1;
    orders[1].items[1].itemId = 4;
    strcpy(orders[1].items[1].name, "Juice");
    orders[1].items[1].price = 150.0f;
    orders[1].items[1].quantity = 4;
    orders[1].subtotal = 2100.0f;
    orders[1].discount = 315.0f;
    orders[1].deliveryCharge = 0.0f;
    orders[1].total = 1785.0f;
}

static int order_equal(const Order *a, const Order *b)
{
    int i;
    if (a->orderId != b->orderId ||
        strcmp(a->customerName, b->customerName) != 0 ||
        a->itemCount != b->itemCount ||
        !nearly_equal(a->subtotal, b->subtotal) ||
        !nearly_equal(a->discount, b->discount) ||
        !nearly_equal(a->deliveryCharge, b->deliveryCharge) ||
        !nearly_equal(a->total, b->total))
        return 0;

    if (a->itemCount < 0 || a->itemCount > MAX_ITEMS)
        return 0;
    for (i = 0; i < a->itemCount; i++)
    {
        if (a->items[i].itemId != b->items[i].itemId ||
            strcmp(a->items[i].name, b->items[i].name) != 0 ||
            !nearly_equal(a->items[i].price, b->items[i].price) ||
            a->items[i].quantity != b->items[i].quantity)
            return 0;
    }
    return 1;
}

static void test_updateItemQuantity(void)
{
    const float p = 1.0f;
    Order order;
    memset(&order, 0, sizeof(order));
    order.itemCount = 2;
    order.items[0].itemId = 10;
    order.items[0].quantity = 2;
    order.items[1].itemId = 20;
    order.items[1].quantity = 4;
    order.subtotal = 123.0f;
    order.total = 456.0f;

    check("updateItemQuantity: existing item is updated",
          updateItemQuantity(&order, 20, 7) == 1 &&
          order.items[1].quantity == 7, p / 3.0f);
    check("updateItemQuantity: only quantity changes",
          order.items[0].quantity == 2 &&
          nearly_equal(order.subtotal, 123.0f) &&
          nearly_equal(order.total, 456.0f), p / 3.0f);
    check("updateItemQuantity: missing item returns 0",
          updateItemQuantity(&order, 999, 3) == 0, p / 3.0f);
}

static int saved_file_matches_required_format(void)
{
    static const char *expected[] = {
        "2\n",
        "ORDER,1001,Test Customer,2,600.00,30.00,80.00,650.00\n",
        "ITEM,1,Burger,250.00,2\n",
        "ITEM,2,Coffee,100.00,1\n",
        "ORDER,1002,Ayesha Rahman,2,2100.00,315.00,0.00,1785.00\n",
        "ITEM,3,Family Pizza,1500.00,1\n",
        "ITEM,4,Juice,150.00,4\n"
    };
    char line[256];
    size_t i;
    FILE *fp = fopen(TEST_FILE, "r");
    if (fp == NULL)
        return 0;

    for (i = 0; i < sizeof(expected) / sizeof(expected[0]); i++)
    {
        if (fgets(line, sizeof(line), fp) == NULL || strcmp(line, expected[i]) != 0)
        {
            fclose(fp);
            return 0;
        }
    }

    /* There must not be unexpected extra records. */
    if (fgets(line, sizeof(line), fp) != NULL)
    {
        fclose(fp);
        return 0;
    }

    fclose(fp);
    return 1;
}

static void test_saveOrders(void)
{
    const float p = 2.0f;
    Order orders[MAX_ORDERS];
    int n;
    make_sample_orders(orders, &n);

    check("saveOrders: writes all orders successfully",
          saveOrders(TEST_FILE, orders, n) == 1, p / 3.0f);
    check("saveOrders: follows the required text-file format",
          saved_file_matches_required_format(), p / 3.0f);
    check("saveOrders: invalid/unopenable path returns failure",
          saveOrders(BAD_FILE, orders, n) == 0, p / 3.0f);
}

static void test_loadOrders(void)
{
    const float p = 3.0f;
    Order original[MAX_ORDERS];
    Order loaded[MAX_ORDERS];
    int original_n, loaded_n, ok;
    FILE *fp;
    int i, all_equal;

    make_sample_orders(original, &original_n);
    memset(loaded, 0xA5, sizeof(loaded));
    loaded_n = -77;
    ok = loadOrders(TEST_FILE, loaded, &loaded_n);

    check("loadOrders: loads saved file successfully", ok == 1, p / 6.0f);
    check("loadOrders: restores order count",
          ok == 1 && loaded_n == original_n, p / 6.0f);

    all_equal = (ok == 1 && loaded_n == original_n);
    if (all_equal)
    {
        for (i = 0; i < original_n; i++)
        {
            if (!order_equal(&original[i], &loaded[i]))
            {
                all_equal = 0;
                break;
            }
        }
    }
    check("loadOrders: restores all order/item/billing fields",
          all_equal, p / 6.0f);

    loaded_n = -77;
    check("loadOrders: missing file returns failure",
          loadOrders(BAD_FILE, loaded, &loaded_n) == 0, p / 6.0f);

    fp = fopen(CORRUPT_FILE, "w");
    if (fp != NULL)
    {
        fputs("999999\n", fp);
        fclose(fp);
        loaded_n = -77;
        ok = loadOrders(CORRUPT_FILE, loaded, &loaded_n);
        check("loadOrders: invalid saved count returns failure",
              ok == 0, p / 6.0f);
        remove(CORRUPT_FILE);
    }
    else
    {
        check("loadOrders: invalid saved count returns failure",
              0, p / 6.0f);
    }

    check("loadOrders: empty saved list round-trip",
          saveOrders(TEST_FILE, original, 0) == 1 &&
          loadOrders(TEST_FILE, loaded, &loaded_n) == 1 &&
          loaded_n == 0, p / 6.0f);
}

int main(void)
{
    float score;
    int final_mark;

    printf("============================================================\n");
    printf(" FOOD ORDERING SYSTEM - AUTOMATED MARKING\n");
    printf("============================================================\n\n");

    test_calculateItemSubtotal();
    test_calculateDiscount();
    test_calculateDeliveryCharge();
    test_calculateFinalBill();
    test_calculateItemsSubtotal();
    test_calculateTotalSales();
    test_calculateAverageOrder();
    test_findHighestOrder();
    test_searchOrder();
    test_countOrdersAbove();
    test_addItemToOrder();
    test_calculateOrder();
    test_findOrderById();
    test_updateItemQuantity();
    test_saveOrders();
    test_loadOrders();

    score = earned;
    if (score < 0.0f) score = 0.0f;
    if (score > 30.0f) score = 30.0f;

    /* Ceiling, with a tiny tolerance for floating-point round-off. */
    final_mark = (int)score;
    if ((float)final_mark < score - 0.00001f)
        final_mark++;

    remove(TEST_FILE);
    remove(CORRUPT_FILE);

    printf("\n============================================================\n");
    printf(" Passed tests : %d\n", passed_tests);
    printf(" Failed tests : %d\n", failed_tests);
    printf(" Raw score    : %.3f / 30\n", score);
    printf(" Final mark   : %d / 30 (rounded up)\n", final_mark);
    printf("============================================================\n");
    return 0;
}
