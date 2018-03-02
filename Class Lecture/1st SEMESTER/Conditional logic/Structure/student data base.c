#include<stdio.h>
struct student
{
    int id;
    char name[80][20];
    float HSC;
    int age;
    char gender[80][6];
    long long contact;
};

int main()
{
    struct student s[80];
    int i,loc,n;
    float max;
    printf("Enter how many Student: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n\nEnter ID: ");
        scanf("%d",&s[i].id);
         printf("\nEnter Name: ");
        scanf("%s",s[i].name);
         printf("\nEnter GPA: ");
        scanf("%f",&s[i].HSC);
         if(s[0].HSC<s[i].HSC){
                max=s[i].HSC;
                loc=i;
            }
         printf("\nEnter Age: ");
        scanf("%d",&s[i].age);
         printf("\nEnter Gender: ");
        scanf("%s",s[i].gender);
         printf("\nEnter Contact: ");
        scanf("%lld",&s[i].contact);
    }
    for(i=0;i<n;i++){
    printf("\n\n\n");
    printf("\n\nID: %d\n\nName: %s\n\nGPA: %.2f\n\nAge: %d\n\nGender: %s\n\nContact: %lld\n\n",s[i].id,s[i].name,s[i].HSC,s[i].age,s[i].gender,s[i].contact);
    }
    printf("\n\n%s got highest GPA: %.2f\n\n",s[loc].name,max);


}
