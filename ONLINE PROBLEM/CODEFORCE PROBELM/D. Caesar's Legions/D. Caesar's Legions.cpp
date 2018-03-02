#include<bits/stdc++.h>
using namespace std;
#define mod 100000000
int n1,n2,k1,k2;
int dp[101][101][11][11];
int call(int x,int y,int s1, int s2)
{
	if(x>n1 || y>n2 || s1>k1 || s2>k2)
		return 0;
	if(x==n1 && y==n2)
		return 1;
	if(dp[x][y][s1][s2]!=-1)
		return dp[x][y][s1][s2];

	return dp[x][y][s1][s2]=(call(x+1,y,s1+1,0)+call(x,y+1,0,s2+1))%mod;


}
int main()
{
    memset(dp,-1,sizeof dp);
	scanf("%d%d%d%d",&n1,&n2,&k1,&k2);
	printf("%d\n",call(0,0,0,0));
	return 0;
}
