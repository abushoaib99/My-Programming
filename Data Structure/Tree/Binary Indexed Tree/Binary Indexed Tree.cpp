#include<bits/stdc++.h>
using namespace std;
int tree[1000], a[1000], n;
void update(int x,int idx) //n is the size of the array, x is the number to add
{
    while(idx<=n)
    {
        tree[idx]+=x;
        idx += idx & (-idx);
    }
}
int query(int idx)
{
    int sum=0;
    while(idx>0)
    {
        sum+=tree[idx];
        idx -= idx & (-idx);
    }
    return sum;
}

int main()
{
    int x,y;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        update(a[i],i);
    }
    scanf("%d%d",&x,&y);
    printf("sum of first %d elements is %d\n",n,query(n));
    printf("sum of all elements in range [%d, %d] is %d\n",x,y,query(y)-query(x-1));
    return 0;
}
