#include<iostream>
using namespace std;
int main()
{
    char ch[7]="vishal";
    char *c;
    c=&ch[0];
    cout<<"size of c  : "<<sizeof(c)<<endl;
    cout<<" sizeof ch : "<<sizeof(ch)<<endl;
    cout<<"ch  : "<<ch<<endl;                        //string            also address
    cout<<"(void*)ch  : "<<(void*)ch<<endl;                         //address
    cout<<"&ch[0]   :"<<&ch[0]<<endl;                    //    string         adress also
    cout<<"(void*)&ch[o]          :"<<(void*)&ch[0]<<endl;        // address
    cout<<"&ch[1 ]           "<<&ch[1]<<endl;

    cout<<"(void*)&ch[1]   :"<<(void*)&ch[1]<<endl;
         cout<<"(void*)&ch[2]   :"<<(void*)&ch[2]<<endl;
             cout<<"(void*)&ch[3]   :"<<(void*)&ch[3]<<endl;
             
             
             cout<<"##############################################################0"<<endl;  //direct excess

            for(int i=0;i<6;i++)
            {
                cout<<ch[i]<<endl;
            }
               cout<<"##############################################################0"<<endl;  //by the name of array

            for(int i=0;i<6;i++)
            {
                cout<<*(ch+i)<<endl;
            }
               cout<<"##############################################################0"<<endl;

            for(int i=0;i<6;i++)
            {
                cout<<*(c+i)<<endl;
            }
            return 0;
}