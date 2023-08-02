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
            num = n ;
            fact = 1 ;
        }
        Factorial (Factorial &f)    // copy constructor
        {
            num = f.num ;
            fact = 1 ;
        }
        int cal_fact()
        {
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
    int x ;
    cout<<"Enter a number : ";
    cin>>x ;

    Factorial f1(x) ;
    f1.show_result() ;

    Factorial f2 = f1 ;
    f2.show_result() ;

    return 0 ;

}
