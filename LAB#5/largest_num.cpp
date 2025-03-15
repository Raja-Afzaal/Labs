#include <iostream>
using namespace std;
int main() 
{
    int num1, num2, num3, largest;
    cout << " Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    largest = num1;
    if (num2 > largest) 
	{
        largest = num2;
    }
    if (num3 > largest) 
	{
        largest = num3;
    }
    cout << " The largest number is: " << largest << endl;
    return 0;
}
