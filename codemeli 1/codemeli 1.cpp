#include <iostream>
using namespace std;
int main()
{
	string codemeli;
	codemeli="2741987841";
	int  sum=((codemeli[0]-48)*10)+((codemeli[1]-48)*9)+((codemeli[2]-48)*8)+((codemeli[3]-48)*7)+((codemeli[4]-48)*6)+((codemeli[5]-48)*5)+((codemeli[6]-48)*4)+((codemeli[7]-48)*3)+((codemeli[8]-48)*2);
	int s=sum%11;
	if(s<2)
	{
		if((s==codemeli[9])-48)
		{
			cout <<"true";
		}
		else{
			
			cout << "false";
		}
	}
else
{
	int y=11-5;
	if((y==codemeli[9])-48)
	{
		cout <<"true";
	}
	else{
		cout <<"false";
	}
}
return 0;
}
