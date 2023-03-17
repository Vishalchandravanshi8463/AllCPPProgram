
#include<iostream>
using namespace std;
class queue
{
  int front ;
  int rear;
  int arr[5];
  public:
  queue()
  {
      front=-1;
      rear=-1;
      for(int i=0;i<5;i++)
      {
          arr[i]=0;
      }
  }
  bool isempty()
  {
      if(front==-1&&rear==-1)
      {
         return true;
      }
      else
      {
          return false;
      }
      
  }
  bool isfull()
  {
      if(rear==4)
      {
          return true;
      }
      else
      return false;
  }
  void enequeu(int val)
  {
    if(isfull())
    return ;
    else if (isempty())
    {
      rear=front=0; 
      arr[rear]=val; 
    }
    else
    {
        rear++;
        arr[rear]=val;
    }
    
  }
  int  dequeue()
  {
    int x;
    if(isempty())
    {
      cout<<"queue is empty \n";
      return 0;
    }
    else if(front ==rear)
    {
      x=arr[ front];
       arr[front]=0;
      rear=-1;
      front =-1;
     
      return x;
    }
    else
    {
      x=arr [front];
      arr[front]=0;
      front++;
      return x;
    }
  }
  int count()
  {
    return (rear-front+1);
  }
  void display()
  {
     cout<<"all value in  the queue are "<<endl;
      for(int i=0;i<5;i++)
      {
          cout<<arr[i]<<"  ";
      }
  }
};
int main()
{
  queue q1;
  int option,value;
   do
    {
        cout<<"what operation do you want to perform select option number ,enter 0 to exit\n ";
        cout<<"1.enque"<<endl;
        cout<<"2.deque"<<endl;
        cout<<"3.isempty"<<endl;
        cout<<"3.isfull"<<endl;
        
        cout<<"5.count"<<endl;
        
        cout<<"6.display"<<endl;
        cin>>option;
        switch(option)
        {
          case 0:
          break;
            case 1:
            cout<<"enter as items to enqueue in the queue "<<endl;
            cin>>value;
           q1.enequeu(value);
            break;
            case 2:
            cout<<"dequeue function called -dequeue value "<<q1.dequeue()<<endl;
            break;
            case 3:
            if(q1.isempty())
            cout<<"queue is empty\n";
            else
            cout<<"queue is not empty\n";
            break;
            case 4:
            if(q1.isfull())
            cout<<"queue is full\n";
            else
            cout<<"queue is not full\n";
            break;
           
            case 5:
            cout<<"count function called number of itens in the queue are  "<<q1.count()<<endl;
            break;
            case 6:
            cout<<"display function called \n";
            q1.display();
            break;
            default:
            cout<<"enter valid option\n";
            break;
            
        }
    } while (option !=0);
        
  return 0;
}