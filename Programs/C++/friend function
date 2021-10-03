#include <iostream>
using namespace std;
class complex{
 int a,b;
 public:
     void sett(int x,int y)
     {
         a=x;
         b=y;
     }
     void show()
     {
         cout<<"a="<<a<<" b="<<b<<endl;
     }
     friend complex operator-(complex);
};
     complex operator-(complex x)
     {
         complex temp;
         temp.a=-x.a;
         temp.b=-x.b;
         return temp;
     }

int main()
{
    complex c1,c2;
   c1.sett(5,6);
   c2=-c1;
   c1.show();      //method of unary operator no argument is passed
   c2.show();
    return 0;
}
