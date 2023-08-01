/*4. Define a class Addition that can add 2 or 3 numbers of different data types using
function overloading.*/

#include<iostream>
using namespace std ;

class Addition
{
    float sum ;

    public:
        // sum of 2 numbers 

        int add(int x , int y)
        {
            sum = x + y ;
            return sum ;
        }
        float add(int x , float y)
        {
            sum = x + y ;
            return sum ;
        }
        float add(float x , int y)
        {
            sum = x + y ;
            return sum ;
        }
        float add( float x , float y)
        {
            sum = x+ y ;
            return sum ;
        }
        
        // sum of 3 numbers

        int add(int x , int y , int z)
        {
            sum = x + y + z ;
            return sum ;
        }
        float add(int x , int y , float z )
        {
            sum = x + y + z ;
            return sum ;
        }
        float add(float x , int y , float z)
        {
            sum = x + y + z ;
            return sum ;
        }
        float add( float x , float y , float z )
        {
            sum = x+ y + z ;
            return sum ;
        }

        void showSum()
        {
            cout<<"Sum is "<<sum<<endl ;
        }

} ;

int main ()
{
    Addition a1 ;

    // sum of 2 numbers 
    a1.add(4,5) ;
    a1.showSum() ;

    a1.add(10 , 2.3f) ;
    a1.showSum() ;

    a1.add(5.9f , 20) ;
    a1.showSum() ;

    a1.add(5.6f , 8.9f) ;
    a1.showSum() ;

    //sum of 3 numbers
    a1.add(10 , 20 , 5) ;
    a1.showSum() ;

    a1.add(5 , 6 , 1.5f) ;
    a1.showSum() ;

    a1.add(14.5f , 8 , 7.6f) ;
    a1.showSum() ;

    a1.add(1.2f , 3.9f , 8.4f) ;
    a1.showSum() ;

    return 0 ;

}
