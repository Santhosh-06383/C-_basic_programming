#include<iostream>
#include<cmath>
using namespace std;
template<class s>


   float complex(s num, s a){
      num=num*-1;
      num=sqrt(num);
      float img=(num/(2*a));
            return img;}
            template<class s>
   void roots(s a, s b, s c){
            float d=((b*-1)/(2*a));
            s e=pow(b,2);
            s f=(e-(4*a*c));
            if(f<0){
            double g=complex(f,a);
            cout<<"Root 1 is: "<<d<<"+j"<<g<<endl;
            cout<<"Root 2 is: "<<d<<"-j"<<g<<endl;
            }
            else{
            float h=sqrt(f);
            double i=(d+(h/(2*a)));
            cout<<"Root 1 is: "<<i<<endl;
            double j=(d-(h/(2*a)));
            cout<<"Root 2 is: "<<j<<endl;}}
            int main(){
               roots(1,2,1);
               roots(1.2,2.1,3.3);
               return 0;
            }
