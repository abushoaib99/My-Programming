#include<stdio.h>
int main()

{
    long  Hasmot_s,opponent_s;
    while(scanf("%ld %ld",&Hasmot_s,&opponent_s)!=EOF){
            if(Hasmot_s>opponent_s)
        printf("%ld\n",Hasmot_s-opponent_s);
        else
            printf("%ld\n",opponent_s-Hasmot_s);
    }
    return 0;
}
