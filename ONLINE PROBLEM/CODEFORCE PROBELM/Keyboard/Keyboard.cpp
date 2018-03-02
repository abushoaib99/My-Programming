#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    cin>>s1>>s;
    for(int i=0;i<s.size();++i)
    {
        if(s1=="R")
        {
        if(s[i]=='s')
            printf("a");
        else if(s[i]=='d')
            printf("s");
        else if(s[i]=='f')
            printf("d");
        else if(s[i]=='g')
            printf("f");
        else if(s[i]=='h')
            printf("g");
        else if(s[i]=='j')
            printf("h");
        else if(s[i]=='k')
            printf("j");
        else if(s[i]=='l')
            printf("k");
        else if(s[i]==';')
            printf("l");
        else if(s[i]=='w')
            printf("q");
        else if(s[i]=='e')
            printf("w");
        else if(s[i]=='r')
            printf("e");
        else if(s[i]=='t')
            printf("r");
        else if(s[i]=='y')
            printf("t");
        else if(s[i]=='u')
            printf("y");
        else if(s[i]=='i')
            printf("u");
        else if(s[i]=='o')
            printf("i");
        else if(s[i]=='p')
            printf("o");
        else if(s[i]=='x')
            printf("z");
        else if(s[i]=='c')
            printf("x");
        else if(s[i]=='v')
            printf("c");
        else if(s[i]=='b')
            printf("v");
        else if(s[i]=='n')
            printf("b");
        else if(s[i]=='m')
            printf("n");
        else if(s[i]==',')
            printf("m");
        else if(s[i]=='.')
            printf(",");
        else if(s[i]=='/')
            printf(".");
        }
        else if(s1=="L")
        {
        if(s[i]=='a')
            printf("s");
        else if(s[i]=='s')
            printf("d");
        else if(s[i]=='d')
            printf("f");
        else if(s[i]=='f')
            printf("g");
        else if(s[i]=='g')
            printf("h");
        else if(s[i]=='h')
            printf("j");
        else if(s[i]=='j')
            printf("k");
        else if(s[i]=='k')
            printf("l");
        else if(s[i]=='l')
            printf(";");
        else if(s[i]=='w')
            printf("e");
        else if(s[i]=='e')
            printf("r");
        else if(s[i]=='r')
            printf("t");
        else if(s[i]=='t')
            printf("y");
        else if(s[i]=='y')
            printf("u");
        else if(s[i]=='u')
            printf("i");
        else if(s[i]=='i')
            printf("o");
        else if(s[i]=='o')
            printf("p");
        else if(s[i]=='q')
            printf("w");
        else if(s[i]=='x')
            printf("c");
        else if(s[i]=='c')
            printf("v");
        else if(s[i]=='v')
            printf("b");
        else if(s[i]=='b')
            printf("n");
        else if(s[i]=='n')
            printf("m");
        else if(s[i]=='m')
            printf(",");
        else if(s[i]==',')
            printf(".");
        else if(s[i]=='.')
            printf("/");
        else if(s[i]=='z')
            printf("x");
        }
    }
    return 0;
}
