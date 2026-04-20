#include<iostream>
using namespace std;
class base{
   protected:
      int a;
   public:
      base(int x){
         a=x;
      }
      virtual void display(){
         cout<<"Base class:a= "<<a<<endl;
      }};
class deri1:public base{
   protected:
      int b;
   public:
      deri1(int x, int y):base(x){
         b=y;
      }
      void display(){
         cout<<"Base class: a= "<<a<<endl;
         cout<<"Derived class1: b= "<<b<<endl;
      }};
class deri2:public deri1{
   protected:
      int c;
   public:
      deri2(int x, int y, int z):deri1(x,y){
         c=z;
      }
      void display(){
         cout<<"Base class: a= "<<a<<endl;
         cout<<"Derived class1: b= "<<b<<endl;
         cout<<"Derived class2: C= "<<c<<endl;}};
class deri3:public deri2{
   protected:
      int d;
   public:
      deri3(int x, int y, int z, int w):deri2(x,y,z){
         d=w;
      }
      void display(){
         cout<<"Base class: a= "<<a<<endl;
         cout<<"Derived class1: b= "<<b<<endl;
         cout<<"Derived class2: c= "<<c<<endl;
         cout<<"Derived class3: d= "<<d<<endl;
      }};
class deri4:public deri3{
   protected:
      int e;
   public:
      deri4(int x, int y, int z, int w, int v):deri3(x,y,z,w){
         e=v;}
         void display(){
            cout<<"Base class: a= "<<a<<endl;
            cout<<"Derived class1: b= "<<b<<endl;
            cout<<"Derived class2: c= "<<c<<endl;
            cout<<"Derived class3: d= "<<d<<endl;
            cout<<"Derived class4: e= "<<e<<endl;
         }};
      class deri5:public deri4{
         protected:
            int f;
         public:
            deri5(int x, int y, int z, int w, int v, int u):deri4(x,y,z,w,v){
               f=u;}
               void display(){
                  cout<<"Base class: a= "<<a<<endl;
                  cout<<"Derived class1: b= "<<b<<endl;
                  cout<<"Derived class2: c= "<<c<<endl;
                  cout<<"Derived class3: d= "<<d<<endl;
                  cout<<"Derived class4: e= "<<e<<endl;
                  cout<<"Derived class5: f= "<<f<<endl;
               }};
            int main(){
               base *ptr;
               base o1(10);
               deri1 o2(10,20);
               deri2 o3(10,20,30);
               deri3 o4(10,20,30,40);
               deri4 o5(10,20,30,40,50);
               deri5 o6(10,20,30,40,50,60);
               ptr=&o1;
               o1.display();
               ptr=&o2;
               o2.display();
               ptr=&o3;
               o3.display();
               ptr=&o4;
               o4.display();
               ptr=&o5;
               o5.display();
               ptr=&o6;
               o6.display();
               return 0;
            }
