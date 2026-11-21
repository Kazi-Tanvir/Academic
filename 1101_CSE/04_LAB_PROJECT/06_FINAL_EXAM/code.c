/*
 * ============================================================
 * STRUCTURED PROGRAMMING LAB FINAL EXAM (BSSE 18)
 * FOOD ORDERING SYSTEM
 * ============================================================
 *
 * DO NOT MODIFY:
 *   - constants
 *   - structure definitions
 *   - function names
 *   - function parameters
 *   - return types
 *
 * You may add helper functions if necessary.
 *
 * Implement the functions marked TODO.
 *
 * ============================================================
 */

#include <stdio.h>
#include <string.h>

#define MAX_ORDERS 100
#define MAX_ITEMS 10
#define MAX_NAME_LENGTH 50
#define DATA_FILE "db.txt"


/* ============================================================
 * DATA STRUCTURES
 * ============================================================
 */

/*
 * Represents one food item in an order.
 */
typedef struct
{
    int itemId;
    char name[30];
    float price;
    int quantity;

} OrderItem;


/*
 * Represents one complete customer order.
 */
typedef struct
{
    int orderId;
    char customerName[MAX_NAME_LENGTH];

    OrderItem items[MAX_ITEMS];
    int itemCount;

    float subtotal;
    float discount;
    float deliveryCharge;
    float total;

} Order;


/* ============================================================
 * PART A: BASIC ORDER PROCESSING
 * Marks: 7
 * ============================================================
 *
 * These functions can be implemented without arrays,
 * structures, pointers, or file handling.
 * Assume price and quantity are non-negative.
 * ============================================================
 */


/*
 * Calculate the cost of one item.
 *
 * Example:
 * price = 250.00
 * quantity = 3
 *
 * return 750.00
 *
 * Marks: 1
 */
float calculateItemSubtotal(float price, int quantity)
{
    if (price <= 0.0f || quantity <= 0)
    {
        return 0.0f;
    }
    return price * (float)quantity;
}


/*
 * Calculate the discount amount based on the subtotal.
 *
 * Discount policy:
 *
 * subtotal < 500       	: 0%
 * 500 <= subtotal < 1000  	: 5%
 * 1000 <= subtotal < 2000 	: 10%
 * subtotal >= 2000     	: 15%
 *
 * The maximum discount is 1000.
 *
 * Return the DISCOUNT AMOUNT, not the discount percentage.
 * The discount amount must not exceed 1000.
 *
 * Examples:
 * subtotal = 400  -> discount = 0
 * subtotal = 500  -> discount = 25
 * subtotal = 1000 -> discount = 100
 * subtotal = 2000 -> discount = 300
 *
 * Assume subtotal is non-negative.
 *
 * Marks: 3
 */
float calculateDiscount(float subtotal)
{
    if (subtotal < 500.0f)
    {
        return 0.0f;
    }

    float discount = 0.0f;
    if (subtotal < 1000.0f)
    {
        discount = subtotal * 0.05f;
    }
    else if (subtotal < 2000.0f)
    {
        discount = subtotal * 0.10f;
    }
    else
    {
        discount = subtotal * 0.15f;
    }

    if (discount > 1000.0f)
    {
        discount = 1000.0f;
    }

    return discount;
}



/*
 * Calculate delivery charge based on distance.
 *
 * Distance <= 3 km    : 50
 * Distance <= 7 km    : 80
 * Distance <= 12 km   : 120
 * Above 12 km         : 180
 *
 * However, if subtotal >= 1500,
 * delivery is FREE.
 * Assume subtotal and delivery distance are non-negative.
 *
 * Marks: 2
 */
float calculateDeliveryCharge(float subtotal, float distance)
{
    if (subtotal >= 1500.0f)
    {
        return 0.0f;
    }

    if (distance <= 3.0f)
    {
        return 50.0f;
    }
    else if (distance <= 7.0f)
    {
        return 80.0f;
    }
    else if (distance <= 12.0f)
    {
        return 120.0f;
    }
    else
    {
        return 180.0f;
    }
}


/*
 * Calculate final bill.
 *
 * final bill =
 *     subtotal - discount + deliveryCharge
 *
 * Marks: 1
 */
float calculateFinalBill(float subtotal,
                         float discount,
                         float deliveryCharge)
{
    return subtotal - discount + deliveryCharge;
}


/* ============================================================
 * PART B: MULTIPLE ITEMS / ORDERS
 * Marks = 10
 * ============================================================
 */


/*
 * Calculate the subtotal of multiple items.
 * 
 * For each item:
 *
 *     item subtotal = price * quantity
 *
 * Return the sum of all item subtotals.
 * If n <= 0, return 0. Assume the arrays contain at least n valid elements when n > 0.
 *
 * Marks: 2
 *
 * NOTE:
 * This function requires arrays and a loop.
 * 
 */
