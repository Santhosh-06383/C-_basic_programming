#include<iostream>
#include<string>
using namespace std;
class item{
   int code, price,quant;
   string name;
   public:
   item(){
      code=0;
      price=0;
      quant=0;
      name="";}
   ~item(){
      cout<<"Destructor executed";}
   void getname()
   {
      cout<<"Enter the name of item:"<<endl;
      cin>>name;}
      void getcode(){
         cout<<"Enter the codeno.:"<<code<<endl;
         cin>>code;}
     int getquant(){
         cout<<"Enter the quantity:"<<endl;
         cin>>quant;
         return quant;}
     int getprice(){
        cout<<"Enter price:"<<endl;
        cin>>price;
        return price;
     }};
int main(){
   item r1,r2;
   int a,b,c,d,tot;
   r1.getname();
   r1.getcode();
   c=r1.getquant();
   a=r1.getprice();
   r2.getname();
   r2.getcode();
   d=r2.getquant();
   b=r2.getprice();
   tot=(a*c)+(b*d);
   cout<<"The total price of item is : "<<tot<<endl;
   return 0;
}
