#include<stdio.h>
struct student
{
    int id;
    char name[80][20];
    float sub[10],avg;
};

int main()
{
    struct student s[80];
    int i,j,max,loc;
    float sum=0,n;
    printf("Enter how many Student: ");
    scanf("%f",&n);
    for(i=0;i<n;i++){

            scanf("%c",s[i].name);
        for(j=0;j<n;j++){

            scanf("%f",&s[i].sub[j]);
            sum=sum+s[i].sub[j];
        }
        s[i].avg=sum/n;
    }
    for(i=0;i<n;i++){
        printf("\n%s got avg of exam marks: %f\n",s[i].name,s[i].avg);
    }
}
