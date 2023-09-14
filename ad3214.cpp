//write a c++ program calculate cube of a given number using using inline.
#include<iostream>
using namespace std;
inline int cube(int r) 
{
	return r*r*r;
}
int main() 
{
	int r;
	cout<<"Enter value to compute cube :: ";
	cin>>r;
	cout<<"cube of the number :: "<<cube(r)<<endl<<endl;
	
	cout<<"Student Name  :: Dholariya Ayush Prafulbhai"<<endl;
    cout<<"Enrollment no :: 220130318022";
	return 0;
}
