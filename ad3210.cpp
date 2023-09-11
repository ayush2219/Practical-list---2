//write a c++ program to demonstrate use of call by reference.
#include<iostream>
using namespace std;
void swap(int *a, int *b)
{
	int swap;
	swap=*a;
	*a=*b;
	*b=swap;
}
int main()
{
	int a,b;
	
	cout<<"enter a value of a ::";
	cin>>a;
	
	cout<<"Enter a value of b ::";
	cin>>b;
	
	swap(&a,&b);
	
	cout<<"The value of a is :: "<<a<<endl;
	cout<<"The value of b is :: "<<b<<endl;
	
	cout<<"Student Name  :: Dholariya Ayush Prafulbhai"<<endl;
    cout<<"Enrollment no :: 220130318022";
	return 0;
}
