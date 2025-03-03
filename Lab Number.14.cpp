#include<iostream>
using namespace std;
//struct student
//{
//	string firstName;
//	string lastName;
//	int rollno;
//	int marks;
//void displaystudentInfo()
//{
//	cout << "\n full name: " << firstName << lastName;
//	cout << "\n Marks: " << marks;	
// }
//};
//int main()
//{
//	student s1;
//	cout << "\n enter the first name:  ";
//	cin >> s1.firstName;
//	cout << "\n enter the last name: ";
//	cin >> s1.lastName;
//	cout << "\n Roll number: ";
//	cin >> s1.rollno;
//	cout << "\n marks: ";
//	cin >> s1.marks;
//	s1.displaystudentInfo();
//}

//ARRAYS
//struct student
//{
//	string firstName;
//	string lastName;
//	int rollno;
//	int marks;
//	void displaystudentInfo()
//	{
//		cout << "\n full name: " << firstName << lastName;
//		cout << "\n roll no.: " << rollno;
//		cout << "\n marks: " << marks;
//	}
//};
//int main()
//{
//	int n;
//	cout << "\n enter the number of student: ";
//	cin >> n;
//	student students[n];
//	for(int i=0; i<n; i++)
//	{
//		cout << "enter the detail for student " << i+1 << endl;
//		cout << "\n student first name: ";
//		cin >> students[i].firstName;
//		cout << "\n enter last name: ";
//		cin >> students[i].lastName;
//		cout << "\n enter roll no,:";
//		cin >> students[i].rollno;
//		cout << "\n enter marks: ";
//		cin >> students[i].marks;
//    }
//		cout << "\n Student detail: ";
//		for(int i=0; i<n; i++)
//		{
//			students[i].displaystudentInfo();
//		}
//}

//POINTER
struct Student 
{
    string firstname;
    string lastname;
    int rollno;
    int marks;

    void displayStudentInfo() {
        cout << "\nFull Name: " << firstname << lastname;
        cout << "\nRoll No.: " << rollno;
        cout << "\nMarks: " << marks << endl;
    }
};

int main() 
{
    Student* studentptr = new Student;
    cout << "\nEnter details of student: ";
    cout << "\nEnter first name: ";
    cin >> studentptr->firstname;
    cout << "Enter the last name: ";
    cin >> studentptr->lastname;
    cout << "Enter the roll no.: ";
    cin >> studentptr->rollno;
    cout << "Enter the marks: ";
    cin >> studentptr->marks;

    studentptr->displayStudentInfo();
    delete studentptr;

    return 0;
}

