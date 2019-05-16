#include<iostream>
using namespace std;
 
int main()
{
    int tkase=0 , n=0;
    string name;
    cin>>tkase;
    for(int i=1; i<=tkase; i++)
    {
        cin>>n>>name;
        if(name=="Alice")
        {
            if(n%3==1)
            cout<<"Case "<<i<<": Bob"<<endl;
 
            else
            cout<<"Case "<<i<<": Alice"<<endl;
        }
        else if(name == "Bob")
        {
            if(n%3==0)
            cout<<"Case "<<i<<": Alice"<<endl;
            else
            cout<<"Case "<<i<<": Bob"<<endl;
        }
    }
    return 0;
}
