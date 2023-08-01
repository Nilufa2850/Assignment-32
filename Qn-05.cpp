/*5. Define a class A having multiple constructors. Define another class B derived from
class A. Create derived class constructors and show use of constructor in this single
inheritance.*/

#include<iostream>
using namespace std ;

class A
{
    protected :
        int a , b ;

    public : 
        A ()
        {
            cout<<"Non - Paramiterized constructor call"<<endl ;
            a = 10 ;
            b = 20 ;
        }
        A(int x)
        {
            cout<<"1 argument Paramiterized constructor call"<<endl ;
            a = x ;
            b = 5 ;
        }
        A (int x ,int y )
        {
            cout<<"2 argument Paramiterized constructor call"<<endl ;
            a = x ;
            b = y ;
        }


} ;
class B : public A 
{
    int c ;
    public :
        B () : A(200 , 100)
        {
            c = 50 ;
        }
        void showData()
        {
            cout<<"a = "<<a<<"  b = "<<b<<" c = "<<c<<endl ;
        }
        
} ;

int main ()
{
    B obj ;
    obj.showData() ;
    return 0 ;

}
