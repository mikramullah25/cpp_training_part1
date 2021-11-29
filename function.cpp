#include <iostream>
using namespace std;

void swap(int& a, int& b)
{
	cout<<"pass by reference"<<endl;
	int temp = a;
	a = b;
	b = temp;
	cout << "value of a and b = " << a <<" "<< b <<endl;
}

void swap(int* a, int* b)
{
	cout<<"pass by pointer"<<endl;
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << "value of a and b = " << *a <<" "<< *b <<endl;
}

int main()
{
	int x = 12;
	int y = 13;
	
	cout << "value of x and y = " << x <<" "<< y <<endl;
	
	swap(x, y);
	
	cout << "value of x and y = " << x <<" "<< y <<endl;
	
	return 0;
}

