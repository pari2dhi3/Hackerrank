#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int n,m,i,x,y,ind=1,flag,j;
	vector< pair<int,int> > a;
	pair<int,int> t;
	cin >> n >> m;
	vector<int> vis(n+1,0);//to store levels of the circle
	while(m--)
	{
		cin >> x >> y;
		flag=0;
		for(i=x;i<=y;i++)
		{
			if(vis[i]!=0)//checking if circle overlaps with previos one, if it does not => all vis=0
			{
				ind++;//stores the currect level, if circle overlaps then increase current level as we have to make
				flag=1;//a bigger circle
				break;
			}
		}
		for(i=x;i<=y;i++)
		{
			if(flag)//making bigger circle
			{
				if(vis[i]==0)//current i vis=0
				{
					if(vis[i-1]==(ind-1))//if just the number less than i exists in a lower level
					{
						t.first=i-1;
						t.second=i;
						a.push_back(t);
					}
					if(vis[i+1]==(ind-1))//if just the number > i exits in greater level
					{
						t.first=i;
						t.second=i+1;
						a.push_back(t);
					}
					vis[i]=ind;//update level
				}
			}
			else
				vis[i]=ind;//if dont have to make a bigger circle then just update previos ind value to all these
		}

	}
	sort(a.begin(),a.end());//sort and print
	cout << a.size() << endl;
	for(i=0;i<a.size();i++)
		cout << a[i].first << " " << a[i].second << endl;
	return 0;
}
