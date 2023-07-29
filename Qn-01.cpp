/*1. Create a class FLOAT that contains one float data member. Overload all the four
arithmetic operators so that they can operate on the objects of FLOAT.*/

#include<iostream>
using namespace std ;

class FLOAT
{
    private : 
        float x ;
    public :
        void setData()
        {
            cout<<"Enter value of X : ";
            cin>>x;
            cout<<endl ;
        }
        FLOAT operator+(FLOAT f)
        {
            FLOAT temp ;
            temp.x = x + f.x ;
            return temp ;
        }
        FLOAT operator-(FLOAT f)
        {
            FLOAT temp ;
            temp.x = x - f.x ;
            return temp ;
        }
        FLOAT operator*(FLOAT f)
        {
            FLOAT temp ;
            temp.x = x * f.x ;
            return temp ;
        }
        FLOAT operator/(FLOAT f)
        {
            FLOAT temp ;
            temp.x = x / f.x ;
            return temp ;
        }
        void showData()
        {
            cout<<"X = "<<x<<endl ;
        }
};
        
int main ()
{
    FLOAT f1, f2 , f3 ;

    f1.setData() ;
    f2.setData() ;

    f3 = f1+f2 ;
    f3.showData() ;

    f3 = f1-f2 ;
    f3.showData() ;

    f3 = f1*f2 ;
    f3.showData() ;

    f3 = f1/f2 ;
    f3.showData() ;

    return 0 ;
}
