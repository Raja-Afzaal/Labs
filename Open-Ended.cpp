#include <iostream>
#include <fstream>
#include <ctime>
#include <iomanip>

using namespace std;

 const int MAX_ITEMS = 10; 

struct MenuItem 
{
    int id;
    char name[50];
    double price;
    int stock; 
};

struct Order 
{
    int itemId[MAX_ITEMS];
    int quantity[MAX_ITEMS];
    int itemCount;
};

MenuItem breakfastMenu[MAX_ITEMS] = {
    {1, "1.Baghrir", 600, 10}, {2, "2. Msemen", 500, 10}, {3, "3.Harira Soup", 300, 10}
};

MenuItem lunchMenu[MAX_ITEMS] = {
    {1, "1.Chicken Pastilla", 800, 10}, {2, "2.Maakouda ", 1000, 10}, {3, "3.Zaalouk", 700, 10}
};

MenuItem dinnerMenu[MAX_ITEMS] = {
    {1, "1.Kefta Tagine", 1500, 10}, {2, "2.Mechoui", 1200, 10}, {3, "3.Fish Chermoula", 700, 10}
};

void getMenu(MenuItem menu[], int &size) 
{
    time_t now = time(0);
    tm *ltm = localtime(&now);
    int hour = ltm->tm_hour;

    if (hour >= 6 && hour < 11) 
    {
        cout << "Breakfast Menu:\n";
        size = 3;
        for (int i = 0; i < size; i++)
            menu[i] = breakfastMenu[i];
    } 
    else if (hour >= 11 && hour < 16) 
    {
        cout << "Lunch Menu:\n";
        size = 3;
        for (int i = 0; i < size; i++)
            menu[i] = lunchMenu[i];
    } 
    else 
    {
        cout << "Dinner Menu:\n";
        size = 3;
        for (int i = 0; i < size; i++)
            menu[i] = dinnerMenu[i];
    }
}

void takeOrder(Order &order, MenuItem menu[], int size) 
{
    int choice, qty;
    order.itemCount = 0;

    cout << "\nEnter item number to order (0 to stop): ";
    while (true) 
    {
        cout << "\n Item No: ";
        cin >> choice;
        if (choice == 0) 
        break;
        if (choice > 0 && choice <= size) 
        {
            cout << "\n Quantity: ";
            cin >> qty;

            if (menu[choice - 1].stock >= qty) 
            {
                order.itemId[order.itemCount] = choice;
                order.quantity[order.itemCount] = qty;
                menu[choice - 1].stock -= qty;
                order.itemCount++;
            } 
            else 
            {
                cout << "Sorry, We are out of stock!\n";
            }
        } 
        else 
        {
            cout << "Invalid choice, try again.\n";
        }
    }
}

void generateBill(Order &order, MenuItem menu[], int size) {
    double total = 0, discount = 0, grandTotal = 0;
    cout << setfill('=') << setw(50) << "" << endl;
    cout << setw(30) << setfill(' ') << " RECEIPT " << setw(20) << endl;
    cout << setfill('=') << setw(50) << "" << endl;
    
    cout << left << setfill(' ') 
         << setw(20) << "Item" 
         << setw(10) << "Qty" 
         << setw(10) << "Price" 
         << setw(10) << "Total" << endl;
    
    cout << setfill('-') << setw(50) << "" << endl;

    for (int i = 0; i < order.itemCount; i++) {
        int id = order.itemId[i] - 1;
        double price = menu[id].price;
        double itemTotal = price * order.quantity[i];
        total += itemTotal;

        cout << left << setfill(' ') 
             << setw(20) << menu[id].name 
             << setw(10) << order.quantity[i] 
             << setw(10) << price 
             << setw(10) << itemTotal << endl;
    }

    if (total > 5000) {
        discount = total * 0.10;
    }
    grandTotal = total - discount;

    cout << setfill('-') << setw(50) << "" << endl;
    cout << setfill(' ') << left 
         << setw(30) << "Discount Applied: " 
         << "RS." << discount << " (10%)" << endl;
    cout << left << setw(30) << "Grand Total: " 
         << "RS." << grandTotal << endl;
    cout << setfill('=') << setw(50) << "" << endl;
}

void saveOrderToFile(Order &order, MenuItem menu[], int size) {
    ofstream file("orders.txt", ios::app);
    if (!file) 
    {
        cout << "Error opening file!\n";
        return;
    }
    file << "--- Order ---\n";
    for (int i = 0; i < order.itemCount; i++) 
    {
        int id = order.itemId[i] - 1;
        file << menu[id].name << " x " << order.quantity[i] << " = RS." << menu[id].price * order.quantity[i] << "\n";
    }
    file << "-------------------\n";
    file.close();
}

void saveInventory(MenuItem menu[], int size) {
    ofstream file("inventory.txt");
    if (!file) {
        cout << "Error opening file!\n";
        return;
    }
    for (int i = 0; i < size; i++) {
        file << menu[i].id << " " << menu[i].name << " " << menu[i].price << " " << menu[i].stock << "\n";
    }
    file.close();
}

void displayInventory(MenuItem menu[], int size) {
    cout << setfill('=') << setw(40) << "" << endl;
    cout << setw(20) << setfill(' ') << " INVENTORY " << setw(20) << endl;
    cout << setfill('=') << setw(40) << "" << endl;
    cout << left << setfill(' ') << setw(5) << "No." 
         << setw(25) << "Item Name" 
         << setw(10) << "Stock" << endl;
    cout << setfill('-') << setw(40) << "" << endl;

    for (int i = 0; i < size; i++) {
        cout << left << setfill(' ') << setw(5) << menu[i].id 
             << setw(25) << menu[i].name 
             << setw(10) << menu[i].stock << endl;
    }
    cout << setfill('=') << setw(40) << "" << endl;
}


int main() {
    cout << " ====WELCOME==== " << endl;
    MenuItem menu[MAX_ITEMS];
    int size;
    Order order;

    getMenu(menu, size);
    displayInventory(menu, size);
    takeOrder(order, menu, size);
    generateBill(order, menu, size);
    saveOrderToFile(order, menu, size);
    saveInventory(menu, size);

    cout << "\nThank you for visiting us!\n";
    return 0;
}
