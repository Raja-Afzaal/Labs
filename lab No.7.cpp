//POSITIVE,NEGATIVE AND ZERO
#include<iostream>
#include<string>
using namespace std;
//int main()
//{
//	int num;
//	cout << "Enter the number" << endl;
//	cin >> num;
//	if(num>0)
//	{
//		cout << "Number is positive" << endl;
//	} else if(num<0)
//	{
//		cout << "Number is negative" <<endl;
//	} else
//	{
//		cout << "Number is zero" << endl;
//	}
//	return 0;
//}

//SUGGESTION UPON TEMPERATURE
//int main()
//{
//	int temp;
//	cout << "\n Enter The Temperature: ";
//	cin >> temp;
//	if(temp>=40)
//	{
//		cout << "\n Stay Indoors";
//	} else if(temp>=30 && temp<=39)
//	{
//		cout << "\n Drink Plenty of Water";
//	} else if(temp>=20 && temp<=29)
//	{
//		cout <<"\n The Weather is Pleasant";
//	} else
//	{
//		cout << "\n Wear Warm Clothes";
//	}
//	return 0;
//}

//LOGIN SYSTEM
//int main()
//{
//	string  correct_username = "admin";
//	string correct_password = "12345";
//	string password;
//	string username;
//	cout << "\n Enter The Username: ";
//	cin >> username;
//	cout << "\n Enter The Password: ";
//	cin >> password;
//	if(username == correct_username && password == correct_password)
//	{
//		cout << "\n Access Granted ";
//	} else if(username == correct_username && password != correct_password)
//	{
//		cout << "\n Wrong Password ";
//	} else
//	{
//		cout << "\n User Not Found ";
//	}
//	return 0;
//}

//SCHOLARSHIP ELIGIBILITY SYSTEM
//int main()
//{
//	int urdu , math , english;
//	int total_marks , eligibility;
//	char grade;
//	float percentage;
//	cout << "Enter marks for urdu \n ";
//	cin >> urdu;
//	cout << "Enter marks for math \n ";
//	cin >> math;
//	cout << "Enter marks for english \n ";
//	cin >> english;
//	total_marks = urdu + math + english;
//	percentage = (total_marks/3.0);
//	//Grades Calculation
//	if(percentage>=90)
//	{
//		grade = 'A';
//	} 
//	else if(percentage>=80 && percentage<90)
//	{
//		grade = 'B';
//	} 
//	else if(percentage>=70 && percentage<80)
//	{
//		grade = 'C';
//	}
//	else if(percentage>=60 && percentage<70)
//	{
//		grade = 'D';
//	}
//	else
//	{
//		grade = 'F';
//	}
//	//Display Output
//	cout << "\n Total Marks: " << total_marks;
//	cout << "\n Total Percentage: " << percentage << "%";
//	cout << "\n Grades: " << grade;
//	//Failure Conditiom
//	if(urdu<60 || math<60 || english<60)
//	{
//		cout << "\n Failed(Grade F in one or more subjects) ";
//		return 0;
//	}
//	//Eligibility
//	if(grade = 'A' && total_marks>=270)
//	{
//		cout << "\n Student is eligible for a merit scholarship ";
//	}
//	else if(grade = 'B' && total_marks>=240)
//	{
//		cout << "\n Student is eligible for regular scholarship ";
//	}
//	else
//	{
//		cout << "\n Not eligible for scholarship ";
//	}
//	return 0;
//}

//LOAN ELIGIBILITY
//int main()
//	{
//	int age;
//	double income;
//	cout << "\n Enter your age: ";
//	cin >> age;
//	cout << "\n Enter your annual income: $";
//	cin >> income;
//	if(age<18)
//	{
//		cout << "\n You are not eligible for a loan because  you are under 18 years of age. ";
//	}
//	else if(income<30000)
//	{
//		cout << "\n You met the age requirement but are not eligible for a loan because your income is below $30,000. ";
//	}
//	else
//	{
//		cout << "\n Congratulations!You are eligible for a loan. ";
//	}
//	return 0;
//}

//ROLE BASED ACCESS SYSTEM
//int main()
//{
//	string username, password, role;
//	cout << "\n Enter the username: ";
//	cin >> username;
//	cout << "\n Enter the password: ";
//	cin >> password;
//	if(username == "admin" && password == "password123")
//	{
//		cout << "\n Authentication Successful! ";
//		cout << "\n Enter your role: ";
//		cin >> role;
//		if(role == "Admin")
//		{
//			cout << "\n Full Access ";
//		}
//		else if(role == "Guest")
//		{
//			cout << "\n Limited Access ";
//		}
//		else
//		{
//			cout << "\n No Access ";
//		}
//	}
//	else{
//	
//		cout << "\n Authentication Failed.Access Denied.";
//	}
//	return 0;
//}
