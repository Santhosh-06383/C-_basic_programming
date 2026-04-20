#include<iostream>
#include<math.h>
using namespace std;
class num
{
   int x,y;
   public:
   num()
   {
   }
   num(int a,int b)
   {
      x=a;
      y=b;
   }
   num operator * (num n)
   {
      float r1=sqrt((x*x)+(y*y));
      float t1=atan2(y,x);
      float r2=sqrt((n.x*n.x)+(n.y*n.y));
      float t2=atan2(n.y,n.x);
      float p1=r1*r2;
      float p2=t1+t2;
      num m;
      m.x=round(p1*cos(p2));
      m.y=round(p1*sin(p2));
      return m;
   }
   num operator-(num n)
   {
      num m;
      m.x=x-n.x;
      m.y=y-n.y;
      return m;
   }
   void display()
   {
      cout<<"Complex no:"<<x<<"+j"<<y<<endl;
   }
};
   int main()
   {
      num c1(10,6);
      num c2(7,2);
      num c3,c4;
      c3=c1*c2;
      cout<<"\nmultiply of two complex numbers\n";
      c3.display();
      c4=c1-c2;
      cout<<"\nsubraction of two complex numbers\n";
      c4.display();
      return 0;
   }