float calculateItemsSubtotal(float prices[],
                             int quantities[],
                             int n)
{
    if (n <= 0 || prices == NULL || quantities == NULL)
    {
        return 0.0f;
    }

    float subtotal = 0.0f;
    for (int i = 0; i < n; i++)
    {
        subtotal += prices[i] * (float)quantities[i];
    }

    return subtotal;
}


/*
 * Calculate the total sales from multiple orders.
 *
 * totals[i] contains the final bill of order i.
 * If n <= 0, return 0. Assume totals contains at least n valid elements when n > 0.
 * 
 * Example:
 *
 * totals = {500, 700, 1000}
 *
 * return = 2200
 *
 * Marks: 1
 */
float calculateTotalSales(float totals[], int n)
{
    if (n <= 0 || totals == NULL)
    {
        return 0.0f;
    }

    float totalSales = 0.0f;
    for (int i = 0; i < n; i++)
    {
        totalSales += totals[i];
    }

    return totalSales;
}


/*
 * Calculate average order value.
 *
 * If n <= 0, return 0.
 *
 * Marks: 1
 */
float calculateAverageOrder(float totals[], int n)
{
    if (n <= 0 || totals == NULL)
    {
        return 0.0f;
    }

    float totalSales = calculateTotalSales(totals, n);
    return totalSales / (float)n;
}


/*
 * Find the highest order value.
 *
 * Return the INDEX of the highest-value order.
 *
 * Example:
 *
 * totals = {500, 1200, 800}
 *
 * return = 1
 *
 * If n <= 0, return -1.
 *
 * Return the zero-based index of the order with the highest total. 
 * If multiple orders share the highest total, return the index of the first occurrence. 
 * If n <= 0, return -1.
 *
 * Marks: 2
 */
int findHighestOrder(float totals[], int n)
{
    if (n <= 0 || totals == NULL)
    {
        return -1;
    }

    int highestIndex = 0;
    for (int i = 1; i < n; i++)
    {
        if (totals[i] > totals[highestIndex])
        {
            highestIndex = i;
        }
    }

    return highestIndex;
}


/*
 * Search for an order by order ID.
 *
 * orderIds contains the IDs of n orders.
 *
 * Return the INDEX of the matching order.
 *
 * If the order does not exist, return -1.
 * If n <= 0 or no matching order ID exists, return -1.
 *
 * Example:
 *
 * orderIds = {101, 105, 109}
 *
 * searchOrder(orderIds, 3, 105)
 *
 * returns 1.
 *
 * Marks: 2
 */
int searchOrder(int orderIds[], int n, int orderId)
{
    if (n <= 0 || orderIds == NULL)
    {
        return -1;
    }

    for (int i = 0; i < n; i++)
    {
        if (orderIds[i] == orderId)
        {
            return i;
        }
    }

    return -1;
}


/*
 * Count the number of orders whose total
 * is greater than or equal to the given amount.
 * Count the number of orders whose total is greater than or equal to the given threshold (total >= threshold).
 * Example:
 *
 * totals = {500, 1000, 1500}
 * threshold = 1000
 *
 * return = 2
 *
 * Marks: 2
 */
int countOrdersAbove(float totals[],
                     int n,
                     float threshold)
{
    if (n <= 0 || totals == NULL)
    {
        return 0;
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (totals[i] >= threshold)
        {
            count++;
        }
    }

    return count;
}


/* ============================================================
 * PART C: STRUCTURE-BASED ORDER PROCESSING
 * Marks = 7
 * ============================================================
 */


/*
 * Add one item to an Order.
 *
 * Store:
 *   itemId
 *   name
 *   price
 *   quantity
 *
 * in the next available position of the order.
 *
 * If the order is already full,
 * do not add the item.
 *
 * Return:
 *   1 if item was successfully added
 *   0 otherwise
 *
 * Marks: 4
 *
 * NOTE:
 * This function receives an Order structure.
 * Each successful call adds a new item entry in the next available position. 
 * An item ID may appear more than once in an order.
 * Assume order is a valid pointer and name fits in the destination array, including the terminating null character.
 *
 */
int addItemToOrder(Order *order,
                   int itemId,
                   const char name[],
                   float price,
                   int quantity)
{
    if (order == NULL || order->itemCount >= MAX_ITEMS || order->itemCount < 0)
    {
        return 0;
    }

    int index = order->itemCount;
    order->items[index].itemId = itemId;
    if (name != NULL)
    {
        strncpy(order->items[index].name, name, sizeof(order->items[index].name) - 1);
        order->items[index].name[sizeof(order->items[index].name) - 1] = '\0';
    }
    else
    {
        order->items[index].name[0] = '\0';
    }
    order->items[index].price = price;
    order->items[index].quantity = quantity;

    order->itemCount++;

    return 1;
}


