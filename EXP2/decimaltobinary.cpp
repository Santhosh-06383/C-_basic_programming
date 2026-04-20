#include<iostream>
using namespace std;
class change
{
   int *point;
   int space;
   public:
   change()
   {
      space=0;
   }
   ~change()
   {
      cout<<"\nDestructor executed";
   }
   change(int n)
   {
      int space;
      int temp=n;
      while(temp!=0)
      {
         temp=temp/2;
         space++;
      }
      point=new int[space];
   }
   void decimaltobinary(int n)
   {
      int i=0;
      while(n>0)
      {
         point[i]=n%2;
         n=n/2;
         i++;
      }
      for(int j=i-1;j>=0;j--)
      {
         cout<<""<<point[j];
      }
   }
};
int main()
{
   int decimal;
   cout<<"enter the no:"<<endl;
   cin>>decimal;
   change k(decimal);
   k.decimaltobinary(decimal);
   return 0;
}
