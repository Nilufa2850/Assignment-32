/*6. C++ Program to illustrate the use of Constructors in multilevel inheritance of your
choice.*/

#include<iostream>
using namespace std ;

class A
{
    protected :
        int a , b ;

    public : 
        A ()
        {
            cout<<"A _Non - Paramiterized constructor call"<<endl ;
            a = 10 ;
            b = 20 ;
        }
        A(int x)
        {
            cout<<"A_1 argument Paramiterized constructor call"<<endl ;
            a = x ;
            b = 5 ;
        }
        A (int x ,int y )
        {
            cout<<"A_2 argument Paramiterized constructor call"<<endl ;
            a = x ;
            b = y ;
        }

} ;
class B : public A 
{
    protected :
        int c ;
    public :
        B () : A(200 , 100)
        {
            cout<<"B _Non - Paramiterized constructor call"<<endl ;
            c = 50 ;
        }
        
} ;
class C : public B 
{
    private :
        int d ;
    public :

        C ()
        {
            cout<<"C _Non - Paramiterized constructor call"<<endl ;
            c = 30 ;
            d = 20 ;
        }
        void showData()
        {
            cout<<"a = "<<a<<"  b = "<<b<<" c = "<<c<<" d = "<<d<<endl ;
        }
} ;


int main ()
{
    C obj ;
    obj.showData() ;
    return 0 ;

}
