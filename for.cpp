#include <iostream>

using namespace std;

int main()
{
	
	for(int i =0; i <= 5; i++)
	{
		if(i == 4)
		{
			continue;
		}
		cout<<"Hello World - value of i = "<<i<<endl;
	}

	return 0;
}