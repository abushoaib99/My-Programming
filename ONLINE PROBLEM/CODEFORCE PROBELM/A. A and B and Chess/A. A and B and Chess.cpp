#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int Q,R,B,N,P,K,q,r,b,n,p,k;
    int sum1,sum2;
    int c1,c2,c3,c4,c5;
    int c6,c7,c8,c9,c10;
    c1=c2=c3=c4=c5=c6=c7=c8=c9=c10=0;
    vector<string>v;
    for(int i=0;i<8;i++)
    {
        cin>>s;
        v.push_back(s);
        Q=count(v[i].begin(),v[i].end(),'Q');
        R=count(v[i].begin(),v[i].end(),'R');
        B=count(v[i].begin(),v[i].end(),'B');
        N=count(v[i].begin(),v[i].end(),'N');
        P=count(v[i].begin(),v[i].end(),'P');
        q=count(v[i].begin(),v[i].end(),'q');
        r=count(v[i].begin(),v[i].end(),'r');
        b=count(v[i].begin(),v[i].end(),'b');
        n=count(v[i].begin(),v[i].end(),'n');
        p=count(v[i].begin(),v[i].end(),'p');
        if(Q>0)
        {
            c1=c1+(9*Q);
        }
        if(R>0)
        {
            c2=c2+(5*R);
        }
        if(B>0)
        {
            c3=c3+(3*B);
        }
        if(N>0)
        {
            c4=c4+(3*N);
        }
        if(P>0)
        {
            c5=c5+(1*P);
        }
        if(q>0)
        {
            c6+=(9*q);
        }
        if(r>0)
        {
            c7=c7+(5*r);
        }
        if(b>0)
        {
            c8=c8+(3*b);
        }
        if(n>0)
        {
            c9=c9+(3*n);
        }
        if(p>0)
        {
            c10=c10+(1*p);
        }
    }
    sum1=c1+c2+c3+c4+c5;
    sum2=c6+c7+c8+c9+c10;
    if(sum1>sum2)
        printf("White\n");
    else if(sum2>sum1)
        printf("Black\n");
    else
        printf("Draw\n");

    return 0;

}
