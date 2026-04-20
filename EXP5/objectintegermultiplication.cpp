#include <iostream>
using namespace std;

class num {
private:
    int value;
public:
    num(int v = 0) {
        value = v;
    }
    friend num operator*(const num &n, int multiplier);
    void display() const {
        cout << "Value: " << value << endl;
    }};
num operator*(const num &n, int multiplier) {
   return num(n.value * multiplier);
}
int main() {
   int object,integer;
   cout<<"Enter an object value:"<<endl;
   cin>>object;
   cout<<"Enter an integer:"<<endl;
   cin>>integer;
    num no(object);
    num res = no * integer;
    cout << "Object= "<<object<<", Integer= "<<integer<<endl;
    res.display();
    return 0;
}
