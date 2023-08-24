//write a c++ program for setprecision() function.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double f=3.12345;
	cout<<fixed;
  	cout<<setprecision(5)<<f<<endl;
  	cout<<setprecision(7)<<f<<endl;
  	cout<<setprecision(5)<<f<<endl;
  	cout<<setprecision(9)<<f<<endl;
  	
  	cout<<"Student Name  :: Dholariya Ayush Prafulbhai"<<endl;
    cout<<"Enrollment no :: 220130318022";  
  	return 0;  
}
