#include<bits/stdc++.h>
int main()
{
    std::string a;
    std::cin>>a;
    int u=count_if(a.begin(),a.end(),isupper);
    transform(a.begin(),a.end(),a.begin(),u>a.size()-u?toupper:tolower);
    std::cout<<a;
    return 0;
}

