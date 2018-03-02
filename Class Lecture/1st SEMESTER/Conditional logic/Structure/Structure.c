#include <stdio.h>

struct student
{
    int id;
    float marks[15],avg,sum;
};

int main()
{
    int n,m,i,j;
    printf("\nNumber of Students: ");
    scanf("%d",&n);
    struct student s[n];
    printf("\n\nHow much subject: ");
    scanf("%d",&m);

    for(i=0;i<n;i++){
        s[i].sum=0;
        printf("\nEnter Student id: ");
        scanf("%d",&s[i].id);

        for(j=0;j<m;j++){
            printf("\nEnter subject marks %d: ",j+1);
            scanf("%f",&s[i].marks[j]);
            s[i].sum+=s[i].marks[j];
        }
        s[i].avg=s[i].sum/(float)m;
    }
    printf("\n\n Outcome:\n\n");
    for(i=0;i<n;i++){
        printf("\n\n______________________");
        printf("\nRoll No:%3d",s[i].id);
        printf("\n______________________\n");
        for(j=0;j<m;j++)
        printf("\nSubject %d = %4.2f\n",j+1,s[i].marks[j]);
        printf("\n\nAverage = %.2f\n", s[i].avg);
        printf("______________________\n");
        printf("______________________\n");


    }
    return 0;
}
