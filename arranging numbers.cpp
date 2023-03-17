#include<iostream>
using namespace std;
int main()
{
    int t;
    cout<<"enter the value of t"<<endl;
    cin>>t;                                    // 5
    int ar[t];                                 // 5
    for(int i=0;i<t;i++)
    {
        cout<<"enter the arr element "<<endl;
        cin>>ar[i];                            // 4 2 3 6 1
    }
    for(int i=0;i<t-1;i++)                       //     0<5  1<5   2
    {
        for(int j=i+1;j<t;j++)                   //    1<5    2<5  3
        {
            int temp; 
            if(ar[i]>ar[j]){                   //     4<2   2<3   
                temp=ar[i];                    //           t=3
                ar[i]=ar[j];                   //           j=2
                ar[j]=temp;                    //           3=i
            }

        }
    }
    for(int i=0;i<t;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}