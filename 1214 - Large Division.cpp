#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    typedef long long ll;
    ll tkase;
    cin >> tkase;
    ll i, j,strlen, b, decim;
    string a;

    for (i=1; i<=tkase; i++) {
        cin>>a>>b;
        decim= 0;
        if (a[0]=='-') j=1;
        else j=0;
        strlen = a.length();
        for (; j<strlen; j++) {


            decim = decim*10 + (a[j]-'0');
            decim = decim%b;
        }


        if (decim == 0)
        {
            cout << "Case " << i << ": "<< "divisible" << endl;
        }
        else
            cout << "Case " << i << ": "<< "not divisible" << endl;
    }
    return 0;
}
