#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double tinggi, berat, under, over;
		
		cout<<"Masukan tinggi badan [cm]: ";cin>>tinggi;
	cout<<"Masukan berat badan [kg]: ";cin>>berat;
	
	under = tinggi/2.5;
	over = tinggi/2.3;
	if (berat < under)
		{
		cout<<"Underweight" ;
	}
	else if(berat>under && berat<=over)
	{
		cout<<"Normal";
	}
		else if(berat>over)
	{
		cout<<"Overweight" ;
	}
	getch();
}
