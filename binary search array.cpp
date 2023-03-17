#include<iostream>
#include<climits>
using namespace std;
int binarysearch(int arr[],int n,int key)
{
    int s=0;
    int e=n;
    while(s<=e)
    {
    int mid=(s+e)/2;
    for(int i=0;i<n;i++)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            e=mid-1;

        }
        else{
            s=mid+1;
        }
    }
        return -1;
    }

}
int main()
{
    int n;
    cout<<"enter the n\n";
    cin>>n;
    int arr[n];
    int key;
    cout<<"enter the key\n";
    cin>>key;
    cout<<"enter the "<<n<<" elemnts\n"; 
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<< binarysearch( arr, n, key);
}