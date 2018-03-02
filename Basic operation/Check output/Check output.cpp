#include<bits/stdc++.h>
using namespace std;
int main()
{
    FILE *fp1, *fp2;
    int ch1, ch2;
    fp1=fopen("output.txt","r");
    fp2=fopen("output1.txt", "r");
    ch1=getc(fp1);
    ch2=getc(fp2);
    while((ch1!=EOF) && (ch2!=EOF) && (ch1==ch2))
    {
        ch1=getc(fp1);
        ch2=getc(fp2);
    }

    if (ch1==ch2)
        printf("Accepted\n");
    else if (ch1!=ch2)
        printf("Wrong Ans\n");

    fclose(fp1);
    fclose(fp2);

    return (0);
}
