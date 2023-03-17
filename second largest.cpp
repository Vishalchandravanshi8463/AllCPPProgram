#include<iostream>
using namespace std;

int main()
{
    int t;
    cout<<"enter the value of t"<<endl;
    cin>>t;
    while(t-->0)
    {
        int a,b,c;
        cout<<"enter the value of a b c "<<endl;
        cin>>a>>b>>c;
        int ar[3]={a, b, c};
        for(int i=0;i<2;i++)             //2 times excute
        {
            for(int j=i+1;j<3;j++)            //  j=1  2 times excute
            {
                if(ar[i]<ar[j]){              //ar[0]<ar[1]
                int temp;
                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;}
            }
        }
        cout<<ar[1]<<endl;
    }
    return 0;
}