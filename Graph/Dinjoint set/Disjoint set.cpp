#include<bits/stdc++.h>
using namespace std;
#define N 500
char s[4];
int parentArray[N];
int rankArray[N];
int disjointSetCount;

void MakeSet(int n)
{
    for(int i=0;i<n;++i){
        parentArray[i]=i;
        rankArray[i]=0;
    }
    disjointSetCount=n;
}

int FindSet(int x)
{
    if( x !=parentArray[x] ){
        parentArray[x]=FindSet( parentArray[x] );
    }
    return parentArray[x];
}
bool SameSet(int x,int y)
{
    return FindSet(x)==FindSet(y);
}

void Link(int x,int y)
{
    if( !SameSet(x, y) ){
        if( rankArray[x]>rankArray[y] )
            parentArray[y]=x;

        else{
            parentArray[x]=y;
            if(rankArray[x]==rankArray[y]){
                rankArray[y]=rankArray[y]+1;
                }
        }
        --disjointSetCount;
    }
}

void Union(int x,int y)
{
    Link(FindSet(x),FindSet(y) );
}

int main()
{
    int n;
    int i,j;
    scanf("%d\n\n",&n);
    bool blank=false;
    while(n--)
    {
        char c=getchar();
        getchar();
        MakeSet(c-'A'+1);
        while(gets(s)&&strlen(s))
            Union( s[0]-'A',s[1]-'A');

        if(blank)
            putchar('\n');
        blank = true;
        printf("%d\n", disjointSetCount);
    }
    return 0;
}

