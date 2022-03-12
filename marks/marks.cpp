#include<iostream>
using namespace std;
int main()
{
	string name[7];
	int number[7];
	for(int i=0;i<=6;i++)
	{
		cout<<"enter mark:"<<endl;
		cin>>number[i];
		cout<<"enter name"<<endl;
		cin>>name[i];
	}
	     for(int i=0;i<=6;i++)
	     {
	     	 if(number[i]<=10)
	     	 {
	     	 	cout<<number[i]<<"\t"<<name[i]<<endl;
			  }
		 }
		 return 0;
}
