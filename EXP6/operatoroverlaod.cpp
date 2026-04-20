#include<iostream>
using namespace std;
class class1
{
   int m,cm;
   public:
   class1()
   {
      m=0;
      cm=0;
   }
   class1(int x,int y)
   {
      m=x;
      cm=y;
   }
   void operator ++(int)
   {
      ++cm;
      int rem;
      rem=cm/100;
      if(rem>0)
      {
         m=m+rem;
         cm=cm%100;
      }

   }
   void operator ++()
   {
      cm++;
      int rem;
      rem=cm/100;
      if(rem>0)
      {
         m=m+rem;
         cm=cm%100;
      }
   }
      void operator --(int)
      {
         --cm;
         int rem;
         rem=cm/100;
         if(rem>0)
         {
            m=m+rem;
            cm=cm%100;
         }
      }
         void operator --()
         {
            cm--;
            int rem;
            rem=cm/100;
            if(rem>0)
            {
               m=m+rem;
               cm=cm%100;
            }
         }
            void display()
            {
               cout<<m<<" meters  "<<cm<<" centimetre"<<endl;
            }
            };
            int main()
         {
            class1 a(2,10);
            class1 b(2,99);
            class1 c(3,99);
            class1 d(4,103);
            a--;
            b++;
            c++;
            --d;
            a.display();
            b.display();
            c.display();
            d.display();
            return 0;
            }
