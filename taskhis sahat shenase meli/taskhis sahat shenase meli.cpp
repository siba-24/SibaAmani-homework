#include <iostream>
using namespace std;
int main()
{
	string number;
	do
	{
		cout<<"please enter number:";
		cin>>number;
	}while(number.length() !=11);
	int control=number[10]-48;
	int dahgan=(number[9]-48)+2;
	int sum=0;
	string
	sabet="29272319172927231917";
	for(int i=0;i<10;i++)
	{
		sum=sum+
		((number[i]-48)+dahgan)*((sabet[i*2]-48)*10+(sabet[i*2+1]-48));
	}
	if(sum % 11==0 ||sum % 11==10)
	{
		if(control==0)
		{
			cout<<"true";
		}else
		{
			cout<<"false";
		}
	}
	else{
		if(control==sum %11)
		{
			cout<<"true";
		}else
		{
			cout<<"false";
		}
	}
	return 0;
}
