#include<iostream>
#include<string>

using namespace std;

int ReadNumber()
{
	int Number;

	cout << "Please Enter Number : ";
	cin >> Number;
	
	return Number;
}

float CalculateTheHalfNumber(int Number)
{	
	return (double)Number / 2;
}

void PrintTheHalfNumber(int Number)
{
	cout << endl;
	cout << "Half OF The Number " << to_string(Number) << " = " << CalculateTheHalfNumber(Number) << endl;
}

int main()
{

	// Make Program Calculate Half of Number
	// 1-Function For Read a Number
	// 2-Function For Calculate Half of The Number
	// 3-Function For Print the half

	PrintTheHalfNumber(ReadNumber());

	return 0;
}