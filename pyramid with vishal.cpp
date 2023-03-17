#include<iostream>
using namespace std;
int main()
{
    int row;
    cin>>row;
 /*   for(int i=1;i<=row;i++)
    {                                                 *
        for(int j=1;j<=i;j++)                         **
                                                      ***
        {                                             ****
            cout<<"*";
        }cout<<endl;
    }*/
    /////////////////////////////////////////////
     /* for(int i=row;i>=1;i--)
    {                                               *****
        for(int j=1;j<=i;j++)                       ****
        {                                           ***
            cout<<"*";                              **
        }cout<<endl;                                *
    }*/
    ///////////////////////////////////////
   /*   for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=row;j++)                      //             *
        {                                                          **
            if(j<=row-i)                                          *** 
           {                                          //         **** 
            cout<<" "; 
            }                                             //     
            else{
                cout<<"*";
            }                        
        }
        cout<<endl;
        
    }*/
    
    ////////////////////////////////////////////

int col;
cin>>col;

    for(int i=0;i<=row;i++)
    {
        for(int j=0;j<=col;j++)                               //  *******
        {                                                     //  *     *
            if(i==0||i==row||j==0||j==col)                    //  *     *
            {                                                 //  *     *
                cout<<"*";                                     // *******
                                    }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
return 0;
}