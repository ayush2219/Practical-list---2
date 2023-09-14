//write a c++ program to demonstrate use of return by reference.
#include<iostream> 
using namespace std;
void change(int data);
int main()
{
	int data=3;
	change(data);
	cout<<"The Value of the data is :: "<<data<<endl<<endl;
	
	cout<<"Student Name  :: Dholariya Ayush Prafulbhai"<<endl;
    cout<<"Enrollment no :: 220130318022";
	return 0;
}
void change(int data)
{
	data=5;
}
