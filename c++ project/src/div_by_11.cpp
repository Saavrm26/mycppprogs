#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
   int n;
   cin>>n;
   string s="",s1="";char ch; int no,i;
   int a[n],e=0,o=0;
   for(i=0;i<n;i++)
   {
      cin>>a[i];
   }
   int c=0;
   for(i=0;i<n/2;i++)
   {
      c=0;
      int y=a[i];
      while(y>0)
      {
         c++;
         y=y/10;
      }
      no=a[i]/(int)(pow(10,c-1));
      if(i%2==0)
      {
         e=e+no;
      }
      else
      {
         o=o+no;
      }
     
     
   }
   
   for(i=n/2;i<n;i++)
   {
      no=(a[i]%10);
      if(i%2==0)
      {
         e=e+no;
      }
      else
      {
         o=o+no;
      }
     
 
   }
   
   int diff=e-o;
   diff=abs(diff);
 
 
  if(diff%11==0)
   {
      cout<<"OUI";
   }
   else
   {
      cout<<"NON";
   }
 
 
}