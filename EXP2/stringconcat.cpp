#include<iostream>
#include<cstring>
using namespace std;
class String
{
   char *k,*l;
   int length;
   public:
   String()
   {
      length=0;
   }
   ~String()
   {
      cout<<"\nDestructor executed";
   }
  String(const char *old)
   {
      length=strlen(old);
      k=new char[length];
      strcpy(k,old);
      cout<<k;
   }
  String(const char *a,const char *b)
   {
      length=strlen(a)+strlen(b);
      l=new char[length];
      strcpy(l,a);
      strcat(l,b);
      cout<<l;
   }
};
int main()
{
   String s1("Santhosh");
   cout<<"\n";
   String s2("Santhosh","kumar");
   return 0;
}
