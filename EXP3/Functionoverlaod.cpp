#include<iostream>
using namespace std;
class network
{
   public:
      int currentcalc(float r)
      {
         float i=100/r;
         cout<<"Current through the "<<r<<" ohms resistor is: "<<i<<" Amps"<<endl;
      }
      int currentcalc(float r1, float r2)
      {
         float tr=r1+r2;
         float ti=100/tr;
         float v1=ti*r1;
         float v2=ti*r2;
         cout<<"For series resistor of "<<r1<<" and "<<r2<<" ohms resistors"<<endl;
         cout<<"Current through resistors: "<<ti<<" Amps"<<endl;
         cout<<"Voltage across resistor1: "<<v1<<" Volts"<<endl;
         cout<<"Voltage across resistor2: "<<v2<<" Volts"<<endl;
      }
      int currentcalc(float r1, float r2, float r3)
      {
         float tr=r1+r2+r3;
         float ti=100/tr;
         float v1=ti*r1;
         float v2=ti*r2;
         float v3=ti*r3;
         cout<<"For series resistors of "<<r1<<", "<<r2<< " and " <<r3<<"ohms resistors"<<endl;
         cout<<"Current through resistors: "<<ti<<" Amps"<<endl;
         cout<<"Voltage across resistor1: "<<v1<<" Volts"<<endl;
         cout<<"Voltage across resistor2: "<<v2<<" Volts"<<endl;
         cout<<"Voltage across resistor3: "<<v3<<" Volts"<<endl;
      }};
int main()
{
   network eee;
   cout<<"For 100 volts source current and voltages through various networks"<<endl;
   eee.currentcalc(15);
   eee.currentcalc(20,12);
   eee.currentcalc(14,13,12);
   return 0;
}
