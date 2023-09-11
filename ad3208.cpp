//wrrite a c++ program to km to cm,meter,inch and feet using manipulators endl, setw, setfill and setprecision.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float km,meter,cm,inch,feet;
	/*meter=km*1000;
	cm=km*100000;
	inch=km*39370.1;
	feet=km*3280.84;*/
	cout<<"Enter a km to find meter,cm,inch,feet :: ";
	cin>>km;
	
	cout<<"your km is :: "<<km<<endl;
	cout<<"your km into meter is :: "<<setw(5)<<setfill('x')<<km*1000<<endl;
	cout<<"your km into cm is :: "<<setfill('x')<<km*100000<<endl;
	cout<<"your km into inch is :: "<<setprecision(20)<<km*39370.1<<endl;
	cout<<"your km into feet is :: "<<setw(9)<<km*3280.84<<endl;
	
	cout<<"Student Name  :: Dholariya Ayush Prafulbhai"<<endl;
    cout<<"Enrollment no :: 220130318022";
}
