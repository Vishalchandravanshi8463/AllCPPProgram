#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number where you want to print palindrom number\n";
    cin>>n;
    
    int count=0;
    int v;
    for (int i=0;i<=n;i++)
    {
        int rev=0;
        v=i;
        while(v!=0)
        {
            int z=v%10;
            rev=(rev*10)+z;
            v=v/10;
        }
        if(i==rev)
        {
            count++;
            cout<<"is palindrome number"<<rev<<endl;
           
        }
        
    }
     cout<<"total palindrome is  "<<count<<endl;
    return 0;
}