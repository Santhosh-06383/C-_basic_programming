#include<iostream>
#include<cmath>
using namespace std;
class octal
{
    int oct;
    public:
    octal()
    {
        oct=0;
    }
    octal(int d)
    {
        oct=0;
        int i=1;
        while(d!=0)
        {
            oct=oct+(d%8)*i;
            d=d/8;
            i=i*10;
        }
    }
    octal operator=(int d)
    {
        octal temp(d);
        return temp;
    }
    octal operator-(octal o)
    {
        int d1=0,d2=0,i=0;
        octal temp;
        while(oct!=0)
        {
            d1=d1+(oct%10)*pow(8,i++);
            oct=oct/10;
        }
        i=0;
        while(o.oct!=0)
        {
            d2=d2+(o.oct%10)*pow(8,i++);
            o.oct=o.oct/10;
        }
        temp.oct=d1-d2;
        return temp.oct;
    }
    void display()
    {
        cout<<oct<<endl;
    }
};
int main()
{
    int n1,n2;
    cout<<"enter the two decimal numbers:"<<endl;
    cin>>n1>>n2;
    octal o1=n1;
    cout<<"equivalent octal value:"<<n1<<" is:"<<endl;
    o1.display();
    octal o2=n2;
    cout<<"equivalent octal value:"<<n2<<" is:"<<endl;
    o2.display();
    octal o3=o1-o2;
    cout<<"subtract of two octal object:"<<endl;
    o3.display();
    return 0;
}