/*
 * Calculate all billing information for an order.
 *
 * The function should update:
 *
 *   order->subtotal
 *   order->discount
 *   order->deliveryCharge
 *   order->total
 *
 * The distance of the order is supplied separately.
 * Calculate the subtotal from the current items stored in the order. 
 * Then update the discount, delivery charge, and final total using the supplied distance and the defined billing rules.
 *
 * Marks: 2
 */
void calculateOrder(Order *order,
                    float distance)
{
    if (order == NULL)
    {
        return;
    }

    float subtotal = 0.0f;
    for (int i = 0; i < order->itemCount; i++)
    {
        subtotal += calculateItemSubtotal(order->items[i].price,
                                          order->items[i].quantity);
    }

    order->subtotal = subtotal;
    order->discount = calculateDiscount(subtotal);
    order->deliveryCharge = calculateDeliveryCharge(subtotal, distance);
    order->total = calculateFinalBill(order->subtotal,
                                      order->discount,
                                      order->deliveryCharge);
}


/*
 * Search an array of Order structures.
 *
 * Return the INDEX of the order having orderId.
 *
 * If n <= 0 or no matching order ID exists, return -1.
 *
 * Marks: 1
 */
int findOrderById(Order orders[],
                  int n,
                  int orderId)
{
    if (orders == NULL || n <= 0)
    {
        return -1;
    }

    for (int i = 0; i < n; i++)
    {
        if (orders[i].orderId == orderId)
        {
            return i;
        }
    }

    return -1;
}


/* ============================================================
 * PART D: POINTER + FILE PERSISTENCE
 * Marks = 6
 * ============================================================
 */


/*
 * Update the quantity of a particular item in an order.
 *
 * The function receives a POINTER to the Order structure.
 *
 * Update only the quantity of the matching item. 
 * Do not recalculate the order's billing information in this function. 
 * If the item is found, return 1; otherwise, return 0.
 *
 * Return:
 *
 *   1 if the item was found and updated
 *   0 if the item was not found
 *
 * Marks: 1
 */
int updateItemQuantity(Order *order,
                       int itemId,
                       int newQuantity)
{
    if (order == NULL)
    {
        return 0;
    }

    for (int i = 0; i < order->itemCount; i++)
    {
        if (order->items[i].itemId == itemId)
        {
            order->items[i].quantity = newQuantity;
            return 1;
        }
    }

    return 0;
}


/*
 * Save all orders to a readable text file.
 *
 * Save the number of orders followed by all n complete
 * Order structures, including their item and billing information.
 *
 * The 'orders[]' parameter represents an array of Order
 * structures supplied by the caller. In a function parameter,
 * Order orders[] is equivalent to Order *orders. The function
 * can access the caller's original array through this parameter.
 *
 * The function should save:
 *
 *   - the number of orders
 *   - all Order structures, including their item and billing information
 *
 * Assume n is within the permitted range of 0 to MAX_ORDERS.
 *
 * Return 1 only if all required data is written successfully;
 * otherwise, return 0.
 *
 * Return:
 *   1 on success
 *   0 on failure
 *
 * Marks: 2
 */
int saveOrders(const char filename[],
               Order orders[],
               int n)
{
    if (filename == NULL || n < 0 || n > MAX_ORDERS || (n > 0 && orders == NULL))
    {
        return 0;
    }

    FILE *fp = fopen(filename, "w");
    if (fp == NULL)
    {
        return 0;
    }

    if (fprintf(fp, "%d\n", n) < 0)
    {
        fclose(fp);
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (fprintf(fp, "ORDER,%d,%s,%d,%.2f,%.2f,%.2f,%.2f\n",
                    orders[i].orderId,
                    orders[i].customerName,
                    orders[i].itemCount,
                    orders[i].subtotal,
                    orders[i].discount,
                    orders[i].deliveryCharge,
                    orders[i].total) < 0)
        {
            fclose(fp);
            return 0;
        }

        for (int j = 0; j < orders[i].itemCount; j++)
        {
            if (fprintf(fp, "ITEM,%d,%s,%.2f,%d\n",
                        orders[i].items[j].itemId,
                        orders[i].items[j].name,
                        orders[i].items[j].price,
                        orders[i].items[j].quantity) < 0)
            {
                fclose(fp);
                return 0;
            }
        }
    }

    if (fclose(fp) != 0)
    {
        return 0;
    }

    return 1;
}


