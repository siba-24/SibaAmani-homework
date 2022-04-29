#include <iostream>
using namespace std;
void fill();
void checkpass();
void changepass();
void showmojodi();
void menu();
void bardasht();
int mojedi,pass;
string name;
int main()
{
	fill();
	return 5;
}
void fill()
{
	name="ali";
	mojedi=100000;
	pass=1234;
	checkpass();
}
void checkpass()
{
	int o;
	cout<<"pass"<<endl;
	cin>>o;
	if(pass==o)
	{
		menu();
	}else
	{
		checkpass();
	}
}
void menu()
{
	int y;
	cout<<"1 mojodi"<<endl;
	cout<<"2 change pass"<<endl;
	cout<<"3 bardasht"<<endl;
	cin>>y;
	if(y==1)
	{
		showmojodi();
	}
	else if(y==2)
	{
		changepass();
	}
	else if(y==3)
	{
		bardasht();
	}
}
void showmojodi()
{
	cout<<mojedi<<endl;
	menu();
}
void changepass()
{
	cout<<"new pass"<<endl;
	cin>>pass;
	changepass();
	showmojodi();
}
else if(y == 2)
}

{
	changepass();
}
else if(y==3)
{
	bardasht();
}
}
void showmojodi()
{
	cout<<mojedi<<endl;
	menu();
}
void changepass()
{
	cout<<"new pass"<<endl;
	cin>>pass;
	checkpass;
}
void bardasht()
{
	into;
	cout<<"mablagho bedi"<<endl;
	cin>>o;
	if(o < mojedi)
	{
		mojedi=mojedi-o;
	}
	menu();
}
	

