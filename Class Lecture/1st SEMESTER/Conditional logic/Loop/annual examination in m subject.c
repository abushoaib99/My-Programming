#include<stdio.h>
#define first 360
#define second 240
int main()

{
    int n,m,i,j,roll_number,marks,total;
    printf("Enter number of students and subject\n");
    scanf("%d %d",&n,&m);
    printf("\n");
    for(i=1;i<=n;i++)
        {
        printf("Enter roll number: ");
        scanf("%d",roll_number);
        total=0;
        printf("\nEnter marks of %d subject for roll no %d\n",m,roll_number);
        for(j=1;j<=m;j++)
            {
            scanf("%d",&marks);
            total=total+marks;
        }
        printf("Total marks = %d",total);
        if(total>=first)
            printf("(First Division)\n\n");
        else if(total>=second)
            printf("(Second Division)\n\n");
        else
            printf("***Fail***"\n\n);
    }
}
