//write a c++ program to demonstrate use of default arguments.
#include<iostream>
using namespace std;
int sum(int x,int y,int z=0,int w=0)
{
    return(x+y+z+w);
}
int main()
{
    cout<<sum(5,10)<<endl;
    cout<<sum(5,10,15)<<endl;
    cout<<sum(5,10,15,20)<<endl;
    
    cout<<"Student Name  :: Dholariya Ayush Prafulbhai"<<endl;
    cout<<"Enrollment no :: 220130318022";
    return 0;
}
