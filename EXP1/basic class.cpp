#include<iostream>
#include<string>
using namespace std;
class student
{
   string name;
   int age;
   float height, weight, percent;
   public:
   student() {
      name="";
      age=0;
      height=0;
      weight=0;
      percent=0;
   }
   ~student() {}
   void getdata()
   {
      cout<<"Enter your name: ";
      cin>>name;
      cout<<"Enter your age: ";
      cin>>age;
      cout<<"Enter your height and weight: ";
      cin>>height>>weight;
      cout<<"Enter your marks in percentage: ";
      cin>>percent;
   }
   void printdata(){
      cout<<"Name of the student  : "<<name<<endl;
      cout<<"Age of the student   : "<<age<<endl;
      cout<<"Height of the student: "<<height<<endl;
      cout<<"Weight of the student: "<<weight<<endl;
      cout<<"Secured Percentage   : "<<percent<<endl;
   }};
int main(){
   student s1;
   s1.getdata();
   s1.printdata();
return 0;
}
