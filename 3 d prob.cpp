#include<iostream>
using namespace std;

int main()
{
    int arr[5][5]={ {8,3,9,0,10},{3,5,17,1,1},{2,8,6,23,1},{15,7,3,2,9},{6,14,2,6,0} };
    int col,j=0;
    cout<<"row sum  ";
    for(int i = 0 ; i < 5 ; i++ )
    {
        int row=0;
        for(int j = 0 ; j < 5 ; j++ )
        {
            row=row+arr[i][j];
        }cout<<"  "<<row<<" ";
    }cout<<endl<<"coloum sum  ";
    for(int i = 0 ; i < 5 ; i++ )
    {
        int col=0;
        for(int j = 0 ; j < 5 ; j++ )
        {
            col=col+arr[j][i];
        }
        cout<<"  "<<col<<" ";
    }cout<<endl;
    return 0;
}