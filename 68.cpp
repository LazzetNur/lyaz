#include <iostream>
#include <cmath>
using namespace std;
main ()
{
  float a,b,c,x1,x2;
  cin>>a>>b>>c;
  if(b*b-4*a*c>=0){
  x1=(-b+sqrt(b*b-4*a*c))/2*a;
   x2=(-b-sqrt(b*b-4*a*c))/2*a;
   cout<<x1<<endl<<x2;}else cout<<"error";
}
