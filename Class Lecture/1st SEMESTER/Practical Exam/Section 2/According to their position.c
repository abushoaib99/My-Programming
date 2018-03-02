#include<stdio.h>
struct student
{
    int id,sub[3];

};

int main()

{
    struct student s[100];
    int i,j,n,temp,s1[100],loc;
    printf("How much student: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
            s1[i]=0;
            printf("\nEnter ID: ");
            scanf("%d",&s[i].id);
            printf("\nEnter marks of 3 sub: ");
            for(j=0;j<3;j++){

        scanf("%d",&s[i].sub[j]);
        s1[i]=s1[i]+s[i].sub[j];
        }
    }
        for(i=0;i<n;i++){
                for(j=0;j<n-i-1;j++){
                    if(s1[j]<s1[j+1]){
               temp=s1[j];
               s1[j]=s1[j+1];
               s1[j+1]=temp;
                }

            }
        }

        for(i=0;i<n;i++){
            printf("\nID NO: %d mark: %d\n",s[i].id,s1[i]);
        }

}
