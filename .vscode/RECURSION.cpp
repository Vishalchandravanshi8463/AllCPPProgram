#include<iostream>
using namespace std;
/*int fact(int n);
int sum(int p);
int main()
{
    cout<<"enter the number which you want to print factorial\n";
    int k;cin>>k;
    cout<<"factorial is :"<<fact(k)<<endl;
     cout<<"enter the number which you want to print sum till number\n";
     int c;cin>>c;
    cout<<"sum is  "<<sum(c)<<endl;
    return 0;
}
int fact(int n)
{
    if (n==0)
    {
        return 1;
    }
    int factm1=fact(n-1);
    int factc=factm1*n;
    return factc;
}
int sum(int p)
{
    if(p==0)
    {
        return 0;
    }
  int prevsum=sum(p-1);
return p+prevsum;
}*/
/*// sum of number 
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
 int presum=sum(n-1);
 return n+presum;
}
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<sum(n)<<endl;
    return 0;
}*/
/*int power(int n,int p)
{
 if(p==0)
 {
     return 1;
 }
 int prevpower=power(n,p-1);
 return n*prevpower;
}
int main()
{
    int n,p;
    cout<<"enter the number n and p"<<endl;
    cin>>n>>p;
    cout<<power(n,p);
    return 0;
}*/

//factorial
/*int factorial(int n)
{
 if(n==0)
 {
 return 1;
 }
 int prevfactorial=factorial(n-1);
 return n*prevfactorial;
}
int main()
{
    int v;
    
    cout<<"enter the factorial number"<<endl;
    cin>>v;
    cout<<factorial(v);
    return 0;
}*/

// number find till position of number
/*fib(int n)
{
 if(n==0||n==1)
 return n;
 return fib(n-1)+fib(n-2);
}
int main()
{
    int position ;
    cout<<"enter the position you want to print in fibonacci series\n";
    cin>>position;
    cout<<fib(position);
}*/
//Array is sort or not 
/*bool sorted(int arr[],int n)
{
    if(n==1)
    return true;
    bool restarray=sorted(arr+1,n-1);
    return (arr[0]<arr[1]&&restarray);
}
int main()
{
    int arr[]={1,2,3,4,5};
    cout<<sorted(arr,5);
}*/
// print decreasing order of number
/*void dec(int n)
{
    if (n==0)
    {
        return ;
    }
   
    cout<<n<< " ";
    dec(n-1);
    
}
void inc(int n)
{
    if (n==0)
    {
        return ;
    }
    inc(n-1);
     cout<<n<< " ";
}
int main()
{
    int n;
    cout<<"enter the number \n";
    cin>>n;
    dec(n);
    cout<<endl;
    inc(n);
    return 0;
}*/
// find the key index in array
int firstoccur(int arr[],int n,int i,int key)
{
    if(i==n)
    {
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return firstoccur(arr,n,i+1,key);
}
 int lastoccur(int arr[],int n,int i,int key)
 {
      if(i==n)
    {
        return -1;
    }
  int restarray=lastoccur(arr,n,i+1,key);
  if(restarray!=-1)
  return restarray;
  if(arr[i]==key)
  {
      return i;
  }
  return -1;

 }
int main()
{
    int arr[]={4,2,1,2,5,2,7};
    cout<<firstoccur(arr,7,0,5)<<endl;
      cout<<lastoccur(arr,7,0,5);

    return 0;
}