/*
 * Load orders from a readable text file.
 *
 * Read the saved order count and then load all
 * corresponding Order structures into the provided array.
 *
 * The 'orders[]' parameter represents an array of Order
 * structures supplied by the caller. In a function parameter,
 * Order orders[] is equivalent to Order *orders. The function
 * can modify the caller's original array through this parameter.
 *
 * The 'n' parameter is a POINTER to an integer. Use *n to
 * update the number of loaded orders in the caller's variable.
 * Update *n only on success.
 *
 * The function should restore:
 *
 *   - all Order structures, including their item and billing information
 *   - the number of orders
 *
 * Return 0 if the file cannot be opened, the saved order count
 * is outside the range 0 to MAX_ORDERS, or the required data
 * cannot be read completely. Return 1 on success.
 *
 * Return:
 *   1 on success
 *   0 on failure
 *
 * Marks: 3
 */
int loadOrders(const char filename[],
               Order orders[],
               int *n)
{
    if (filename == NULL || orders == NULL || n == NULL)
    {
        return 0;
    }

    FILE *fp = fopen(filename, "r");
    if (fp == NULL)
    {
        return 0;
    }

    char line[512];
    if (fgets(line, sizeof(line), fp) == NULL)
    {
        fclose(fp);
        return 0;
    }

    int count = 0;
    if (sscanf(line, "%d", &count) != 1)
    {
        fclose(fp);
        return 0;
    }

    if (count < 0 || count > MAX_ORDERS)
    {
        fclose(fp);
        return 0;
    }

    for (int i = 0; i < count; i++)
    {
        if (fgets(line, sizeof(line), fp) == NULL)
        {
            fclose(fp);
            return 0;
        }

        memset(&orders[i], 0, sizeof(Order));

        int fields = sscanf(line, "ORDER,%d,%49[^,],%d,%f,%f,%f,%f",
                            &orders[i].orderId,
                            orders[i].customerName,
                            &orders[i].itemCount,
                            &orders[i].subtotal,
                            &orders[i].discount,
                            &orders[i].deliveryCharge,
                            &orders[i].total);

        if (fields != 7)
        {
            fclose(fp);
            return 0;
        }

        if (orders[i].itemCount < 0 || orders[i].itemCount > MAX_ITEMS)
        {
            fclose(fp);
            return 0;
        }

        for (int j = 0; j < orders[i].itemCount; j++)
        {
            if (fgets(line, sizeof(line), fp) == NULL)
            {
                fclose(fp);
                return 0;
            }

            int itemFields = sscanf(line, "ITEM,%d,%29[^,],%f,%d",
                                    &orders[i].items[j].itemId,
                                    orders[i].items[j].name,
                                    &orders[i].items[j].price,
                                    &orders[i].items[j].quantity);

            if (itemFields != 4)
            {
                fclose(fp);
                return 0;
            }
        }
    }

    fclose(fp);
    *n = count;
    return 1;
}


/* ============================================================
 * HELPER FUNCTIONS FOR MANUAL TESTING
 * ============================================================
 *
 * These functions are already implemented.
 * Students do not need to modify them.
 * Students can add functions here for testing purposes.
 * The automated grader does NOT need to use main().
 */


/*
 * Print one order.
 */
void displayOrder(Order *order)
{
    int i;

    printf("\n----------------------------------\n");
    printf("Order ID       : %d\n", order->orderId);
    printf("Customer       : %s\n", order->customerName);

    printf("Items:\n");

    for (i = 0; i < order->itemCount; i++)
    {
        printf("  %d. %-15s %.2f x %d = %.2f\n",
               order->items[i].itemId,
               order->items[i].name,
               order->items[i].price,
               order->items[i].quantity,
               order->items[i].price *
               order->items[i].quantity);
    }

    printf("Subtotal       : %.2f\n", order->subtotal);
    printf("Discount       : %.2f\n", order->discount);
    printf("Delivery       : %.2f\n", order->deliveryCharge);
    printf("Total           : %.2f\n", order->total);

    printf("----------------------------------\n");
}


/*
 * Manual testing menu.
 *
 * This is provided only to help students test their
 * implementation.
 */
void manualTest()
{
    Order order;

    memset(&order, 0, sizeof(Order));

    order.orderId = 1001;

    strcpy(order.customerName, "Test Customer");

    /*
     * Students can uncomment these lines while testing.
     */

    /*
    addItemToOrder(&order,
                   1,
                   "Burger",
                   250.0,
                   2);

    addItemToOrder(&order,
                   2,
                   "Coffee",
                   100.0,
                   1);

    calculateOrder(&order, 5.0);

    displayOrder(&order);
    */
}


/* ============================================================
 * MAIN
 * ============================================================
 */

int main()
{
    printf("============================================\n");
    printf("       FOOD ORDERING SYSTEM\n");
    printf("============================================\n");

    printf("\nBoilerplate loaded successfully.\n");
    printf("Implement the TODO functions.\n");

    /*
     * The automated grading system will directly
     * call the required functions.
     */

    manualTest();

    return 0;
}
