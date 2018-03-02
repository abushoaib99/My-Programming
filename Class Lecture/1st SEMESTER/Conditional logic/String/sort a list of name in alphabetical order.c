#include<stdio.h>
#include<string.h>
int main()

{
    char string[5][20],name[20];
    int i,j,n;
    printf("Enter Number of Item: ");
    scanf("%d",&n);
    printf("\nEnter Name of %d Item:\n\n",n);
    for(i=0;i<n;i++)
        gets(string[i]);


    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(strcmp(string[j],string[j+1])>0){
                strcpy(name,string[j]);
                strcpy(string[j],string[j+1]);
                strcpy(string[j+1],name);
            }
        }
    }
    printf("\nCharacter list \n\n");
    for(i=0;i<=n;i++)
        printf("%s\n",string[i]);
        return 0;

}

