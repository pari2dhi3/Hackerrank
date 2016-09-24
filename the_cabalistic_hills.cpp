#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int t,n,m,i,flag,j,a,b,count;
	vector<vector<int> > p;
	cin >> t;
	while(t--)
	{
		cin >> n >> m;
		for(i=0;i<n;i++)
			p.push_back(i);
		for(i=0;i<m;i++)
		{
			cin >> a >> b;
			p[a-1].push_back(b-1);
		}
		int visited[n];
		i=0;
		count=0;
		flag=0;
		while(count!=n)
		{
			if(p[i].size()!=1)
			{
				j=p[i][1];
				p[i].erase(p[i].begin()+1);
				if(p[i].size()==1)
				{
					visited[i]=1;
					count++;
					if(count==n)
					{
						flag=1;
						break;
					}
				}
				i=j;
			}
			else if((p[i].size()==1)&&(flag!=1))
			{
				cout << "Danger!! Lucifer will trap you\n";
				break;
			}
		}
		cout << "Go on get the Magical Lamp\n";
	}
	return 0;
}






