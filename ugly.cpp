#include <bits/stdc++.h>
using namespace std;
int ugly_num(int n)
{
	smallest_ugly2=1;
	smallest_ugly3=1;
	smallest_ugly5=1;
	int i2=i3=i5=0;
	int dp[n+1];
	dp[1]=1;
	for (int i = 2; i <=n;i++)
	{
		dp[i]=min(min(smallest_ugly2*2,smallest_ugly3*),smallest_ugly5*5);
		if(dp[i]==smallest_ugly2*2)
		{
			smallest_ugly2=dp[i];
		}
		if(dp[i]==smallest_ugly3*3)
		{
			smallest_ugly3=dp[i];
		}
		if(dp[i]==smallest_ugly5*5)
		{
			smallest_ugly5=dp[i];
		}
	}
	return dp[n];

}
int main()
{
	int n;
	cin>>n;
	cout<<"The "<<n<<" th ugly number is "<<ugly_num(n);
}