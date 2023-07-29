/*2. Define a class Rectangle and overload area function for different types of data type.*/

#include<iostream>
using namespace std ;

class RECTANGLE
{
    private : 
        int x , y ;
        float p , q ;

    public :

        void set_int_Data(int m , int n)
        {
            x = m ;
            y = n ;
        }
        void set_float_Data(float m , float n)
        {
            p = m ;
            q = n ;
        }
        int Area_int ()
        {
            return x*y ;
        }
        float Area_float ()
        {
            return p*q ;
        } 
};
        
int main ()
{
    RECTANGLE r1 , r2 ;

    r1.set_int_Data(4,5) ;
    r2.set_float_Data(6.3,8.7) ;

    cout<<"Area of r1 = "<<r1.Area_int() <<endl ;
    cout<<"Area of r2 = "<<r2.Area_float()<<endl ;

    return 0 ;
}
