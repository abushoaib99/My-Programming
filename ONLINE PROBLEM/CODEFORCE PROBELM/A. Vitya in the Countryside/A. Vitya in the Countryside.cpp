#include<bits/stdc++.h>
int main()
{
    int n,a[105];
	scanf("%d",&n);
	for(int i=1;i<=n;++i)
		scanf("%d",a+i);
	if(a[n]==0)
        printf("UP\n");
	else if(a[n]==15)
        printf("DOWN\n");
    else if(n==1)
        printf("-1\n");
	else if(a[n-1]<a[n])
	    printf("UP\n");
	else
	    printf("DOWN\n");
	return 0;
}

