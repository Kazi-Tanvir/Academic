# Institute of Information Technology
## University of Dhaka
### Bachelor of Science in Software Engineering (BSSE)
**1st Year 1st Semester Final Examination, 2026**  
**CSE 1101L : Structured Programming Lab**  
**Marks: 30 # Duration: 2 hours**

---

A food delivery service wants to develop a simple **Food Ordering System** using the C programming language. The system should allow the service to process customer orders, calculate the cost of food items, apply discounts, calculate delivery charges, maintain multiple orders, search for orders, and preserve order information for future use.

You are provided with a C boilerplate program containing the required constants, data structures, function declarations, and a basic testing framework. You must complete the functions marked `TODO` in the provided source file. You may create additional helper functions if necessary, but you must not change the names, return types, or parameters of the provided functions. The supplied `main()` function and predefined data structures should not be modified unless explicitly permitted by the instructor. The examination is divided into four progressive sections.

---

## Part A: Basic Order Processing (7 Marks)

The first part of the system processes the basic financial information of an order. For a single food item, the system must calculate the item subtotal from its unit price and quantity. The system must also calculate the discount amount according to the following rules: orders with a subtotal below 500৳ receive no discount; orders from 500৳ up to but not including 1000৳ receive a 5% discount; orders from 1000৳ up to but not including 2000৳ receive a 10% discount; and orders with a subtotal of 2000৳ or more receive a 15% discount upto 1000৳. The discount function must return the discount amount rather than the percentage.

The system must also calculate the delivery charge based on the delivery distance. For a distance of up to 3 km, the delivery charge is 50৳; for a distance greater than 3 km and up to 7 km, it is 80৳; for a distance greater than 7 km and up to 12 km, it is 120৳; and for a distance greater than 12 km, it is 180৳. However, an order with a subtotal of 1500৳ or more receives free delivery. Finally, the system must calculate the final bill using the subtotal, discount, and delivery charge.

---

## Part B: Multiple Items and Orders (10 Marks)

The system must now be extended to process multiple food items and multiple customer orders. An order may contain several food items, and the system must calculate the subtotal by processing the price and quantity of each item. The system should support up to 10 items in an order. The system must also be capable of processing multiple orders, with a maximum of 100 orders. Given the final bill of each order, the system must calculate the total sales and average order value. It must also identify the order having the highest final bill.

The system must provide a search facility that accepts an order ID and identifies the corresponding order. If the specified order does not exist, the function should indicate that no matching order was found. The system must also be able to count the number of orders whose final bill is greater than or equal to a specified amount.

---

## Part C: Structured Order Records (7 Marks)

The system must now represent each complete customer order as a single structured record. An order should contain its order ID, customer name, item information, number of items, subtotal, discount, delivery charge, and final bill. The provided boilerplate contains the required `Order` and `OrderItem` structures.

The system must support a maximum of 100 orders, with each order containing a maximum of 10 items. The `addItemToOrder()` function must not add an item if the order has already reached `MAX_ITEMS`; it must return `0` in this case. Otherwise, it must add the item and return `1`. Functions that process arrays of orders or items will receive valid array contents within the specified capacity limits. The `loadOrders()` function must not load more than `MAX_ORDERS` orders; it must return `0` if the file specifies a number of orders outside the permitted range or if the saved data cannot be read completely.

---

## Part D: Persistent Order System (6 Marks)

The final part extends the system to support pointer-based order updates and file persistence. The system must calculate and update the billing information of an order using a pointer to its structure. It must also allow the quantity of a specific item in an order to be updated using the item's ID. The quantity-update function should return `1` if the item is found and updated, or `0` if the item is not found.

The system must save all orders to a text file, including the number of orders and all associated item and billing information. It must also load previously saved orders from the text file into memory. The loading function must update the number of loaded orders through a pointer and return `1` on success or `0` on failure.

---

## Important Instructions

Do not change the names, return types, or parameters of the provided functions. Do not remove or alter the predefined structures, constants, or required interfaces. You may use additional local variables and helper functions where necessary. Your program should handle valid input within the specified limits. Pay particular attention to boundary conditions such as discount thresholds, delivery-distance thresholds, zero or empty collections, maximum numbers of items or orders, and searches for orders that do not exist. The automated grader will evaluate functionality rather than the appearance of the program output. Make sure that the required functions return the specified values and correctly update the supplied data structures.

