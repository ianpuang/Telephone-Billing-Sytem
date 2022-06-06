#include <iostream>

using namespace std;

class bill
{
public:
	void input();
	void calculate();
	void display();

private:
	string customerName;
	string customerAddress;
	int category;
	int unit;	
	float price;
};

int main()
{
	int input;
	bill b;
home:do
	{

		cout << "\n\t**Welcome to CityPhone Telephone Company**\n"
				"Press\n"
				"\t(1) to calculate your electric bill\n"
				"\t(2) to exit program\n";
		cin >> input;
	switch(input)
	{
		case 1: 
			b.input();
			b.calculate();
			break;
		default:
			cout << "invalid number, please input the correct number\n";
			system("pause");
			system("cls");
			goto home;
	}
	}while(input!=2);
}

void bill::input()
{
	system("cls");
	
	cout << "\nPlease insert your name: ";
	cin >> customerName;
	cout << "\nPlease insert your address: ";
	cin >> customerAddress;
	cout << "\nWhich housing category are you living in: \n"
			"  (1) for Home\n"
			"  (2) for Commercial\n"
			"  (3) for Industrial\n";
	cin >> category;
	cout << "\nPlease enter unit used\n";
	cin >> unit;
}

void bill::calculate()
{
	if(category==1)
	{//home category
		if(unit<100)
		{
			price=unit*0.1;
		}else if(unit>100 && unit<300)
		{
			int price1,price2;
			price1=unit-100;
			price1=price1*0.17;
			price2=100*0.1;
			price=price1+price;
		}else if(unit>300)
		{
			int price1,price2;
		}
	}
	if(category==2)
	{//commercial category
		
	}
	if(category==3)
	{//inustrial category
		
	}
	
}
