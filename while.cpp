#include <iostream>

using namespace std;

int main()
{
	int roll_list[] = {11,12,13,14,15};
	int len = sizeof(roll_list)/sizeof(int);
	//cout<<"sizeof(int)= "<<sizeof(int)<<endl;
	//cout<<"sizeof(roll_list)= "<<sizeof(roll_list)<<endl;
	//cout<<"len= "<<len<<endl;
	
	bool present = true;
	int rand_no = 0;
	while(present)
	{
		present = false;
		cout<<"Enter rnumber : "<<endl;
		cin>>rand_no;
		for(int i =0; i <= len-1; i++)
		{
			cout<<rand_no<<"=="<<roll_list[i]<<endl;
			if(rand_no == roll_list[i])
			{
				present = true;
				//cout<<"New roll = "<<rand_no<<endl;
			}
		}
		//cout<<"Hello World - value of i = "<<i<<endl;
		//i++;
	}
	cout<<"New roll number = "<<rand_no<<endl;

	return 0;
}