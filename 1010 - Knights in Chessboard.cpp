#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    int row=0 , col=0, save=0, tkase=0;
    int result;
    cin>>tkase;
    for(int i=1; i<=tkase; i++)
    {
 
        result=0;
        cin>>row>>col;
        result=row*col;
        if(row==1 || col ==1)
        {
            cout<<"Case "<<i<<": "<<max(row,col)<<endl;
        }
        else if(row==2 || col==2)
        {
            save = max(row, col);
            result = save;
            if(save % 4 ==1 || save % 4 ==3  )
            {
                result = result+1;
            }
            if(save % 4 ==2)
            {
                result = result+2;
            }
            cout<<"Case "<<i<<": "<<result<<endl;
        }
        else if (result % 2 ==1)
        {
            result = (result/2)+1;
            cout<<"Case "<<i<<": "<<result<<endl;
        }
        else
        {
            cout<<"Case "<<i<<": "<<result/2<<endl;
        }
 
    }
    return 0;
}
