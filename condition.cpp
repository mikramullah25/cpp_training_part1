#include <iostream>

#include <string.h>

using namespace std;

int main()
{
	cout<<"Hello friends"<<endl;
	
	int p_amt = 10;
	int offer_amt = 0;
	
	if(!p_amt)
	{
		cout<<"No zero value!"<<endl;
	}
	
	if(p_amt > 3000 && p_amt > 5000)
	{
		offer_amt = 500;
	}
	else if(p_amt > 3000)
	{
		offer_amt = 100;
	}
	else if(p_amt > 1000)
	{
		offer_amt = 50;
	}
	else
	{
		offer_amt = 10;
	}
	
	cout<<"Offer amount = "<<offer_amt<<endl;
	
	return 0;
}