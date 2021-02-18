#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,sum=0,*m,hr,j;
	cin>>n>>hr;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	m=max_element(a,a+n);
	if(n==hr)
		cout<<*m<<endl;
	else if(sum<=hr)
		cout<<"1"<<endl;
	else
	{	
		for(i=2;i<*m-1;i++)
		{
			sum=0;
			for(j=0;j<n;j++)
			{
				sum+=(a[j]+i-1)/i;
			}
			if(sum<=hr)
			{
				cout<<sum<<endl;
				break;
			}	
		}	
	}
	return 0;	
}
