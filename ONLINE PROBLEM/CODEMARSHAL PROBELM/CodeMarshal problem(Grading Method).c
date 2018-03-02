#include<stdio.h>
int main()

{
    int a,i,test;
    scanf("%d",&test);
    for(i=1;i<=test;i++){
        scanf("%d",&a);
        if(a>=90 && a<=100)
            printf("Student %d: A+\n",i);
        else if(a>=80 && a<90)
            printf("Student %d: A\n",i);
        else if(a>=70 && a<80)
            printf("Student %d: A-\n",i);
        else if(a>=60 && a<70)
            printf("Student %d: B+\n",i);
        else if(a>=50 && a<60)
            printf("Student %d: B-\n",i);
        else if(a>=40 && a<50)
            printf("Student %d: C\n",i);
        else if(a>=35 && a<40)
            printf("Student %d: D\n",i);
        else if(a>=0 && a<35)
            printf("Student %d: F\n",i);
    }
    return 0;
}
