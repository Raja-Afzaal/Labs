//Integer variable declaration
#include<iostream>
using namespace std;
//int main()
//{
//	int num = 5;
//	int*ptr = &num;
//	cout << "value of num: " << *ptr << endl;
//	return 0; 	
//}

//Modifiy variable pointer
//int main()
//{
//	int num = 10;
//	int*ptr = &num;
//	cout << "Before Modification: " << num << endl;
//	*ptr = 20;
//	cout << "Modified value: " <<  num << endl;
//	return 0;
//}

//Array of integers pointer
//int main()
//{
//	int arr[5] = {10, 15, 20, 25, 30};
//	int*ptr = arr;
//	cout << "pointer Arithematics: " << endl;
//	for(int i = 0; i<5; i++)
//	{
//		cout << *(ptr + i) << " ";
//	}
//	cout << endl; 
//	return 0;
//}

//Swap Number pointer
//void swap(int*a, int*b)
//{
//	int swap = *a;
//	*a = *b;
//	*b = swap;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	cout << "Before Swapping the numbers:\n num1 = " << num1 << ", num2 = " << num2 << endl;
//	swap(&num1, &num2);
//	cout << "After swapping the number:\n num1 = " << num1 << ", num2 = " << num2 << endl;
//  return 0;
//}

//Checking Pointer is Null or Not
//int main()
//{
//	int* ptr = 0;
//	if(ptr == 0)
//	{
//		cout << "This pointer is Null and does not point to any valid memory \n";
//	}
//	else
//	{
//		cout << "\n This pointer is not Null. Its hold the address: " << ptr;
//	}
//	return 0;
//}

//Void pointer
//int main()
//{
//	int num = 100;
//	void*ptr = &num;
//	cout << "\n The value: " << *((int*)ptr);
//	return 0;
//}
