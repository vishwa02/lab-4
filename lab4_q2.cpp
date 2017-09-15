
#include <iostream>
using namespace std;

void circle_operations()
{ 
  float rad=0;
  float dia, ar, per;
  cout<<"****CIRCLE OPERATIONS****";
  cout<<"\n \nEnter the Radius of the circle: ";
  cin>>rad;
  dia=2*rad;
  per=2*rad*((double)22/7);
  ar=((double)22/7)*rad*rad;
  cout<<"\n \nThe diameter of the circle is: "<<dia;
  cout<<"\n \nThe perimeter of the circle is: "<<per; 
  cout<<"\n \nThe area of the circle is: "<<ar;   
}
int main()
{
  circle_operations();
  return 0; 
}
