/*
In this code we can learn Parametre Transfer by Reference

Developer: Barış Someroğlu
Date: 09.06.2024
*/

#include <iostream>

using namespace std;

void ChangeValue(int* Value1, int* Value2);

int main()
{
	int Change1 = 3, Change2 = 4;

	cout << "----------We are in main function----------" << endl;

	cout << "\nChange1 = " << Change1 << endl;
	cout << "\nChange2 = " << Change2 << endl;

	cout << "\nChange1's Address = " << &Change1 << endl;
	cout << "\nChange2's Address = " << &Change2 << endl;

	ChangeValue(&Change1, &Change2);

	cout << "\n----------Again we are in main function----------" << endl;

	cout << "\nChange1 = " << Change1 << endl;
	cout << "\nChange2 = " << Change2 << endl;

	return 0;
}

void ChangeValue(int* Value1, int* Value2)
{
	*Value1 = 5;
	*Value2 = 6;

	cout << "\n----------We are in the function----------" << endl;

	cout << "\nValue1's Address = " << Value1 << endl;
	cout << "\nValue2's Address = " << Value2 << endl;

}