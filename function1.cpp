#include <iostream>

using namespace std;

int add(int x, int y)
{
	//int z = x + y;
	return x + y;
	//return z;
}

float add(float x, float y)
{
	return x + y;
}

int main()
{
	int a = 90;
	int b = 120;
	//int c = add(a, b);
	int c = add(a, b);
	cout<<"value of c = "<<c<<endl;
	
	float x = 10.23;
	float y = 84.06;
	//float q = add(10.23, 84.06);
	cout<<"value of float = "<<add(x, y)<<endl;
	return 0;
}