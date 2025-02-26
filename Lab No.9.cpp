//1 TO N NUMBERS
#include<iostream>
#include<iomanip>
using namespace std;
//int main()
//{
//	int i = 1;
//	int N;
//	cout << "\n Enter The Number: ";
//	cin >> N;
//	while(i<N)
//	{
//		cout << i << "" << endl;
//		i++;
//	}
//	return 0;
//}

//MULTIPLICATION TABlE
//int main()
//{
//	int n;
//	int i = 1;
//	cout << "\n Enter the number to be multiplied: ";
//	cin >> n;
//	while(i<=10)
//	{
//		cout << n << " X " << i << "=" << i*n << endl;
//		i++;
//	}
//	return 0;
//}

//POSITIVE NUMBER
int main()
{
	int num;
	while(1)
	{
		cout << "\n Enter a positive number: ";
		cin >> num;
	if(num>0)
	{
		cout << "\n Positive number: " << num;
	}
	else
	{
		cout << "Error! Please enter a positive number.\n";
	  }
	}
	return 0;
}	

//SUM OF FIRST FIVE NATURAL NUMBER
//int main()
//{
//	int num = 1;
//	int sum = 0;
//	while(num<=5)
//	{
//	    sum+=num;
//		num++;
//	}
//	cout << "\n Sum of first five natural number: " << sum; 
//	return 0;
//}

//MENU-DRIVEN PROGRAM FOR A SIMPLE BANKING SYSTEM
//int main()
//{
//	double balance = 1000;
//	double amount;
//	int choice;
//	while(1)
//	{
//		cout << " 1. for Depositing money.\n 2. for Withdrawing money.\n 3. for Check balance.\n 4. for Exit ";
//		cout << "\n Enter your choice: ";
//		cin >> choice;
//		switch(choice)
//		{
//		case 1:
//		{	
//			cout << "\n Enter the amount to deposit: $";
//			cin >> amount;
//			if(amount > 0)
//			{
//				cout << " Deposit Successful! \n";
//				balance+=amount;
//			}
//			else
//			{
//				cout << " Invalid Input.Try again \n";
//			}
//		}
//			break;	
//		case 2:
//		{
//			cout << "\n Enter the amount to withdraw: $";
//			cin >> amount;
//			if(amount<=balance && amount>0 )
//			{
//				cout << " Withdraw Successful! \n";
//				balance-=amount;
//			}
//			else
//			{
//				cout << " Insuffient Balance! \n";
//			}
//			break;
//		}
//		case 3:
//		{
//			cout << " Checking balance: $ " << balance << "\n";
//			break;
//		}
//		case 4:
//		{
//		    cout << " Exiting. Thank you for visiting us! \n";
//		   return 0;
//	    }
//	    default:
//	    	cout << "\n Invalid Menu choice. Please try again ";
//	    	break;
//	    }
//	}
//	return 0;
//}

//DO-WHILE PASSWORD
//int main()
//{
//	int password = 123;
//	int pass;
//	do
//	{
//		cout << "\n Enter the Password: ";
//		cin >> pass;
//		if(pass!=password)
//		{
//			cout << "\n Wrong Password. Try again. ";
//		}
//	}
//	while(pass!=password);
//	cout << "\n Access Granted! ";
//	return 0;
//}

//DO-WHILE RESTAURANT
//int main()
//{
//	int choice, subChoice;
//	double totalBill, quantity;
//	char continueOrder;
//	cout << setw(60) << setfill('=') << "\n";
//	cout << " \t\tRestaurant Menu \n";
//	cout << setw(60) << setfill('=') << " " << endl;
//	do
//	{
//		cout << " 1.Breakfast \n 2.Lunch \n 3.Dinner \n 4.Exist ";
//		cout << "\n Enter your Choice: ";
//		cin >> choice;
//		switch(choice)
//		{
//		case 1:
//		{
//		  cout << " Breakfast Menu \n";
//		 cout << " 1. Anda Paratha(Rs.40).\n 2. Nan Channy(Rs.60).\n 3. Siri paye(Rs.150).\n 4. Tea(Rs.15) ";
//		 cout << "\n Enter your Choice ";
//		 cin >> subChoice;
//		 cout << "\n Enter the quantity: ";
//		 cin >> quantity;
//		 if(subChoice == 1)
//		 {
//		   totalBill += 40*quantity; 
//		 }
//		 else if(subChoice == 2)
//		 {
//		 	totalBill += 60*quantity;
//		 }
//		 else if(subChoice == 3)
//		 {
//		 	totalBill += 150*quantity;
//		 }
//		 else if(subChoice == 4)
//		 {
//		 	totalBill += 15*quantity;
//		 }
//		 else
//		 {
//		 	cout << "\n Invalid SubChoice... ";
//		 }
//		 break;
//		}
//		case 2:
//		{
//			cout << "Lunch Menu \n";
//			cout << " 1. Chicken Karahi(Rs.1050/KG).\n 2. Mutton Karahi(Rs.1800/KG).\n 3. Egg Fried Rice(Rs.450/plate).\n 4. BBQ(Rs.1050/dozen) ";
//			cout << "\n Enter your Choice: ";
//		    cin >> subChoice;
//		    cout << "\n Enter the quantity: ";
//			cin >> quantity;
//			if(subChoice == 1)
//			{
//				totalBill += 1050*quantity;
//			}
//			else if(subChoice == 2)
//			{
//				totalBill += 1800*quantity;
//			}
//			else if(subChoice == 3)
//			{
//				totalBill += 450*quantity;
//			}
//			else if(subChoice == 4)
//			{
//				totalBill += 1050; 
//			}
//			else
//			{
//				cout << "\n Invalid SubChoice... ";
//			}
//			break;
//		}
//		case 3:
//		{
//			cout << "Dinner Menu \n";
//			cout << " 1. Chicken Karahi(Rs.1050/KG).\n 2. Mutton Karahi(Rs.1800/KG).\n 3. Egg Fried Rice(Rs.450/plate).\n 4. BBQ(Rs.1050/dozen).\n 5. Saji(800/KG) ";
//			cout << "\n Enter your Choice: ";
//		    cin >> subChoice;
//		    cout << "\n Enter the quantity: ";
//			cin >> quantity;
//			if(subChoice == 1)
//			{
//				totalBill += 1050*quantity;
//			}
//			else if(subChoice == 2)
//			{
//				totalBill += 1800*quantity;
//			}
//			else if(subChoice == 3)
//			{
//				totalBill += 450*quantity;
//			}
//			else if(subChoice == 4)
//			{
//				totalBill += 1050*quantity;
//			}
//			else if(subChoice == 5)
//			{
//				totalBill += 800*quantity;
//			}
//			else
//			{
//				cout << "\n Invalid SunChoice....";
//			}
//			break;
//			}
//			case 4:
//			cout << "\n Existing. Thank you for visiting us ";
//			return 0;
//			break;
//			default:
//			cout << "\n Invalid Choice..";
//			break;	
//		}
//		cout << "\n Do you want to order more? (y/n): ";
//		cin >> continueOrder;
//	}while(continueOrder == 'Y' || continueOrder == 'y');
//	cout << "\n Total Bill: RS." << totalBill;
//	return 0;
//}
