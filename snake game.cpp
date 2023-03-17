#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>
using namespace std;
bool gameover;
const int width=20;
const int height=20;
int x,y,fruitx,fruity,score;
enum eDirection{STOP=0,LEFT,RIGHT,up,DOWN};
eDirection dir;
void setup()
{
  gameover =false;
  dir=STOP;
  x=width/2;
  y=height/2;
  fruitx=rand()%width;
  fruity=rand()%height;
  score=0;
}
void draw()
{
  system("cls");
  for(int i=0;i<width+2;i++)
   cout<<"#";
   cout<<endl;

   for(int i=0;i<height;i++)
   {
       for(int j=0;j<width;j++)
       {
           if(j==0)
           
               cout<<"#";
               if(i==y&&j==x)
               cout<<"O";
               else if(i==fruity&&j==fruitx)
               cout<<"F";
               else
               cout<<" ";
           
           
           
              // cout<<" ";
           
           if(j==width-1)
            cout<<"#";
           
        }
       cout<<endl;
   }
   for(int i=0;i<width+2;i++)
   cout<<"#";
   cout<<endl;

  cout<<"score= "<<score<<endl;
}
void input()
{
 if (_kbhit())
 {
   switch(_getch())
   {
     case 'a':
     dir=LEFT;
     break;
     case 'd':
     dir=RIGHT;
     break;
      case 'w':
     dir=up;
     break;
      case 's':
     dir=DOWN;
     break;
     case 'x':
     gameover=true;
     break;
   }
 }
}
void logic ()
{
   switch(dir)
   {
     case LEFT:
     x--;
     break;
      case RIGHT:
      x++;
     break;
      case up:
       y--;
      break;
     case DOWN:
      y++;
     break;
    default:
    break;
   }
   if(x>width||x<0||y>height||y<0)
   {
     gameover=true;
   }
   if(x==fruitx&&y==fruity)
   {
     score+=10;
      fruitx=rand()%width;
      fruity=rand()%height;
   }
}
int main()
{
    setup();
    while(!gameover)
    {
    draw();
    input();
    logic();
    }
  return 0;
}