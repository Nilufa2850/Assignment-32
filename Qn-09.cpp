/*9. Write a C++ program to calculate the area of triangle, rectangle and circle using
constructor overloading. The program should be menu driven.*/

#include<iostream>
using namespace std ;

class AREA
{
    private :
        float area ;

    public : 
        AREA (int b , float h)      //Area of Trianlge
        {
            area = 1/2.0 * b * h ;
        }
        AREA (int l , int w)        // Area of Rectangle
        {
            area = l * w ;          
        }
        AREA (int r)                // Area of Circle
        {
            area = 3.14 * r * r ;
        }

        void showArea()
        {
            cout<<"Area is "<<area<<endl ;
        }


} ;

int main ()
{
    while(1)
    {
        cout<<endl<<"--------------------------------------"<<endl ;
        cout<<"1. calculate the area of Triangle"<<endl ;
        cout<<"2. calculate the area of Rectangle"<<endl ;
        cout<<"3. calculate the area of Circle"<<endl ;
        cout<<"4. Exit"<<endl ;
        cout<<"-----------------------------------"<<endl ;
        cout<<"Enter your choice : " ;
        int x ;
        cin>>x ;
        cout<<endl ;

    

        if (x == 1)
        {
            AREA a( 4 , 6.5f) ;
            cout<<"Triangle "<<endl ;
            a.showArea() ;
        }

        else if (x == 2)
        {
            AREA a( 8 , 9) ;
            cout<<"Rectangle "<<endl ;
            a.showArea() ;
        }

        else if (x == 3)
        {
            AREA a(3) ;
            cout<<"Circle "<<endl ;
            a.showArea() ;
        }

        else if (x==4)
            exit (0) ;
    }


    return 0 ;

}
