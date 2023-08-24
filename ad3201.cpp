//write a c++ program to access global variable scope resolution operator without using class.
#include<iostream>
using namespace std;
int a;
int main()
{
	int a=10;
	cout << "Value of global a is :: "<<::a;
	cout << "\nValue of local a is :: " <<a<<endl<<endl;
	
	cout<<"Student Name  :: Dholariya Ayush Prafulbhai"<<endl;
    cout<<"Enrollment no :: 220130318022";
	return 0;
}
