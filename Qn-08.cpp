//8. Write a C++ program to find the factorial of a number using copy constructor

#include<iostream>
using namespace std ;

class Factorial
{
    private :
        int num ;
        long int fact ;

    public : 
        Factorial ( int n)
        {
            cout<<"Copy constructor called"<<endl ;
            num = n ;
        }
        int cal_fact()
        {
            fact = 1 ;
            int i ;
            for(i=num ; i>0 ; i--)
                fact = fact * i ;

            return fact ;
        }
        show_result()
        {
            cout<<"Num = "<<num<<" Factorial = "<<cal_fact()<<endl ;
        }

} ;

int main ()
{
    Factorial f1=5 ;

    f1.show_result() ;
    
    return 0 ;

}
