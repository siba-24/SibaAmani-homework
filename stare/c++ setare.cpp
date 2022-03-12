#include<iostream>
using namespace std;
int main() {int x;
   do{
   	cout<<"please inter your number"<<endl;
   	cin>>x;
   	for(int i=1;i<=x;i++)
   	{cout<<"*";
	   }
   }
   while(x!=0);
   return 0;
}
