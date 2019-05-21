#include<iostream>
using namespace std;
 
int main()
{
    typedef long long ll;
    int tkase=0;
    ll n=0,m=0;
    ll w=0;
    cin>>tkase;
    for(int i=1; i<=tkase; i++)
    {
        cin>>w;
 
        ll temp = w;
 
        if(w % 2 != 0)
        {
            cout<<"Case "<<i<<": Impossible"<<endl;
        }
        else
        {
 
 
        while (w % 2 == 0)
        {
            w = w/2;
        }
        n = w;
        m = temp / n;
 
        cout<<"Case "<<i<<": "<<n<<" "<<m<<endl;
        }
    }
    return 0;
}
