#include <iostream>
#include <cmath>
using namespace std;

int ARMSTRONG(int num1, int num2)
{ 
  int tnum,sum,dig;
  int i=num1;
  while(i<=num2)
  {
  tnum=i;
  sum=0;
     while(tnum != 0)
     {
        dig = tnum % 10;
        sum += pow(dig,3);
        tnum /= 10;
     }
    if(sum == i)
    cout<<"\n"<<i<< " is an Armstrong number.";
    i++;
   }
   return 0;
}


int main()
{
  int num1=0,num2=0;
  cout<<"PROGRAM TO PRINT ALL ARMSTRONG NUMBERS IN AN INTERVAL";
  cout<<"\nENTER THE LOWER LIMIT: ";
  cin>>num1;
  cout<<"\nENTER THE UPPER LIMIT: ";
  cin>>num2;
  int a=ARMSTRONG(num1,num2);
  return a;
}
