#include <iostream>

using namespace std;

int findGreatestNumber(int list[], int s)
{
	int g = list[0];
	for(int i = 0; i < s; i++)
	{
		cout<<list[i]<<endl;
		if(g < list[i])
		{
			g = list[i];
		}
	}
	return g;
}

int main()
{
	int list[] = {36, 89, 17, 55, 69, 23, 27};
	
	int len = sizeof(list)/sizeof(int);
	
	int x = 0;
	x = findGreatestNumber(list, len);
	
	cout<<"Greatest Number is = "<<x<<endl;
	
	return 0;
}