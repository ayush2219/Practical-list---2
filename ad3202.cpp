//write a c++ program to access global variable scope resolution operator using class.
#include<iostream>
using namespace std;
class operate
{
	public :
		static int a;
		void display()
		{
			cout<<"value of a is the :: "<<a<<endl<<endl;
		}
};
int operate :: a=10;
int main()
{
	operate a;
	a.display();
	
	cout<<"Student Name  :: Dholariya Ayush Prafulbhai"<<endl;
    cout<<"Enrollment no :: 220130318022";
	return 0;
}

