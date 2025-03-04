//TASKS OF LIBRARY FUNCTION
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
//int main()
//{
//	double num;
//	cout << "\n Enter the number: ";
//	cin >> num;
//	cout << "\n square root: " << sqrt(num);
//	cout << "\n Absolute power of a number: " << fabs(num);
//	cout << "\n Sin: " << sin(num);
//	cout << "\n Cos: " << cos(num);
//	cout << "\n power of 3: " << pow(num, 3);
//	return 0;
//}

//GREETING MESSAGE
//void greet()
//{
//	cout << "\"Hello, Welcome to C++ Functions!\" \n";
//}
//int main()
//{
//	greet();
//	return 0;
//}

// Function with If-Else Statement (Even or Odd):
//double evenOdd(int a)
//{
//	if(a%2 == 0)
//	{
//		cout << a << " is Even Number \n";
//	}
//	else 
//	{
//		cout << a << " is Odd Number \n";
//	}
//}
//int main()
//{
//	int num;
//	cout << "\n Enter the number: ";
//	cin >> num;
//	evenOdd(num);
//	return 0;
//}

// Function with a Loop (Factorial Calculation):
//int fac(int a)
//{
//	int factorial = 1;
//	for(int i =1; i<=a; i++)
//	{
//		factorial *= i;
//	}
//	return factorial;
//}
//int main()
//{
//	int N;
//	cout << "\n Enter the number: ";
//	cin >> N;
//    fac(N);
//	cout << "\n Factorial: " << fac(N);
//	return 0;
//}

// Menu-Driven Program - Calculator
//double add(double a, double b);
//double subtract(double a, double b);
//double multiply(double a, double b);
//double divide(double a, double b);
//
//int main() 
//{
//    int choice;
//    double num1, num2, result;
//    
//    do 
//	{
//        cout << "\n Simple Calculator";
//        cout << "\n 1. Addition";
//        cout << "\n 2. Subtraction";
//        cout << "\n 3. Multiplication";
//        cout << "\n 4. Division";
//        cout << "\n 5. Exit";
//        cout << "\n Enter your choice: ";
//        cin >> choice;
//        
//        if (choice >= 1 && choice <= 4) {
//            cout << "\n Enter two numbers: ";
//            cin >> num1 >> num2;
//        }
//        
//        switch (choice) 
//		{
//            case 1:
//                result = add(num1, num2);
//                cout << "Result: " << result << endl;
//                break;
//            case 2:
//                result = subtract(num1, num2);
//                cout << "Result: " << result << endl;
//                break;
//            case 3:
//                result = multiply(num1, num2);
//                cout << "Result: " << result << endl;
//                break;
//            case 4:
//                if (num2 != 0)
//                    result = divide(num1, num2);
//                else {
//                    cout << "\n Error! Division by zero is not allowed.";
//                   result = divide(num1, num2);
//   				    cout << "Result: " << result << endl;
//                }
//                cout << "\n Result: " << result;
//                break;
//            case 5:
//                cout << "\n Exiting program. Goodbye!";
//                break;
//            default:
//                cout << "\n Invalid choice! Please select a valid option.";
//        }
//    } while (choice != 5);
//    
//    return 0;
//}
//
//double add(double a, double b) 
//{
//    return a + b;
//}
//
//double subtract(double a, double b) 
//{
//    return a - b;
//}
//
//double multiply(double a, double b) 
//{
//    return a * b;
//}
//
//double divide(double a, double b) 
//{
//    return a / b;
//}

// Menu-Driven Program – Restaurant Bill
void displayMenu();
double calculateItemCost(double price, int quantity);
double calculateFinalBill(double subtotal, double taxRate);

int main() 
{
    const int numItems = 5;
    string items[numItems] = {"Burger", "Pizza", "Pasta", "Salad", "Soda"};
    double prices[numItems] = {5.99, 8.99, 7.49, 4.99, 1.99};
    int choice, quantity;
    double subtotal = 0.0;
    const double taxRate = 0.10;
    
    do {
        displayMenu();
        cout << "\n Enter the item number to order (or 0 to finish): ";
        cin >> choice;
        
        if (choice > 0 && choice <= numItems) {
            cout << "\n Enter quantity: ";
            cin >> quantity;
            subtotal += calculateItemCost(prices[choice - 1], quantity);
        } else if (choice != 0) {
            cout << "\n Invalid choice! Please select a valid item" << endl;
        }
    } while (choice != 0);
    
    double totalBill = calculateFinalBill(subtotal, taxRate);
    
    cout << fixed << setprecision(2);
    cout << "\n Subtotal: $" << subtotal;
    cout << "\n Total (including tax): $";
    cout << "\n Thank you for dining with us!";
    
    return 0;
}

void displayMenu() 
{
    cout << "\nRestaurant Menu:";
    cout << "\n 1. Burger - $5.99";
    cout << "\n2. Pizza - $8.99";
    cout << "\n3. Pasta - $7.49";
    cout << "\n 4. Salad - $4.99";
    cout << "\n 5. Soda - $1.99";
}
double calculateItemCost(double price, int quantity) 
{
    return price * quantity;
}
double calculateFinalBill(double subtotal, double taxRate) 
{
    return subtotal + (subtotal * taxRate);
}
