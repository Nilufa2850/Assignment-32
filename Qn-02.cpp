/*2. Define a class Rectangle and overload area function for different types of data type.*/

#include<iostream>
using namespace std ;

class RECTANGLE
{
    private : 
        float area ;

    public :

        void showArea ()
        {
            cout<<"Area is "<<area<<endl ;
        }
        
        void Area (int m , int n)
        {
            area = m*n  ;
        }
        void Area (int m , double n)
        {
            area = m*n  ;
        }
        void Area (double m , int n)
        {
            area = m*n  ;
        }
        void Area (double m , double n)
        {
            area = m*n  ;
        }
};
        
int main ()
{
    RECTANGLE r1 ;

    r1.Area(4,5) ;
    r1.showArea() ;

    r1.Area(6,4.3) ;
    r1.showArea() ;

    r1.Area(5.2,8) ;
    r1.showArea() ;

    r1.Area(9.7,2.3) ;
    r1.showArea() ;

    return 0 ;
}
