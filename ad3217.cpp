//write a c++ program to demonstrate use of function overloading.
#include<iostream>
using namespace std;
class Cal
{
    public:
	static int add(int a,int b)
	{
    	return a+b;
	}
	static int add(int a, int b, int c)
	{
    	return a+b+c;
	}
};
int main(void)
{
    Cal C;
    cout<<C.add(10,20)<<endl;
    cout<<C.add(12,20,23)<<endl<<endl;
    
    cout<<"Student Name  :: Dholariya Ayush Prafulbhai"<<endl;
    cout<<"Enrollment no :: 220130318022";
   	return 0;
}
