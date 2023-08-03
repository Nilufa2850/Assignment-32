/*10. Create a C++ class for player objects with the following attributes: player no., name,
number of matches and number of goals done in each match. The number of
matches varies for each player. Write a parameterized constructor which initializes
player no., name, number of subjects and creates an array for number of goals and
number of matches dynamically.*/

#include<iostream>
#include<cstring>
using namespace std ;

class Player
{
    int player_no ;
    char name [20] ;
    int num_match ;
    int *goal ;

    public :
        Player ()
        {
            cout<<"Enter Players No     : ";
            cin>>player_no ;

            cout<<"Enter Players name   : ";
            cin.ignore() ;
            cin.getline(name , 20) ;

            cout<<"Enter Match no       : ";
            cin >> num_match ;


            goal = new int[num_match] ;
            int  i ;
            cout<<"Enter goal number for "<<num_match <<" matchs "<<endl ;

            for(i=0 ; i<num_match ; i++)
                cin >> goal[i] ;
            
        }
        void show_all()
        {
            cout<<"---------------------------------"<<endl ;
            cout<<"Players No           : "<<player_no<<endl ;
            cout<<"Players Name         : "<<name <<endl ;
            cout<<"Number of matches    : "<<num_match <<endl ;
            
            int i ;
            cout<<endl<<"Number of goals are "<<endl ;
            cout<<"----------------------"<<endl ;
            for(i=0 ; i< num_match ; i++)
                cout<<i+1<<" match = "<<goal[i] <<" goal"<<endl ;
            
        }
} ;

int  main ()
{
    Player p1 ;

    p1.show_all() ;
    return 0 ;

}
