#include <bits/stdc++.h>
using namespace std;

main()
{
    int n,m,k;
    char ch;
    bool b=true;
	scanf("%d%d",&n,&m);
	k=n*m;
	while(k--)
	{
	    scanf("\n%c",&ch);
        if(ch!='B' && ch!='W' && ch!='G')
        {
            b=false;
        }
	}
	b==true ? printf("#Black&White\n") : printf("#Color\n");
	return 0;
}
