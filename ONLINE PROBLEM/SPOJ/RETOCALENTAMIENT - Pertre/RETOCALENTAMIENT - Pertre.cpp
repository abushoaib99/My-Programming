#include<bits/stdc++.h>
int main()
{
    int n,a[105];
	scanf("%d",&n);
	for(int i=1;i<=n;++i)
		scanf("%d",a+i);
    if(n==1)
        printf("-1\n");
	else if(a[n]==0)
        printf("CRECIENTE\n");
	else if(a[n]==15)
        printf("MENGUANTE\n");
	else if(a[n-1]<a[n])
	    printf("CRECIENTE\n");
	else
	    printf("MENGUANTE\n");
	return 0;
}
