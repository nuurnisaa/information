#include<iostream>

using namespace std;
int main()
{
	char gender= 'F';
	int married=1;
	int children=2;
	double appoint=2009;
	double salary=1500;
	double height=79.48;
	double gpa=4.69;
	double drawn;
	
	
	cout<<"Show informations: "<<endl;
	cout<<"Gender: "<<gender<<endl;
	cout<<"Married: "<<married<<endl;
	cout<<"Children: "<<children<<endl;
	cout<<"Year appoint: "<<appoint<<endl;
	cout<<"Salary: "<<salary<<endl;
	cout<<"Height: "<<height<<endl;
	cout<<"GPA: "<<gpa<<endl;
	
	cout<<"Choose drawn:";
	cin>>drawn;
	
		double balance=salary-drawn;
	cout<<"Balance: "<<balance<<endl;
	
	return 0;
	
	
}
