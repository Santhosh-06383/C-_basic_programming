#include<iostream>
using namespace std;
class stack
{
   int a[5],n,c,f;
   public:
   stack(){
      c=-1;
      f=0;
   }
   void getdata()
   {
      int g;
      cout<<"_____Default limit of stack is 5____"<<endl;
      cout<<"*****If you want to customize (yes - 1; no - 0)*****"<<endl;
      cin>>g;
      if(g==1){
      cout<<"Enter your limit of stack: "<<endl;
      cin>>n;}
      else
         n=5;
      cout<<"Enter the elements: "<<endl;
      for(int i=0;i<n;i++)
      {
         cin>>a[i];
         c=i;
      }
      f=1;}
   void push(int a1)
   {
      try
      {
         if(c<4){
            a[c+1]=a1;
            c+=1;
            f=1;
         }
         else
         {
            throw a1;
         }}
      catch(int d){
         cout<<"STACK OVERFLOW - "<<d<<" Cannot be inserted into stack"<<endl;}}
   void pop(){
      try{
         if (c>=0)
         {
            cout<<"Popped element:"<<a[c]<<endl;
            a[c]='\0';
            c-=1;
         }
         else
         {
            throw c;}}
      catch (int b)
         {
            if(b<0 && f==1)
            {
               cout<<"Exception : STACK UNDERFLOW"<<endl;

            }
            if(b<0 && f==0)
            {
               cout<<"Exception : Stack is empty, Nothing to push"<<endl;
               throw;}}}};
int main()
{
   stack s1,s2;
   try{
    s1.getdata();
    s1.push(99);
    s1.push(100);
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s2.pop();
   }
   catch(int e)
   {
      cout<<"Exception in main function"<<endl;
   }
   catch(...)
   {
      cout<<"Default exception"<<endl;
   }
    return 0;
}
