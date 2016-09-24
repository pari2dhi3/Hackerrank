#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	vector <int> a;
	vector <int> b;
	int n,m,q,i,x,y,z,p,query,j;
	cin >> n >> m >> q;
	for(i=0;i<n;i++)
	{	
		cin >> p;
		a.push_back(p);
	}
	for(i=1;i<=m;i++)
		b.push_back(i);
	while(q--)
	{
		cin >> x >> y >> z;
		if(x==1)
		{
			a[y-1]=z;
		}
		else if(x==2)
		{
			query=0;
			if(z<m)
			{
				query=(m-z+1)*n;
				for(j=0;i<(z-1);i++)
				{
					if((a[i]+b[j]>=y)&&(a[i]+b[j]<=z))
						query++;
				}
			}
			else
			{
				for(i=0;i<a.size();i++)
				{
					for(j=0;j<b.size();j++)
					{
						if((a[i]+b[j]>=y)&&(a[i]+b[j]<=z))
							query++;
					}
				}
			}
			cout << query << endl;
		}
		else if(x==3)
		{
			reverse(b.begin()+(y-1),b.begin()+(z-1));
		}
	}
	return 0;
}


