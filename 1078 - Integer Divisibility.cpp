#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   typedef long long ll;
   ll result =0 , c=0 , modm=0;
   int a=0 , b=0, tkase=0;
   cin>>tkase;
   for(int i=1; i<=tkase; i++)
   {
       cin>>a>>b;
       result = b;
       for(;;)
       {
           c++;
           result = result % a;
           if(result == 0)
           {
               break;
           }
           else
           {
               result = result * 10 + b;
           }
       }
       cout <<"Case "<<i<<": "<<c<<endl;
       c=0;
   }
  return 0;
}
 
