#include<stdio.h>
int main()

{
    int marks[7]={13,87,81,23,92,64,71};
    int max=marks[0];
    int a;
    for(a=1;a<7;a++){
        if(max < marks[a]){
            max=marks[a];
        }
    }
    printf("\n%d\n",max);
    return 0;
}
