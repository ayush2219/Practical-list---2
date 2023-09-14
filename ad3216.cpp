//write a c++ program to overload a function namesd is "area".
#include<iostream>
using namespace std;
int area(int);
int area(int,int);
float area(float);
float area(float,float);
int main()
{
    int s,l,b;
    float r,bs,ht;
    cout<<"Enter side of a square                :: ";
    cin>>s;
    cout<<"Enter length of rectangle             :: ";
    cin>>l;
    cout<<"Enter breadth of rectangle            :: ";
    cin>>b;
    cout<<"Enter radius of circle                :: ";
    cin>>r;
        
    cout<<endl<<"Area of square is                     :: "<<area(s);
    cout<<endl<<"Area of rectangle is                  :: "<<area(l,b);
    cout<<endl<<"Area of circle is                     :: "<<area(r)<<endl<<endl;
    
    cout<<"Student Name  :: Dholariya Ayush Prafulbhai"<<endl;
    cout<<"Enrollment no :: 220130318022";
    
}
int area(int s)
{
    return(s*s);
}
int area(int l,int b)
{
    return(l*b);
}
float area(float r)
{
    return(3.14*r*r);
}

