#include<iostream>
using namespace std;
class average
{
   int a,b;
   public:
   average(int x,int y)
   {
      a=x;
      b=y;
   }
   void calc1()
   {
    try{  try
      { if (b==0)
         {throw 0;
         }
        else
        {cout<<"The division of two numbers is:"<<a/b<<endl;
        }
      }
      catch(int m)
      {cout<<"can't divide by zero"<<"\n";
      throw;}
   }
    catch(...)
    {cout<<"Exception handled \n";}
   }
     void calc2()
     {
      try
      {try
       {
        if(a<0 || b<0)
        {throw a;
        }
        else
        {cout<<"THe addition of two numbers is:"<<a+b<<endl;
        }
       }
     catch(int n)
      {cout<<"Entered no is less than zero"<<"\n";
       throw;
      }
      }
     catch(...)
     {cout<<"Exception handled \n";}
     }
     };
   int main()
   {
      average a1(9,3);
      average a2(-4,1);
      average a3(7,0);
      a1.calc1();
      a1.calc2();
      a2.calc2();
      a3.calc1();
       return 0;
   }
