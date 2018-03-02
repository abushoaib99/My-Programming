#include<bits/stdc++.h>
#define mx 100001
using namespace std;
struct info
{
    long long prop, sum;
}tree[mx * 3]; //sum ছাড়াও নিচে অতিরিক্ত কত যোগ হচ্ছে সেটা রাখবো prop এ

void update(long long node, long long b, long long e, long long i, long long j, long long x)
{
    if (i > e || j < b)
        return;
    if (b >= i && e <= j) //নোডের রেঞ্জ আপডেটের রেঞ্জের ভিতরে
    {
        tree[node].sum += ((e - b + 1) * x); //নিচে নোড আছে e-b+1 টি, তাই e-b+1 বার x যোগ হবে এই রেঞ্জে
        tree[node].prop += x; //নিচের নোডগুলোর সাথে x যোগ হবে
        return;
    }

    long long Left = node * 2;
    long long Right = (node * 2) + 1;
    long long mid = (b + e) / 2;
    update(Left, b, mid, i, j, x);
    update(Right, mid + 1, e, i, j, x);
    tree[node].sum = tree[Left].sum + tree[Right].sum + (e - b + 1) * tree[node].prop;
    //উপরে উঠার সময় পথের নোডগুলো আপডেট হবে
    //বাম আর ডান পাশের সাম ছাড়াও যোগ হবে নিচে অতিরিক্ত যোগ হওয়া মান
}

long long query(long long node, long long b, long long e, long long i,long long j, long long carry = 0)
{
    if (i > e || j < b)
        return 0;
    if (b >= i and e <= j)
        return tree[node].sum + carry * (e - b + 1);//সাম এর সাথে যোগ হবে সেই রেঞ্জের সাথে অতিরিক্ত যত যোগ করতে বলেছে সেটা

    long long Left = node << 1;
    long long Right = (node << 1) + 1;
    long long mid = (b + e) >> 1;
    long long p1 = query(Left, b, mid, i, j, carry + tree[node].prop);//প্রপাগেট ভ্যালু বয়ে নিয়ে যাচ্ছে carry ভ্যারিয়েবল
    long long p2 = query(Right, mid + 1, e, i, j, carry + tree[node].prop);
    return p1 + p2;
}

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        long long n,a;
        scanf("%lld%lld",&n,&a);
        for(long long j=0;j<a;j++)
        {
            long long num;
            scanf("%lld",&num);
            if(num==0)
            {
                long long p,q,v;
                scanf("%lld%lld%lld",&p,&q,&v);
                update(1,0,n-1,p-1,q-1,v);
            }
            else
            {
                long long p,q;
                scanf("%lld%lld",&p,&q);
                printf("%lld\n",query(1,0,n-1,p-1, q-1));
            }
        }
    }
    return 0;
}

