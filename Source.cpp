#include<iostream>
#include<conio.h>
#include<string>

using namespace std;
struct lib
{
	char name[20];
	int rackno;
	string arr;
};

int main()

{
	lib obj[10];
	int num;
	cout<<"\n\t\t Welcome To My Library System !!! \n\n Enter Number of Books To Be Stored \n";
	cin>>num;
	for (int i=1;i<=num;i++)
	{cout<<"\nEnter Name of Book Number "<<i<<"\n";
	cin>>obj[i].name;

	cout<<"\nEnter Rack Number of Book Number "<<i<<"\n";
	cin>>obj[i].rackno;}
	

	//cout<<"\n Details\n";

	/*for (int i=0;i<num;i++)
	{cout<<"\nName of "<<i+1<<" Book:"<<obj[i].name;
	cout<<"\nRack No of "<<i+1<<" Book:"<<obj[i].rackno;}*/



	//Search
	int i;
	cout<<"\n\nEnter Book Name To Search:\n";
	cin>>obj[1].arr;
	cin.ignore();
	for (int i=1;i<=num;i++)
{
	if(obj[i].name == obj[1].arr)
	{
		cout<<"\nYeahhh!!! Book Found \n";
		cout<<"\nDetails \n";
		cout<<"\nBook Name:";
		cout<<obj[1].arr;
		cout<<"\n Rack No:";
		cout<<obj[i].rackno;
		break;
	}
	//else if(obj[i].name != obj[1].arr)
		//cout<<"Not found";
	}

	getch();
}