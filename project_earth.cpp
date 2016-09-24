#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	long long int t,n,x,ans;
	cin >> n >> t;
	if(n%2==0)
	{
		x=n/2;
		if(x%2==0)
			ans=t+x;
		else
			ans=t-(x+1);
	}
	else
	{
		x=n/2;
		if(x%2==0)
			ans=t-1;
		else
			ans=t;
	}
	cout << ans << endl;
	return 0;
}

		
	
