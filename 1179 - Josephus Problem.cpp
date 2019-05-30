#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int tkase;
    cin>>tkase;
    for(int k=1; k<=tkase; k++)
    {
        int n,kth;
        cin>>n>>kth;
        int res=0;
        for(int i=1; i<=n; i++)
        {
            res = (res+kth) % i;
        }
        res = res+1;
        cout<<"Case "<<k<<": "<<res<<endl;
    }
    return 0;
}
