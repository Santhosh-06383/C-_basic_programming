#include<iostream>
using namespace std;

template <class T>
class matrix
{
   public:
      T a[3][3], b[3][3], c[3][3];

      void getdata()
      {
         cout << "Enter the 1st matrix:\n";
         for(int i=0;i<3;i++)
         {
            for(int j=0;j<3;j++)
            {
               cin >> a[i][j];
            }
         }
      }

      void getdata2()
      {
         cout << "Enter the 2nd matrix :\n";
         for(int i=0;i<3;i++)
         {
            for(int j=0;j<3;j++)
            {
               cin >> b[i][j];
            }
         }
      }

      void display()
      {
         for(int i=0;i<3;i++)
         {
            for(int j=0;j<3;j++)
            {
               cout << c[i][j] << "\t";
            }
            cout << endl;
         }
      }

      void multiply()
      {
         cout << "\n  matrix multiplication : \n";
         for(int i=0;i<3;i++)
         {
            for(int j=0;j<3;j++)
            {
               c[i][j] = 0;
               for(int k=0;k<3;k++)
               {
                  c[i][j] += a[i][k] * b[k][j];
               }
            }
         }
      }

      void add()
      {
         cout << "\n matrix addition is :\n";
         for(int i=0;i<3;i++)
         {
            for(int j=0;j<3;j++)
            {
               c[i][j] = a[i][j] + b[i][j];
            }
         }
      }
};

int main()
{
   matrix<int> d;
   d.getdata();
   d.getdata2();
   d.multiply();
   d.display();
   d.add();
   d.display();
   matrix<float> f;
   f.getdata();
   f.getdata2();
   f.multiply();
   f.display();
   f.add();
   f.display();
}
