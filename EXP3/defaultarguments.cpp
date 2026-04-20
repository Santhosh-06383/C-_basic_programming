#include<iostream>
using namespace std;
class machines
{
        float vt,rse,ra,rsh,i;
   public:
        machines()
        {
        }
        ~machines()
        {
           cout<<"Destructor executed"<<endl;

        }
        void genervolt(double i,int rsh,float ra=1.2)
        {
           float vt=220.0;
           float ish=(vt/rsh);
           float ia=i+ish;
           float shunt=vt+(ia*ra);
           cout<<"Generated voltage for shunt generator:"<<shunt<<endl;
        }
        void genervolt(double rse,float ra=1.2,int i=3,int ish=5)
        {
           float vt=220.0;
           float series=(vt+(i*(ra+rse)));
           cout<<"Generated voltage for series generator:"<<series<<endl;
        }
        void genervolt(double ra,double i,int rsh=75,int rse=6)
        {
                float vt=220.0;
                float ish=(vt/rsh);
                float longshunt=(vt+((i+ish)*(ra+rse)));
                cout<<"Generated voltage for long shunt generator:"<<longshunt<<endl;
                float ia;
                ia=(vt/ra);
                float shortshunt=(vt+(ia*ra)+(ish*rse));
                cout<<"Generated voltage for short shunt generator:"<<shortshunt<<endl;
        }};
int main()
{
        machines eee;
        cout<<"Generated voltages of generators"<<endl;
        eee.genervolt(8.2,56);
        eee.genervolt(18.2);
        eee.genervolt(9.4,4.3);
        return 0;
}
