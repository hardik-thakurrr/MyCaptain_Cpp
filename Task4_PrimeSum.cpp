//Write a C++ program to Check Whether a Number can be Express as Sum of Two Prime Numbers
#include<iostream>
using namespace std;

int func(int num)
{
   int i;
   int flag = 1;
   for(i = 2; i <= num/2; ++i)
    {
      if(num % i == 0)
      {
         flag = 0;
         break;
      }
   }
   return flag;
}
int main()
{
   int num , i;
   cout << "Enter a number -> ";
   cin >> num;
   for(i = 2; i <= num/2; ++i)
    {
      if (func(i))
      {
         if (func(num - i))
         {
            cout << num << " = " << i << " + " << num-i << endl;
         }
      }
   }
   return 0;
}