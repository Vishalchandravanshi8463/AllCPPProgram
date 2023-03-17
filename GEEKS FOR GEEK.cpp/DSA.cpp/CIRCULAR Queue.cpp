#include<iostream>
using namespace std;
class CircularQueue
{
  int front ;
  int rear;
  int arr[5];
  int itemcount;
  public:
  CircularQueue()
  {
      itemcount =0;
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
      if((rear+1)%5==front)
      {
          return true;
      }
      else
      return false;
  }
  void enequeu(int val)
  {
    if(isfull())
    {
        cout<<"queue is full\n";
     return ;
    }
    else if (isempty())
    {
      rear=front=0; 
      arr[rear]=val; 
      itemcount++;
    }
    else
    {
        rear=(rear+1)%5;
        arr[rear]=val;
        itemcount++;
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
     itemcount--;
      return x;
    }
    else
    {
      x=arr [front];
      arr[front]=0;
      front=(front+1)%5;
      itemcount--;
      return x;
    }
  }
  int count()
  {
    return (itemcount);
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
  CircularQueue q1;
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