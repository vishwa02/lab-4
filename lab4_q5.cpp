#include <iostream>
#include <cmath>
using namespace std;

int Prime(int num)
{
  int count=0;
  for(int i=2;i<num;i++)
  {
   if(num%i==0)
   count++;
  }
  if(count==0)
    cout<<"\n \n"<<num<<" is a prime number.\n";
  else
    cout<<"\n \n"<<num<<" is not a prime number. \n";
  return 0;
}

//Function to check Armstrong
int Armstrong(int num)
{
  int num1, rem, sum = 0,dig;
  num1 = num;
  while(num1 != 0)
  {
      dig = num1 % 10;
      sum += pow(dig,3);
      num1 /= 10;
  }

  if(sum == num)
    cout <<num<< " is an Armstrong number.\n";
  else
    cout <<num<< " is not an Armstrong number.\n";

  return 0;
}

/*Function to check whether a number is Perfect number or not.*/
int Perfect(int num)
{
  
  int i=1,sum=0;
  while(i<num)
  {
    if(num%i==0)
      sum=sum+i;
    i++;
  }
  if(sum==num)
         cout << num  <<  " is a perfect number\n";
  else
         cout << num << " is not a perfect number \n";
  return 0;
}
int main()
{
  int num1;
  cout<<"\nProgram to check whether a number is Prime number, Armstrong or Perfect.";
  cout<<"\nENTER THE NUMBER: ";
  cin>>num1;
  Prime(num1);
  Perfect(num1);
  Armstrong(num1);
  return 0;
}

