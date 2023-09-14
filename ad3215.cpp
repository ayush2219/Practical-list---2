//write a c++ program caslculatev square of a given number using inline function.
#include<iostream>
using namespace std;
class square
{
   private:
        int n,r;
        float n1,r1;
        public:
            void input();
        void calc();
			void display();
		
};
inline void square::input()
{
    cout<<"Enter a number to find square  :: ";
    cin>>n;
}
inline void square::calc()
{
	r=n*n;
    r1=n1*n1;
}
inline void square::display()
{
    cout<<"Square of "<<n<<"                    :: "<<r<<endl<<endl;
}
int main ()
{
    square s;
    s.input();
    s.calc();
    s.display();
    
    cout<<"Student Name  :: Dholariya Ayush Prafulbhai"<<endl;
    cout<<"Enrollment no :: 220130318022";
    return 0;
}

