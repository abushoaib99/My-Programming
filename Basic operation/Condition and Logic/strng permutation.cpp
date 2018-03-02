#include<bits/stdc++.h>
using namespace std;
void permutation(char ch[],int i,int n)
{
    if(i==n)
        printf("%s\n",ch);
    else
    {
        for(int j=i;j<n;j++)
        {
            swap(ch[j],ch[i]);
            permutation(ch,i+1,n);
            swap(ch[j],ch[i]);
        }
    }
}
int main()
{
    char ch[50];
    int siz;
    while(cin>>ch)
    {
        siz=strlen(ch);
        sort(ch,ch+siz);
        permutation(ch,0,siz);
        printf("\n");
    }
    return 0;
}
