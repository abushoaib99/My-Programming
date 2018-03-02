#include<bits/stdc++.h>
int main()
{
    time_t start,endd;
    unsigned long long sum=0;
    start=time(NULL);
    for(unsigned long long i=0;i<100000000;i++)
    {
        sum+=i;
    }
    printf("\nsum = %llu\n",sum);
    endd=time(NULL);
    printf("\nTime = %.2f\n",difftime(endd,start));
}
