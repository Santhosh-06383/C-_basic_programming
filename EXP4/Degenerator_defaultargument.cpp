#include<iostream>
using namespace std;
class generator
{
        float v;
        double eg1,eg2,eg3,eg4,rsh,rs,il;
        double ra;
        public:
        generator()
        {
            v=220.0;
        }
        ~generator()
        {

        }
        void emf(int il,int rsh,float ra=1.2)
        {

                float ish=(v/rsh);
                float ia=il+ish;
                eg1=v+(ia*ra);
                cout<<"shunt resistance:"<<eg1<<endl;
        }
        void emf(int rs,float ra=1.2,int il=4)
        {
                eg2=(v+(il*(ra+rs)));
                cout<<"series resistance:"<<eg2<<endl;
        }
        void emf(double ra,int il,int rsh=75,int rs=6)
        {
                float ish=(v/rsh);
                eg3=(v+((il+ish)*(ra+rs)));
                cout<<"long shunt:"<<eg3<<endl;
                double ia;
                eg4=(v+((il+ish)*ra)+(il*rs));
                cout<<"short shunt:"<<eg4<<endl;
        }
};
int main()
{
        generator g;
        g.emf(4,75);
        g.emf(6);
        g.emf(1.2,7);

        return 0;
}
