#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	vector <int> p(20,0);
	int i, sum, n, t, diff1, diff2, a;
	cin >> t;
	while(t--)
	{
		cin >> n;
		for(i=0;i<n;i++)
			cin >> p[i];
		if(n%2==0)
		{
			for(i=1;i<(n-1);i++)
			{
				if((p[i-1]%2==0)&&(p[i+1]%2==0))
				{
					diff1=abs(p[i]-p[n-1-i]);
					a=(p[i-1]+p[i+1])/2;
					diff2=abs(p[n-1-i]-a);
					if(diff2>diff1)
					{
						p[i]=a;
					}
				}
			}
		}
		else if(n%2!=0)
		{
			for(i=1;i<(n/2);i++)
			{
				if((p[i-1]%2==0)&&(p[i+1]%2==0))
				{
					diff1=abs(p[i]-p[n-1-i]);
					a=(p[i-1]+p[i+1])/2;
					diff2=abs(p[n-1-i]-a);
					if(diff2>diff1)
					{
						p[i]=a;
					}
				}
			}
			for(i=((n/2)+1);i<(n-1);i++)
			{
				if((p[i-1]%2==0)&&(p[i+1]%2==0))
				{
					diff1=abs(p[i]-p[n-1-i]);
					a=(p[i-1]+p[i+1])/2;
					diff2=abs(p[n-1-i]-a);
					if(diff2>diff1)
					{
						p[i]=a;
					}
				}
			}
		}
		sum=0;
		for(i=0;i<(n/2);i++)
		{
			sum=sum+abs(p[i]-p[n-1-i]);
		}
		cout << sum << endl;
	}
	return 0;
}
