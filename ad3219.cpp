//write a c++ program to add two integer values using call by reference.
#include<iostream>
using namespace std;
void sum(int a,int b,int *s) 
{
    *s=a+b;
}
int main()
{
    int a,b,s;

    cout<<"Enter Number 1 :: ";
    cin>>a;
    cout<<"Enter number 2 :: ";
    cin>>b;

    sum(a,b,&s);
    cout << "Sum is ::"<<s<<endl<<endl;
    
    cout<<"Student Name  :: Dholariya Ayush Prafulbhai"<<endl;
    cout<<"Enrollment no :: 220130318022";
    return 0;
}
