#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int n,s,i,count=0,flag=0;
	cin >> n >> s;
	int a[n];
	for(i=0;i<n;i++)
		cin >> a[i];
	for(i=0;i<n;i++)
	{
		if(a[i]<=s)
			count++;
		else if(a[i]>s && flag==0)
		{
			count++;
			flag=1;
		}
		else if(a[i]>s && flag==1)
			break;
	}
	if(flag==1)
		cout << count-1 << endl;
	else
		cout << count << endl;
	return 0;
}
