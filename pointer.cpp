#include <iostream>

using namespace std;

int main()
{
	int x = 91;
	
	int *p;
	p = &x;
	
	int *p1 = p;
	
	*p1 = 450;

	cout<<"value of p1 = "<<*p1<<endl;
	cout<<"value of x = "<<x<<endl;
	cout<<"address of x = "<<&x<<endl;
	cout<<"value in p1111 = "<<p<<endl;
	cout<<"value in *p = "<<*p<<endl;
	
		*p = 19;
		cout<<"value of x = "<<x<<endl;
		cout<<"value in *p = "<<*p<<endl;
	
	return 0;
}