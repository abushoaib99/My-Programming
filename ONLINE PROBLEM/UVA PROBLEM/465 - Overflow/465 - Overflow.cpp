#include<bits/stdc++.h>
using namespace std;
main()
{
    char ch1[1000],ch2[1000];
    long double a,b;
    char c;
    while(cin>>ch1>>c>>ch2)
    {
        printf("%s %c %s\n",ch1,c,ch2);
        a=atof(ch1);
        b=atof(ch2);
        if(a>INT_MAX)
            printf("first number too big\n");
        if(b>INT_MAX)
            printf("second number too big\n");
        if(c=='+' && (a+b)>INT_MAX)
            printf("result too big\n");
        if(c=='*' && (a*b)>INT_MAX)
            printf("result too big\n");
    }
    return 0;
}
