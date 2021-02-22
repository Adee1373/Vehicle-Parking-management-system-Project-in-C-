#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;
int input,amount,count,r,c,b,m,cy;
struct details
{
	string name;
	int id;
	int carnum; 
}e1;
void exit()
{
	char y;
	cout << "Are you sure you want to exit"<<endl;
	cout << "Press Y to exit or N to go back to command page."<<endl;
	cin >> y;
	if (y=='y')
	{
		exit(0);
	}
	else if (y=='n')
	{
		system("CLS");
	}
	else
	{
		cout << "You pressed a wrong key"<<endl;
		system("PAUSE");
		system("CLS");
	}	
}

void detail1()
{
	details e1;
		cout << "Enter the first name of the driver: ";
		cin >> e1.name;
		cout << "Enter person ID: ";
		cin >> e1.id;
		cout << "Enter car number: ";
		cin >> e1.carnum;
		amount = amount + 100;
		count = count + 1;
		r++;
		system("CLS");
		cout << "************************"<<endl;
		cout << "Vehicle has been added"<<endl;
		cout << "************************"<<endl;
		system("PAUSE");
		system("CLS");
}
void detail2()
{
	details e1;
		cout << "Enter the first name of the driver: ";
		cin >> e1.name;
		cout << "Enter person ID: ";
		cin >> e1.id;
		cout << "Enter car number: ";
		cin >> e1.carnum;
		amount = amount + 200;
		count = count + 1;
		c++;
		system("CLS");
		cout << "************************"<<endl;
		cout << "Vehicle has been added"<<endl;
		cout << "************************"<<endl;
		system("PAUSE");
		system("CLS");
}
void detail3()
{
	details e1;
		cout << "Enter the first name of the driver: ";
		cin >> e1.name;
		cout << "Enter person ID: ";
		cin >> e1.id;
		cout << "Enter car number: ";
		cin >> e1.carnum;
		amount = amount + 300;
		count = count + 1;
		b++;
		system("CLS");
		cout << "************************"<<endl;
		cout << "Vehicle has been added"<<endl;
		cout << "************************"<<endl;
		system("PAUSE");
		system("CLS");
}
void detail4()
{
	details e1;
		cout << "Enter the first name of the driver: ";
		cin >> e1.name;
		cout << "Enter person ID: ";
		cin >> e1.id;
		cout << "Enter car number: ";
		cin >> e1.carnum;
		amount = amount + 50;
		count = count + 1;
		m++;
		system("CLS");
		cout << "************************"<<endl;
		cout << "Motorcycle has been added"<<endl;
		cout << "************************"<<endl;
		system("PAUSE");
		system("CLS");
}
void detail5()
{
	details e1;
		cout << "Enter the first name of the driver: ";
		cin >> e1.name;
		cout << "Enter person ID: ";
		cin >> e1.id;
		cout << "Enter car number: ";
		cin >> e1.carnum;
		amount = amount + 20;
		count = count + 1;
		cy++;
		system("CLS");
		cout << "************************"<<endl;
		cout << "Cycle has been added"<<endl;
		cout << "************************"<<endl;
		system("PAUSE");
		system("CLS");
}

void delet()
{
	int a;
	cout << "press 1 for deleting Rickshaw record: "<<endl;
	cout << "Press 2 for deleting Car record: "<<endl;
	cout << "Press 3 for deleting Bus record: "<<endl;
	cout << "Press 4 for deleting Motorcycle record: "<<endl;
	cout << "Press 5 for deleting Cycle record: "<<endl;
	cout << "Press 6 for deleting total amount: "<<endl;
	cin >> a;
	if (a==1)
	{
		r=0;
		cout << "********************"<<endl;
		cout << "Record Deleted"<<endl;
		cout << "********************"<<endl;
	}
	else if (a==2)
	{
		c=0;
		cout << "********************"<<endl;
		cout << "Record Deleted"<<endl;
		cout << "********************"<<endl;
	}
	else if (a==3)
	{
		b=0;
		cout << "********************"<<endl;
		cout << "Record Deleted"<<endl;
		cout << "********************"<<endl;
	}
	else if (a==4)
	{
		m=0;
		cout << "********************"<<endl;
		cout << "Record Deleted"<<endl;
		cout << "********************"<<endl;
	}
	else if (a==5)
	{
		cy=0;
		cout << "********************"<<endl;
		cout << "Record Deleted"<<endl;
		cout << "********************"<<endl;
	}
	else if(a==6)
	{
		amount=0;
		cout << "********************"<<endl;
		cout << "Record Deleted"<<endl;
		cout << "********************"<<endl;
	}
	else
	{
		cout << "****************************"<<endl;
		cout << "You pressed a wrong number"<<endl;
		cout << "****************************"<<endl;
	}

}

