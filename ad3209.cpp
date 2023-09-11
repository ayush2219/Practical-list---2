//write a c++ program to add two numbers using scope resolution operator.
#include<iostream>
using namespace std;
int a,b;
int main()
{
	cout<<"Enter a Number 1 :: ";
	cin>>a;
	cout<<"Enter a Number 2 :: ";
	cin>>b;
	
	cout<<"The Sum is :: "<<::a+::b<<endl<<endl;
	
	cout<<"Student Name  :: Dholariya Ayush Prafulbhai"<<endl;
    cout<<"Enrollment no :: 220130318022";
}
