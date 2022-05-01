#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>
//#pragma warning(disable : 4996)
//#pragma warning(disable : 6031)
using namespace std;
double w[10];
double Tomato, potato, Apple, Onion, Kiwi, Orange, banana, Strawberry, other;
int a, b, k;
int t = 0, p = 0, Ap = 0, o = 0, ki = 0, Or = 0, ba = 0, st = 0, oth = 0;
double weight, sum = 0;
void menu1();
void fill1();
void exit();
void buy();
void print();
int main()
{
	fill1();
	return 0;
	_getch();
}

void menu1()
{

	cout << "Welcome to our shop" << '\t';
	cout << endl;
	cout << "1. Tomato            2. Apple  \n";
	cout << "3. potato            4. Onion \n";
	cout << "5. Kiwi              6. Orange \n";
	cout << "7. banana            8. Strawberry \n";
	cout << "9. other             0. Recipt \n";
	buy();
}
void buy()
{
	do
	{

		cout << "Shomare mored nazar ra entekhab konid ";
		cin >> a;

		if (a == 1)
		{
			cout << "Please enter weight :" << '\t';
			cin >> weight;
			if (weight > 100)
			{
				weight /= 1000;
			}
			t = 1;
			w[a - 1] = weight;
			cout << "Tomato " << Tomato << " * " << "Weight " << weight << "Kg" << endl;
			sum += Tomato * weight;

		}
		else if (a == 2)
		{
			cout << "Please enter weight :" << '\t';
			cin >> weight;
			if (weight > 100)
			{
				weight /= 1000;
			}
			Ap = 1;
			w[a - 1] = weight;
			cout << "Apple " << Apple << " * " << "Weight " << weight << "Kg" << endl;
			sum += Apple * weight;
		}
		else if (a == 3)
		{
			cout << "Please enter weight :" << '\t';
			cin >> weight;
			if (weight > 100)
			{
				weight /= 1000;
			}
			w[a - 1] = weight;
			p = 1;
			cout << "Potato " << potato << " * " << "Weight " << weight << "Kg" << endl;
			sum += potato * weight;
		}
		else if (a == 4)
		{
			cout << "Please enter weight :" << '\t';
			cin >> weight;
			if (weight > 100)
			{
				weight /= 1000;
			}
			w[a - 1] = weight;
			o = 1;
			cout << "Onion " << Onion << " * " << "Weight " << weight << "Kg" << endl;
			sum += Onion * weight;
		}
		else if (a == 5)
		{
			cout << "Please enter weight :" << '\t';
			cin >> weight;
			if (weight > 100)
			{
				weight /= 1000;
			}
			w[a - 1] = weight;
			ki = 1;
			cout << "Kiwi " << Kiwi << " * " << "Weight " << weight << "Kg" << endl;
			sum += Kiwi * weight;
		}
		else if (a == 6)
		{
			cout << "Please enter weight :" << '\t';
			cin >> weight;
			if (weight > 100)
			{
				weight /= 1000;
			}
			w[a - 1] = weight;
			Or = 1;
			cout << "Orange " << Orange << " * " << "Weight " << weight << "Kg" << endl;
			sum += Orange * weight;
		}
		else if (a == 7)
		{
			cout << "Please enter weight :" << '\t';
			cin >> weight;
			if (weight > 100)
			{
				weight /= 1000;
			}
			w[a - 1] = weight;
			ba = 1;
			cout << "banana " << banana << " * " << "Weight " << weight << "Kg" << endl;
			sum += banana * weight;
		}
		else if (a == 8)
		{
			cout << "Please enter weight :" << '\t';
			cin >> weight;

			if (weight > 100)
			{
				weight /= 1000;
			}
			w[a - 1] = weight;
			st = 1;
			cout << "Strawberry " << Strawberry << " * " << "Weight " << weight << "Kg" << endl;
			sum += Strawberry * weight;
		}
		else if (a == 9)
		{
			cout << "Please enter weight :" << '\t';
			cin >> weight;
			cout << "Please enter amout :" << '\t';
			cin >> other;
			if (weight > 100)
			{
				weight /= 1000;
			}
			w[a - 1] = weight;
			oth = 1;
			cout << "other " << other << " * " << "Weight " << weight << "Kg" << endl;
			sum += other * weight;
		}

	} while (a != 0);
	print();

}

void print()
{
	cout << "***********************************************" << endl;
	cout << "*                Your Recipt                  *" << endl;
	cout << "***********************************************" << endl;
	cout << " Article        basePrice     Weight       sum     " << endl;

	if (t == 1)
	{
		cout << " Tomato " << "          " << Tomato << "        " << w[0] << "Kg" << "        " << w[0] * Tomato << endl;
		cout << endl;
	}
	if (Ap == 1)
	{
		cout << " Apple " << "           " << Apple << "        " << w[1] << "Kg" << "        " << w[1] * Apple << endl;
		cout << endl;
	}
	if (p > 0)
	{
		cout << " Potato " << "          " << potato << "        " << w[2] << "Kg" << "        " << w[2] * potato << endl;
		cout << endl;
	}
	if (o > 0)
	{
		cout << " Onion " << "           " << Onion << "        " << w[3] << "Kg" << "        " << w[3] * Onion << endl;
		cout << endl;
	}
	if (ki > 0)
	{
		cout << " Kiwi " << "            " << Kiwi << "        " << w[4] << "Kg" << "        " << w[4] * Kiwi << endl;
		cout << endl;
	}
	if (Or > 0)
	{
		cout << " Orange " << "          " << Orange << "        " << w[5] << "Kg" << "        " << w[5] * Orange << endl;
		cout << endl;
	}
	if (ba > 0)
	{
		cout << " Bnana " << "          " << banana << "        " << w[6] << "Kg" << "        " << w[6] * banana << endl;
		cout << endl;
	}
	if (st > 0)
	{
		cout << " Strawberry " << "      " << Strawberry << "        " << w[7] << "Kg" << "        " << w[7] * Strawberry << endl;
		cout << endl;
	}
	if (oth > 0)
	{
		cout << " Other " << "           " << other << "        " << w[8] << "Kg" << "        " << w[8] * other << endl;
		cout << endl;
	}
	cout << "***********************************************" << endl;
	cout << "                                Total = " << sum << endl;
	exit();
	cout << endl;
	cout << endl;
}

void exit()
{
	{
		cout << "         Thanks you and good bye";
	}
}

void fill1()
{
	Tomato = 15000;
	potato = 12000;
	Apple = 25000;
	Onion = 10000;
	Kiwi = 27000;
	Orange = 28000;
	banana = 30000;
	Strawberry = 90000;
	other = 0;

	menu1();
}

