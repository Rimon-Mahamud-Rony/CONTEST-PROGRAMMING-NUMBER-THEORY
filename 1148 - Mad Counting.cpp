



#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int items[100010];
    int tkase;
    cin>>tkase;
    for(int k=1; k<=tkase; k++)
    {
        int n=0;
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&items[i]);
			items[i]=items[i]+1;
		}
		sort(items+1,items+n+1);
		int sum=items[1];
		int check_value=1;
		for(int i=2;i<=n;i++)
		{
			if(items[i] != items[i-1])
			{
			    sum=sum+items[i];
                check_value=1;
			}
			else
            {
                 	if(check_value<items[i])
					check_value = check_value+1;  /* eikhane check_vale diye guna hocche kotojon ekoi team er support kore, ebong check value er man 1 kore bariye sobaike gunte hobe , guna shesh hole , tarpor abar value add hobe */
			 	else
			 	{
			 		sum=sum+items[i];
			 		check_value=1;
			 	}
            }
		}
        cout<<"Case "<<k<<": "<<sum<<endl;
    }
    return 0;
}
