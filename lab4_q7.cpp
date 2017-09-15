#include <iostream>
using namespace std;

int strong(int j)
{ 
  int temp=j;
  int i,f,r;
  int sum=0;
  while(temp>0)
  {
      i=1,f=1;
      r=temp%10;
      while(i<=r)
      {
        f=f*i;
        i++;
      }
      sum=sum+f;
      temp=temp/10;
  }
  if(sum==j)
    return 0;
  else 
    return 1;
}
int main()
{
  int num1=0,num2=0;
  cout<<"\nProgram to print strong numbers in a given interval.";
  cout<<"\nENTER THE LOWER LIMIT: ";
  cin>>num1;
  cout<<"\nENTER THE UPPER LIMIT: ";
  cin>>num2;
  int j=num1;
  cout<<endl<<endl;
  while(j<=num2)
  {
  int count1=strong(j);
  if(count1==0)
    cout<<"\n"<<j<<" is a strong number.";
  j++;
  }
  return 0;
}
