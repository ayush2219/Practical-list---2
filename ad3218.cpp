/*write a c++ program to find area of circle using formula pi*r*r. take the value of pi as default 
arguments in function.*/
#include<iostream>
using namespace std;
float areaOfCircle(float radius_circle);
int main()
{
   	float radius;
   	cout<<"Enter the radius of circle :: ";
   	cin>>radius;
   	cout<<"Area of circle :: "<<areaOfCircle(radius)<<endl<<endl;
   	
   	cout<<"Student Name  :: Dholariya Ayush Prafulbhai"<<endl;
    cout<<"Enrollment no :: 220130318022";
   	return 0;
}
float areaOfCircle(float radius_circle)
{
   	float area_circle;
   	area_circle=3.14*radius_circle*radius_circle;
	return area_circle;
   

}
