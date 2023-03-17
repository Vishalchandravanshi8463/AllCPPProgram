#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int maxNo=INT_MIN;  //-23433534
    int minNO=INT_MAX;  //87583588495
    int n;
    cout<<"enter the n\n";
    cin>>n;
    int arr[n];
    cout<<"enter aray elements \n";
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }
     for(int i=0;i<n;i++)
     {
        // maxNo=max(maxNo,(arr[i]));
       //  minNO=min(minNO,(arr[i]));
       if(maxNo<arr[i])   //-34458349   6  886 757 5465
       {
         maxNo=arr[i];
       }
        if(minNO>arr[i])
       {
         minNO=arr[i];
       }
     }
     cout<<"maximum number is =  "<<maxNo<<"     minimum number is =  "<<minNO<<endl;
}