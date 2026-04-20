#include<iostream>
#include<cmath>
using namespace std;
class rect;
class polar
{
    double mag;
    double ang;
    public:
    polar(float a,float b)
    {
        mag=a;
        ang=b;
    }
    double get()
    {
        return mag;
    }
    double angle()
    {
        return ang;
    }
    void display()
    {
        cout<<"magnitude:"<<mag<<"\nangle:"<<ang<<endl;
    }

};
class rect
{
    double real,img,r,i;
    public:
    rect(polar m)
    {
        r=m.get();
        i=(m.angle())*(3.14/180);
        real=r*cos(i);
         img=r*sin(i);
    }
    void display()
    {
        if(img<0)
        {
            cout<<"Rectangular form: "<<real<<img<<"j"<<endl;
        }
        else if(img>0)
        {
        cout<<"Rectangular form: "<<real<<"+"<<img<<"j"<<endl;
        }
        else
        {
            cout<<"Rectangular form: "<<real;
        }
    }
};
int main()
{
    double k,l;
    cout<<"enter the magnitude and angle:"<<endl;
    cin>>k>>l;
    polar o1(k,l);
    rect o2=o1;
    o1.display();
    o2.display();
    return 0;
}
