//SIMPLE CALCULATOR
#include<iostream>
#include<string>
using namespace std;
//int main()
//{
//	double num1, num2;
//	char op;
//	cout << "\n Enter the two numbers and an operator: ";
//	cin >> num1 >> op >> num2;
//	switch(op)
//	{
//		case '+':
//			cout << "\n Result: " << num1+num2;
//			break;
//		case '-':
//		cout << "\n Result: " << num1-num2;
//		    break;
//		case '*':
//		cout << "\n Result: " << num1*num2;
//			break;
//		case '/':
//		cout << "\n Result: " << num1/num2;
//		    break;
//		default:
//		cout << "\n Error! Invalid operator ";
//		    break;	 	
//	}
//	return 0;
//}

//DAYS OF WEEKS
//int main()
//{
//	int num;
//	cout << "\n Enter 1 for Mon,2 for Tues,3 for Wed,4 for Thu,5 for Fri,6 for Sat,7 for Sun ";
//	cin >> num;
//	switch(num)
//	{
//		case 1:
//		cout << "\n Monday ";
//		break;
//		case 2:
//		cout << "\n Tuesday ";
//		break;
//		case 3:
//		cout << "\n Wednesday ";
//		break;
//		case 4:
//		cout << "\n Thursday ";
//		break;
//		case 5:
//		cout << "\n Friday ";
//		break;
//		case 6:
//		cout << "\n Saturday ";
//		break;
//		case 7:
//		cout << "\n Sunday ";
//		break;
//		default:
//		cout <<"\n Error! Wrong Input ";
//		break;	
//	}
//	return 0;
//}

//AREA OF DIFFERENT SHAPES
//int main()
//{
//	int choice;
//	const double PI = 3.14;
//	cout << "\n Enter your choice.1 for Circle, 2 for Rectangle, 3 for Triangle ";
//	cin >> choice;
//	switch(choice)
//	{
//		case 1:
//		{		
//		double radius;	
//		cout << "\n You have selected Circle.Please enter its dimensions. ";
//		cin >> radius;
//		cout << "\n Area of Circle: " << PI*radius*radius;
//		break;
//	   }
//		case 2:
//		{
//		double length, width;
//		cout << "\n You have selected Rectangle.Please enter its dimensions. ";
//		cin >> length >> width;
//		cout << "\n Area of Rectangle: " << length*width;
//		break;
//	    }  
//		case 3:
//	    {
//		double base, height;
//		cout << "\n You have selected Triangle.Please enter its dimensions. ";
//		cin >> base >> height;
//		cout << "\n Area pf Triangle: " << 0.5*base*height;
//		break;
//	    }
//		default:
//		cout << "\n Error ";
//		break;	
//	}
//	return 0;
//}

//CURRENCY CONVERTER
//int main()
//{
//	double amount;
//	char currency;
//	cout << "\n Enter the amount: $";
//	cin >> amount;
//	cout << "\n press P to convert to PKR, I to INR, E to Euros: ";
//	cin >> currency; 
//	switch(currency)
//	{
//	case 'P':
//	cout << "\n PKR " << 279.10*amount;
//	break;
//	case 'I':
//	cout << "\n INR " << 87.79*amount;
//	break;
//	case 'E':
//	cout << "\n Euros " << 0.97*amount;
//	break;
//	default:
//	cout << "\n Error";	
//	}
//	return 0;
//}

//SHOPING SYSTEM
int main()
{
	char category;
	int item;
	int  total = 0, quantity = 0;
	double discount, final_total;
	cout << "\n Press E for electronics, C for clothing, G for groceries category: ";
	cin >> category;
	if(category == 'E' || category == 'e')
	{
		cout << "\n Choose the items.1 for Laptops($1000), 2 for Smartphones($700), 3 for Headphones($150): ";
		cin >> item;
		cout << "\n Enter the quantity ";
		cin >> quantity;
		switch(item)
		{
			case 1:
			total = 1000*quantity;
			cout << "\n Laptops: $" << total;
			break;
			case 2:
		    total = 700*quantity;
			cout << "\n Smartphones: $" << total;
			break;
			case 3:
			total = 150*quantity;
			cout << "\n Headphones: $" << total;
		    break;
		}
	}
	else if(category == 'C' || category == 'c')
	{
		cout << "\n Choose the item.1 for Jacket($120), 2 for T-Shirt($40), 3 for Jeans($60): ";
		cin >> item;
		cout << "\n Enter the quantity ";
		cin >> quantity;
		switch(item)
		{
			case 1:
			total = 120*quantity;
			cout << "\n Jacket: $" << total;
			break;
			case 2:
			total = 40*quantity;
			cout << "\n T-Shirt: $" << total;
			break;
			case 3:
			total = 60*quantity;
			cout << "\n Jeans: $" << total;	
			break;
		}
	}
	else if(category == 'G' || category == 'g')
	{
		cout << "\n Choose the item.1 for Milk(1liter-$2), 2 for Bread(1loaf-$3), 3 for Eggs(1Dozen-$5): ";
		cin >> item;
		cout << "\n Enter the quantity ";
		cin >> quantity;
		switch(item)
		{
			case 1:
			total = 2*quantity;
			cout << "\n Milk: $" << total;
			break;
			case 2:
			total = 3*quantity;	
			cout << "\n Bread: $" << total;
			break;
			case 3:
			total = 5*quantity;	
			cout << "\n Eggs: $" << total;
			break;	
		}
	}
	else
	{
		cout << "\n Invalid Selection!";
	}
	//Applying Discount
	if(total>=100 && total<=500)
	{
		discount = total*0.1;
		cout << "\n 10% Discount: " << discount;
	}
	else if(total>500)
	{
		discount =total*0.2;
		cout << "\n Discount: " << discount;
	}
	else
	{
		cout << "\n No Discount";
	}
	final_total = total - discount;
	//Invoice
	cout << "\n Total Price: $" << total;
	cout << "\n Discount: $" << discount;
	cout << "\n Final Total: $" << final_total;
	return 0;
}
