#include<iostream>
using namespace std;
class dcgen{
   protected:
      float V,Ra,Rsh;
   public:
      dcgen(float vo, float ra){
         V=vo;
         Ra=ra;}};
class series:public dcgen{
  float Rse,Il;
   public:
  series(float vo, float ra, float rse, float il):dcgen(vo,ra)
   {
      Il=il;
  Rse=rse;
}
void calc(){
   float Ia=Il;
   float Eg=V+(Ia*(Ra+Rse));
   cout<<"*****Series Generator*****"<<endl;
   cout<<"Armature current : "<<Ia<<" A"<<endl;
   cout<<"Generated Voltage: "<<Eg<<" V\n"<<endl;}};
class shunt:public dcgen{
   float Rsh,Il;
   public:
   shunt(float vo, float ra, float rsh, float il):dcgen(vo,ra){
      Il=il;
      Rsh=rsh;
   }
   void calc(){
      float Ish=V/Rsh;
      float Ia=Il+Ish;
      float Eg=V+(Ia*Ra);
      cout<<"*****Shunt Generator*****\n";
      cout<<"Armature current : "<<Ia<<" A"<<endl;
      cout<<"Generated Voltage: "<<Eg<<" V\n"<<endl;
   }};
class shortshunt:public dcgen{
   float Rse,Rsh,Il;
   public:
   shortshunt(float vo, float ra, float rse, float rsh, float il):dcgen(vo,ra){
      Rse=rse;
      Rsh=rsh;
      Il=il;}
   void calc(){
      float Ish=V/Rsh;
      float Ia=Il+Ish;
      float Eg=V+(Ia*Ra)+(Il*Rse);
      cout<<"*****Shortshunt Compund generator*****\n";
      cout<<"Armature current : "<<Ia<<" A"<<endl;
      cout<<"Generated voltage: "<<Eg<<" V\n"<<endl;}};
class longshunt:public dcgen{
   float Rse,Rsh,Il;
   public:
   longshunt(float vo, float ra, float rse, float rsh, float il):dcgen(vo,ra){
      Rse=rse;
      Rsh=rsh;
      Il=il;}
      void calc(){
         float Ish=V/Rsh;
         float Ia=Il+Ish;
         float Eg=V+(Ia*(Ra+Rse));
         cout<<"*****Longshunt Compound generator*****\n";
         cout<<"Armature current : "<<Ia<<" A"<<endl;
         cout<<"Generated voltage: "<<Eg<<" V\n"<<endl;}};
int main(){
   series s(220,1.2,6,4);
   cout<<"----------DC Generators----------\n"<<endl;
   cout<<"For Vt=220.0V, Ra=1.2 ohms\n\n";
   s.calc();
   shunt s1(220,1.2,75,4);
   s1.calc();
   shortshunt s2(220,1.2,6,75,7);
   s2.calc();
   longshunt s3(220,1.2,6,75,7);
   s3.calc();
   return 0;}
