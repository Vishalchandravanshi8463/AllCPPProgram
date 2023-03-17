#include<iostream>
using namespace std;
class Stack
{
      // QUESTION PUSH AND POP OPERATION IN STACK     IN C++ VISHAL
  int top;
  int arr[5];
  public:
  Stack()
  {
      top=-1;
      for(int i=0;i<5;i++)
      {
          arr[i]=0;
      }
  }
  bool isempty()
  {
      if(top==-1)
      return true;
      else
      return false;
  }
  bool isfull()
  {
      if(top==4)
      return true;
      else
      return false;
  }
  void push(int val)
  {
    if(isfull())
    {
        cout<<"stack is overflow\n";
    }
    else
    {
        top++;
        arr[top]=val;
    }
  }
  int pop()
  {
      if(isempty())
      {
          cout<<"stack underflow\n";
          return 0;
      }
      else
      {
          int popvalue=arr[top];
          arr[top]=0;
          top--;
          return popvalue;
      }
  }
  int count()
  {
      return (top+1);
  }
  int peek(int pos)
  {
      if(isempty())
      {
          cout<<"stack is undreflow\n";
          return 0;
      }
      else
      return arr[pos];
  }
  void change(int pos,int value)
  {
      arr[pos]=value;
      cout<<"value change at location "<<pos<<endl;
  }
  void display()
  {
      cout<<"all value in  the stack are"<<endl;
      for(int i=4;i>=0;i--)
      {
          cout<<arr[i]<<endl;
      }
  }

};
int main ()
{
    Stack s1;
    int option,position,value;
    do
    {
        cout<<"what operation do you want to perform select option number ,enter 0 to exit\n ";
        cout<<"1.push"<<endl;
        cout<<"2.pop"<<endl;
        cout<<"3.isempty"<<endl;
        cout<<"3.isfull"<<endl;
        cout<<"4.peek"<<endl;
        cout<<"6.count"<<endl;
        cout<<"7.change"<<endl;
        cout<<"8.display"<<endl;
        cin>>option;
        switch(option)
        {
            case 1:
            cout<<"enter as items to push in the stack "<<endl;
            cin>>value;
            s1.push(value);
            break;
            case 2:
            cout<<"pop function called -poped value "<<s1.pop()<<endl;
            break;
            case 3:
            if(s1.isempty())
            cout<<"stack is empty\n";
            else
            cout<<"stack is not empty\n";
            break;
            case 4:
            if(s1.isfull())
            cout<<"stack is full\n";
            else
            cout<<"stack is not full\n";
            break;
            case 5:
            cout<<"enter the position you want to peek\n";
            cin>>position;
            cout<<"peek function called value at position  "<<position<<" is " <<s1.peek(position)<<endl;
            break;
            case 6:
            cout<<"count function called number of itens in the stack are"<<s1.count()<<endl;
            break;
            case 7:
            cout<<"change function called \n";
            cout<<"enter the position of items you want to change \n";
            cin>>position;
            cout<<endl;
            cout<<"enter value the items  you want to change \n";
            cin>>value;
            s1.change(position ,value);
            break;
            case 8:
            cout<<"display function called \n";
            s1.display();


        }
    } while (option !=0);

    
 return 0;
}