int main()
{ 
 
	details e1;
	amount=0;
	count=0;
	r=0;
	c=0;
	b=0;
	m=0;
	cy=0;

	while (true)
	{
	
	cout << endl<<"         COMMANDS\n";
	cout << "****************************\n";
	cout << "Press 1 for Rickshaw."<<endl;
    	//.Rickshaw parking fee=100
	cout << "Press 2 for Cars."<<endl;
		//.Cars parking fee=200
	cout << "Press 3 for Bus."<<endl;
		//.Buses parking fee=300
	cout << "press 4 for Motorcycle."<<endl;
		//.Motorcycle parking fee=50
	cout << "Press 5 for Cycle."<<endl;
		//.Cycle parking fee =20
	cout << "Press 6 to show the record."<<endl;
	cout << "Press 7 to delete the record."<<endl;
	cout << "Press 8 for delete records individualy."<<endl;
	cout << "press 9 for exit"<<endl;
	cin >> input;
	
	if (input==1)
	{
		if (count <=9)
		{
			detail1();
		}
		else
		{
			cout << "The parking has reached its limit so you can not add any further Vehicles.";
			system("PAUSE");
			system("CLS");
		}
	}
	
	else if (input==2)
	{
		if (count <=9)
		{
		detail2();
		}
		else
		{
		cout << "The parking has reached its limit so you can not add any further Vehicles."<< endl;
		system("PAUSE");
		system("CLS");
		}
	}
	else if (input==3)
	{
		if (count<=9)
		{
		detail3();
		}
		else 
		{
		cout << "The parking has reached its limit so you can not add any further Vehicles.";
		system("PAUSE");
		system("CLS");
		}
	}
	else if (input ==4)
	{
		if(count<=9)
		{
		detail4();
		}
		else
		{
			cout << "The parking has reached its limit so you can not add any further Vehicles."<< endl;
			system("PAUSE");
			system("CLS");
		}
	}
	else if (input==5)
	{
		if(count<=9)
		{
		detail5();
		}
		else
		{
			cout << "The parking has reached its limit so you can not add any further Vehicles."<< endl;
			system("PAUSE");
			system("CLS");
		}
	}
	else if (input==6)
	{
		system("CLS");
	cout <<"\nThe total amount = "<< amount << endl;
	cout << "The total number of Vehicles parked = " <<count<<endl;
	cout << "The total number of Rickshaws = " <<r<<endl;
	cout << "The total number of Cars = " <<c<<endl;
	cout << "The total number of Buses = " <<b<<endl;
	cout << "The total number of Motorcycles = " <<m<<endl;
	cout << "The total number of Cycles = " <<cy<<endl;
	system("PAUSE");
	system("CLS");
	}
	else if (input==7)
	{
		amount = 0;
		count = 0;
		r=0;
		c=0;
		b=0;
		m=0;
		cy=0;
		cout << "********************"<<endl;
		cout << "Record Deleted"<<endl;
		cout << "********************"<<endl;
		system("PAUSE");
		system("CLS");
	}
	else if (input==8)
	{
	delet();
	system("PAUSE");
	system("CLS");
	}
	else if (input==9)
	{
		system("CLS");
		exit();
			
	}	
	else 
	{
		cout << endl << endl;
		cout << "*****************************************"<<endl;
		cout << "\t INVALID NUMBER"<<endl;
		cout << "PLEASE PRESS ANY NUMBER BETWEEN 1 TO 8"<<endl;
		cout << "*****************************************"<<endl;
		system("PAUSE");
		system("CLS");
	}
}
	return 0;
}
