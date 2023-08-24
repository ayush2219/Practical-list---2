//write a c++ program to define a functton outside the class using scope resolution operator.
#include<iostream>
using namespace std;
class operate
{
	public :
		void display();
};
void operate :: display()
{
	cout<<"Hello Welcome To DR. SUBHASH UNIVERSITY "<<endl<<endl;
}
int main()
{
	operate a;
	a.display();
	
	cout<<"Student Name  :: Dholariya Ayush Prafulbhai"<<endl;
    cout<<"Enrollment no :: 220130318022";
	return 0;
}
