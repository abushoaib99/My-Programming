#include<stdio.h>
int main()
{
    long long int b,i,s4;
    int s2,e,n;
    char day[10],day1[8][10]={"FRIDAY","SATURDAY","SUNDAY","MONDAY","TUESDAY","WEDNESDAY","THURSDAY"};
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %lld %s",&e,&b,day);
        s2=e-((e/7)*7);
        s4=b-((b/7)*7);
        if(s2==0 && s4==0 && strcmp(day,"FRIDAY")==0)
            printf("FRIDAY\n");
        else if(s2==0 && s4==0 && strcmp(day,"SATURDAY")==0)
            printf("SATURDAY\n");
        else if(s2==0 && s4==0 && strcmp(day,"SUNDAY")==0)
            printf("SUNDAY\n");
        else if(s2==0 && s4==0 && strcmp(day,"MONDAY")==0)
            printf("MONDAY\n");
        else if(s2==0 && s4==0 && strcmp(day,"TUESDAY")==0)
            printf("TUESDAY\n");
        else if(s2==0 && s4==0 && strcmp(day,"WEDNESDAY")==0)
            printf("WEDNESDAY\n");
        else if(s2==0 && s4==0 && strcmp(day,"THURSDAY")==0)
            printf("THURSDAY\n");


        else if(s2==0 && s4==1 && strcmp(day,"FRIDAY")==0)
            printf("SATURDAY\n");
        else if(s2==0 && s4==1 && strcmp(day,"SATURDAY")==0)
            printf("SUNDAY\n");
        else if(s2==0 && s4==1 && strcmp(day,"SUNDAY")==0)
            printf("MONDAY\n");
        else if(s2==0 && s4==1 && strcmp(day,"MONDAY")==0)
            printf("TUESDAY\n");
        else if(s2==0 && s4==1 && strcmp(day,"TUESDAY")==0)
            printf("WEDNESDAY\n");
        else if(s2==0 && s4==1 && strcmp(day,"WEDNESDAY")==0)
            printf("THURSDAY\n");
        else if(s2==0 && s4==1 && strcmp(day,"THURSDAY")==0)
            printf("FIRDAY\n");


        else if(s2==0 && s4==2 && strcmp(day,"FRIDAY")==0)
            printf("SUNDAY\n");
        else if(s2==0 && s4==2 && strcmp(day,"SATURDAY")==0)
            printf("MONDAY\n");
        else if(s2==0 && s4==2 && strcmp(day,"SUNDAY")==0)
            printf("TUESDAY\n");
        else if(s2==0 && s4==2 && strcmp(day,"MONDAY")==0)
            printf("WEDNESDAY\n");
        else if(s2==0 && s4==2 && strcmp(day,"TUESDAY")==0)
            printf("THURSDAY\n");
        else if(s2==0 && s4==2 && strcmp(day,"WEDNESDAY")==0)
            printf("FRIDAY\n");
        else if(s2==0 && s4==2 && strcmp(day,"THURSDAY")==0)
            printf("SATURDAY\n");///////


        else if(s2==0 && s4==3 && strcmp(day,"FRIDAY")==0)
            printf("MONDAY\n");
        else if(s2==0 && s4==3 && strcmp(day,"SATURDAY")==0)
            printf("TUESDAY\n");
        else if(s2==0 && s4==3 && strcmp(day,"SUNDAY")==0)
            printf("WEDNESDAY\n");
        else if(s2==0 && s4==3 && strcmp(day,"MONDAY")==0)
            printf("THURSDAY\n");
        else if(s2==0 && s4==3 && strcmp(day,"TUESDAY")==0)
            printf("FRIDAY\n");
        else if(s2==0 && s4==3 && strcmp(day,"WEDNESDAY")==0)
            printf("SATURDAY\n");
        else if(s2==0 && s4==3 && strcmp(day,"THURSDAY")==0)
            printf("SUNDAY\n");//////////////


        else if(s2==0 && s4==4 && strcmp(day,"FRIDAY")==0)
            printf("TUESDAY\n");
        else if(s2==0 && s4==4 && strcmp(day,"SATURDAY")==0)
            printf("WEDNESDAY\n");
        else if(s2==0 && s4==4 && strcmp(day,"SUNDAY")==0)
            printf("THURSDAY\n");
        else if(s2==0 && s4==4 && strcmp(day,"MONDAY")==0)
            printf("FRIDAY\n");
        else if(s2==0 && s4==4 && strcmp(day,"TUESDAY")==0)
            printf("SATURDAY\n");
        else if(s2==0 && s4==4 && strcmp(day,"WEDNESDAY")==0)
            printf("SUNDAY\n");
        else if(s2==0 && s4==4 && strcmp(day,"THURSDAY")==0)
            printf("MONDAY\n");//////////////


        else if(s2==0 && s4==5 && strcmp(day,"FRIDAY")==0)
            printf("WEDNESDAY\n");
        else if(s2==0 && s4==5 && strcmp(day,"SATURDAY")==0)
            printf("THURSDAY\n");
        else if(s2==0 && s4==5 && strcmp(day,"SUNDAY")==0)
            printf("FRIDAY\n");
        else if(s2==0 && s4==5 && strcmp(day,"MONDAY")==0)
            printf("SATURDAY\n");
        else if(s2==0 && s4==5 && strcmp(day,"TUESDAY")==0)
            printf("SUNDAY\n");
        else if(s2==0 && s4==5 && strcmp(day,"WEDNESDAY")==0)
            printf("MONDAY\n");
        else if(s2==0 && s4==5 && strcmp(day,"THURSDAY")==0)
            printf("TUESDAY\n");//////////////


        else if(s2==0 && s4==6 && strcmp(day,"FRIDAY")==0)
            printf("THURSDAY\n");
        else if(s2==0 && s4==6 && strcmp(day,"SATURDAY")==0)
            printf("FRIDAY\n");
        else if(s2==0 && s4==6 && strcmp(day,"SUNDAY")==0)
            printf("SATURDAY\n");
        else if(s2==0 && s4==6 && strcmp(day,"MONDAY")==0)
            printf("SUNDAY\n");
        else if(s2==0 && s4==6 && strcmp(day,"TUESDAY")==0)
            printf("MONDAY\n");
        else if(s2==0 && s4==6 && strcmp(day,"WEDNESDAY")==0)
            printf("TUESDAY\n");
        else if(s2==0 && s4==6 && strcmp(day,"THURSDAY")==0)
            printf("WEDNESDAY\n");////////////////








        else if(s2==1 && s4==0 && strcmp(day,"FRIDAY")==0)
            printf("THURSDAY\n");
        else if(s2==1 && s4==0 && strcmp(day,"SATURDAY")==0)
            printf("FRIDAY\n");
        else if(s2==1 && s4==0 && strcmp(day,"SUNDAY")==0)
            printf("SATURDAY\n");
        else if(s2==1 && s4==0 && strcmp(day,"MONDAY")==0)
            printf("SUNDAY\n");
        else if(s2==1 && s4==0 && strcmp(day,"TUESDAY")==0)
            printf("MONDAY\n");
        else if(s2==1 && s4==0 && strcmp(day,"WEDNESDAY")==0)
            printf("TUESDAY\n");
        else if(s2==1 && s4==0 && strcmp(day,"THURSDAY")==0)
            printf("WEDNESDAY\n");////////////////


        else if(s2==1 && s4==1 && strcmp(day,"FRIDAY")==0)
            printf("FRIDAY\n");
        else if(s2==1 && s4==1 && strcmp(day,"SATURDAY")==0)
            printf("SATURDAY\n");
        else if(s2==1 && s4==1 && strcmp(day,"SUNDAY")==0)
            printf("SUNDAY\n");
        else if(s2==1 && s4==1 && strcmp(day,"MONDAY")==0)
            printf("MONDAY\n");
        else if(s2==1 && s4==1 && strcmp(day,"TUESDAY")==0)
            printf("TUESDAY\n");
        else if(s2==1 && s4==1 && strcmp(day,"WEDNESDAY")==0)
            printf("WEDNESDAY\n");
        else if(s2==1 && s4==1 && strcmp(day,"THURSDAY")==0)
            printf("THURSDAY\n");////////////


        else if(s2==1 && s4==2 && strcmp(day,"FRIDAY")==0)
            printf("SATURDAY\n");
        else if(s2==1 && s4==2 && strcmp(day,"SATURDAY")==0)
            printf("SUNDAY\n");
        else if(s2==1 && s4==2 && strcmp(day,"SUNDAY")==0)
            printf("MONDAY\n");
        else if(s2==1 && s4==2 && strcmp(day,"MONDAY")==0)
            printf("TUESDAY\n");
        else if(s2==1 && s4==2 && strcmp(day,"TUESDAY")==0)
            printf("WEDNESDAY\n");
        else if(s2==1 && s4==2 && strcmp(day,"WEDNESDAY")==0)
            printf("THURSDAY\n");
        else if(s2==1 && s4==2 && strcmp(day,"THURSDAY")==0)
            printf("FIRDAY\n");/////////////


        else if(s2==1 && s4==3 && strcmp(day,"FRIDAY")==0)
            printf("SUNDAY\n");
        else if(s2==1 && s4==3 && strcmp(day,"SATURDAY")==0)
            printf("MONDAY\n");
        else if(s2==1 && s4==3 && strcmp(day,"SUNDAY")==0)
            printf("TUEDSDAY\n");
        else if(s2==1 && s4==3 && strcmp(day,"MONDAY")==0)
            printf("WEDNESDAY\n");
        else if(s2==1 && s4==3 && strcmp(day,"TUESDAY")==0)
            printf("THRUSDAY\n");
        else if(s2==1 && s4==3 && strcmp(day,"WEDNESDAY")==0)
            printf("FIRDAY\n");
        else if(s2==1 && s4==3 && strcmp(day,"THURSDAY")==0)
            printf("SATURDAY\n");//////////////


        else if(s2==1 && s4==4 && strcmp(day,"FRIDAY")==0)
            printf("MONDAY\n");
        else if(s2==1 && s4==4 && strcmp(day,"SATURDAY")==0)
            printf("TUESDAY\n");
        else if(s2==1 && s4==4 && strcmp(day,"SUNDAY")==0)
            printf("WEDNESDAY\n");
        else if(s2==1 && s4==4 && strcmp(day,"MONDAY")==0)
            printf("THURSDAY\n");
        else if(s2==1 && s4==4 && strcmp(day,"TUESDAY")==0)
            printf("FRIDAY\n");
        else if(s2==1 && s4==4 && strcmp(day,"WEDNESDAY")==0)
            printf("SATURDAY\n");
        else if(s2==1 && s4==4 && strcmp(day,"THURSDAY")==0)
            printf("SUNDAY\n");//////////////


        else if(s2==1 && s4==5 && strcmp(day,"FRIDAY")==0)
            printf("TUESDAY\n");
        else if(s2==1 && s4==5 && strcmp(day,"SATURDAY")==0)
            printf("WEDNESDAY\n");
        else if(s2==1 && s4==5 && strcmp(day,"SUNDAY")==0)
            printf("THRUSDAY\n");
        else if(s2==1 && s4==5 && strcmp(day,"MONDAY")==0)
            printf("FRIDAY\n");
        else if(s2==1 && s4==5 && strcmp(day,"TUESDAY")==0)
            printf("SATURDAY\n");
        else if(s2==1 && s4==5 && strcmp(day,"WEDNESDAY")==0)
            printf("SUNDAY\n");
        else if(s2==1 && s4==5 && strcmp(day,"THURSDAY")==0)
            printf("MONDAY\n");//////////////


        else if(s2==1 && s4==6 && strcmp(day,"FRIDAY")==0)
            printf("WEDNESDAY\n");
        else if(s2==1 && s4==6 && strcmp(day,"SATURDAY")==0)
            printf("THURSDAY\n");
        else if(s2==1 && s4==6 && strcmp(day,"SUNDAY")==0)
            printf("FRIDAY\n");
        else if(s2==1 && s4==6 && strcmp(day,"MONDAY")==0)
            printf("SATURDAY\n");
        else if(s2==1 && s4==6 && strcmp(day,"TUESDAY")==0)
            printf("SUNDAY\n");
        else if(s2==1 && s4==6 && strcmp(day,"WEDNESDAY")==0)
            printf("MONDAY\n");
        else if(s2==1 && s4==6 && strcmp(day,"THURSDAY")==0)
            printf("TUESDAY\n");////////////////







        else if(s2==2 && s4==0 && strcmp(day,"FRIDAY")==0)
            printf("WEDNESDAY\n");
        else if(s2==2 && s4==0 && strcmp(day,"SATURDAY")==0)
            printf("THURSDAY\n");
        else if(s2==2 && s4==0 && strcmp(day,"SUNDAY")==0)
            printf("FRIDAY\n");
        else if(s2==2 && s4==0 && strcmp(day,"MONDAY")==0)
            printf("SATURDAY\n");
        else if(s2==2 && s4==0 && strcmp(day,"TUESDAY")==0)
            printf("SUNDAY\n");
        else if(s2==2 && s4==0 && strcmp(day,"WEDNESDAY")==0)
            printf("MONDAY\n");
        else if(s2==2 && s4==0 && strcmp(day,"THURSDAY")==0)
            printf("TUESDAY\n");//////////////


        else if(s2==2 && s4==1 && strcmp(day,"FRIDAY")==0)
            printf("THURSDAY\n");
        else if(s2==2 && s4==1 && strcmp(day,"SATURDAY")==0)
            printf("FRIDAY\n");
        else if(s2==2 && s4==1 && strcmp(day,"SUNDAY")==0)
            printf("SATURDAY\n");
        else if(s2==2 && s4==1 && strcmp(day,"MONDAY")==0)
            printf("SUNDAY\n");
        else if(s2==2 && s4==1 && strcmp(day,"TUESDAY")==0)
            printf("MONDAY\n");
        else if(s2==2 && s4==1 && strcmp(day,"WEDNESDAY")==0)
            printf("TUESDAY\n");
        else if(s2==2 && s4==1 && strcmp(day,"THURSDAY")==0)
            printf("WEDNESDAY\n");////////////////


        else if(s2==2 && s4==2 && strcmp(day,"FRIDAY")==0)
            printf("FRIDAY\n");
        else if(s2==2 && s4==2 && strcmp(day,"SATURDAY")==0)
            printf("SATURDAY\n");
        else if(s2==2 && s4==2 && strcmp(day,"SUNDAY")==0)
            printf("SUNDAY\n");
        else if(s2==2 && s4==2 && strcmp(day,"MONDAY")==0)
            printf("MONDAY\n");
        else if(s2==2 && s4==2 && strcmp(day,"TUESDAY")==0)
            printf("TUESDAY\n");
        else if(s2==2 && s4==2 && strcmp(day,"WEDNESDAY")==0)
            printf("WEDNESDAY\n");
        else if(s2==2 && s4==2 && strcmp(day,"THURSDAY")==0)
            printf("THURSDAY\n");///////////////


        else if(s2==2 && s4==3 && strcmp(day,"FRIDAY")==0)
            printf("SATURDAY\n");
        else if(s2==2 && s4==3 && strcmp(day,"SATURDAY")==0)
            printf("SUNDAY\n");
        else if(s2==2 && s4==3 && strcmp(day,"SUNDAY")==0)
            printf("MONDAY\n");
        else if(s2==2 && s4==3 && strcmp(day,"MONDAY")==0)
            printf("TUESDAY\n");
        else if(s2==2 && s4==3 && strcmp(day,"TUESDAY")==0)
            printf("WEDNESDAY\n");
        else if(s2==2 && s4==3 && strcmp(day,"WEDNESDAY")==0)
            printf("THURSDAY\n");
        else if(s2==2 && s4==3 && strcmp(day,"THURSDAY")==0)
            printf("FIRDAY\n");//////////////////


        else if(s2==2 && s4==4 && strcmp(day,"FRIDAY")==0)
            printf("SUNDAY\n");
        else if(s2==2 && s4==4 && strcmp(day,"SATURDAY")==0)
            printf("MONDAY\n");
        else if(s2==2 && s4==4 && strcmp(day,"SUNDAY")==0)
            printf("TUESDAY\n");
        else if(s2==2 && s4==4 && strcmp(day,"MONDAY")==0)
            printf("WEDNESDAY\n");
        else if(s2==2 && s4==4 && strcmp(day,"TUESDAY")==0)
            printf("THRUSDAY\n");
        else if(s2==2 && s4==4 && strcmp(day,"WEDNESDAY")==0)
            printf("FIRDAY\n");
        else if(s2==2 && s4==4 && strcmp(day,"THURSDAY")==0)
            printf("SATURDAY\n");//////////////


        else if(s2==2 && s4==5 && strcmp(day,"FRIDAY")==0)
            printf("MONDAY\n");
        else if(s2==2 && s4==5 && strcmp(day,"SATURDAY")==0)
            printf("TUESDAY\n");
        else if(s2==2 && s4==5 && strcmp(day,"SUNDAY")==0)
            printf("WEDNESDAY\n");
        else if(s2==2 && s4==5 && strcmp(day,"MONDAY")==0)
            printf("THURSDAY\n");
        else if(s2==2 && s4==5 && strcmp(day,"TUESDAY")==0)
            printf("FRIDAY\n");
        else if(s2==2 && s4==5 && strcmp(day,"WEDNESDAY")==0)
            printf("SATURDAY\n");
        else if(s2==2 && s4==5 && strcmp(day,"THURSDAY")==0)
            printf("SUNDAY\n");//////////////


        else if(s2==2 && s4==6 && strcmp(day,"FRIDAY")==0)
            printf("TUESDAY\n");
        else if(s2==2 && s4==6 && strcmp(day,"SATURDAY")==0)
            printf("WEDNESDAY\n");
        else if(s2==2 && s4==6 && strcmp(day,"SUNDAY")==0)
            printf("THRUSDAY\n");
        else if(s2==2 && s4==6 && strcmp(day,"MONDAY")==0)
            printf("FRIDAY\n");
        else if(s2==2 && s4==6 && strcmp(day,"TUESDAY")==0)
            printf("SATURDAY\n");
        else if(s2==2 && s4==6 && strcmp(day,"WEDNESDAY")==0)
            printf("SUNDAY\n");
        else if(s2==2 && s4==6 && strcmp(day,"THURSDAY")==0)
            printf("MONDAY\n");/////////////////////////






        else if(s2==3 && s4==0 && strcmp(day,"FRIDAY")==0)
            printf("TUESDAY\n");
        else if(s2==3 && s4==0 && strcmp(day,"SATURDAY")==0)
            printf("WEDNESDAY\n");
        else if(s2==3 && s4==0 && strcmp(day,"SUNDAY")==0)
            printf("THURSDAY\n");
        else if(s2==3 && s4==0 && strcmp(day,"MONDAY")==0)
            printf("FRIDAY\n");
        else if(s2==3 && s4==0 && strcmp(day,"TUESDAY")==0)
            printf("SATURDAY\n");
        else if(s2==3 && s4==0 && strcmp(day,"WEDNESDAY")==0)
            printf("SUNDAY\n");
        else if(s2==3 && s4==0 && strcmp(day,"THURSDAY")==0)
            printf("MONDAY\n");////////////////


        else if(s2==3 && s4==1 && strcmp(day,"FRIDAY")==0)
            printf("WEDNESDAY\n");
        else if(s2==3 && s4==1 && strcmp(day,"SATURDAY")==0)
            printf("THURSDAY\n");
        else if(s2==3 && s4==1 && strcmp(day,"SUNDAY")==0)
            printf("FRIDAY\n");
        else if(s2==3&& s4==1 && strcmp(day,"MONDAY")==0)
            printf("SATURDAY\n");
        else if(s2==3 && s4==1 && strcmp(day,"TUESDAY")==0)
            printf("SUNDAY\n");
        else if(s2==3 && s4==1 && strcmp(day,"WEDNESDAY")==0)
            printf("MONDAY\n");
        else if(s2==3 && s4==1 && strcmp(day,"THURSDAY")==0)
            printf("TUESDAY\n");//////////////


        else if(s2==3 && s4==2 && strcmp(day,"FRIDAY")==0)
            printf("THRUSDAY\n");
        else if(s2==3 && s4==2 && strcmp(day,"SATURDAY")==0)
            printf("FRIDAY\n");
        else if(s2==3 && s4==2 && strcmp(day,"SUNDAY")==0)
            printf("SATURDAY\n");
        else if(s2==3 && s4==2 && strcmp(day,"MONDAY")==0)
            printf("SUNDAY\n");
        else if(s2==3 && s4==2 && strcmp(day,"TUESDAY")==0)
            printf("MONDAY\n");
        else if(s2==3 && s4==2 && strcmp(day,"WEDNESDAY")==0)
            printf("TUESDAY\n");
        else if(s2==3 && s4==2 && strcmp(day,"THURSDAY")==0)
            printf("WEDNESDAY\n");////////////


        else if(s2==3 && s4==3 && strcmp(day,"FRIDAY")==0)
            printf("FRIDAY\n");
        else if(s2==3 && s4==3 && strcmp(day,"SATURDAY")==0)
            printf("SATURDAY\n");
        else if(s2==3 && s4==3 && strcmp(day,"SUNDAY")==0)
            printf("SUNDAY\n");
        else if(s2==3 && s4==3 && strcmp(day,"MONDAY")==0)
            printf("MONDAY\n");
        else if(s2==3 && s4==3&& strcmp(day,"TUESDAY")==0)
            printf("TUESDAY\n");
        else if(s2==3 && s4==3 && strcmp(day,"WEDNESDAY")==0)
            printf("WEDNESDAY\n");
        else if(s2==3 && s4==3 && strcmp(day,"THURSDAY")==0)
            printf("THURSDAY\n");//////////////////


        else if(s2==3 && s4==4 && strcmp(day,"FRIDAY")==0)
            printf("SATURDAY\n");
        else if(s2==3 && s4==4 && strcmp(day,"SATURDAY")==0)
            printf("SUNDAY\n");
        else if(s2==3 && s4==4 && strcmp(day,"SUNDAY")==0)
            printf("MONDAY\n");
        else if(s2==3 && s4==4 && strcmp(day,"MONDAY")==0)
            printf("TUESDAY\n");
        else if(s2==3 && s4==4 && strcmp(day,"TUESDAY")==0)
            printf("WEDNESDAY\n");
        else if(s2==3 && s4==4 && strcmp(day,"WEDNESDAY")==0)
            printf("THURSDAY\n");
        else if(s2==3 && s4==4 && strcmp(day,"THURSDAY")==0)
            printf("FIRDAY\n");///////////////////


        else if(s2==3 && s4==5 && strcmp(day,"FRIDAY")==0)
            printf("SUNDAY\n");
        else if(s2==3 && s4==5 && strcmp(day,"SATURDAY")==0)
            printf("MONDAY\n");
        else if(s2==3 && s4==5 && strcmp(day,"SUNDAY")==0)
            printf("TUEDSDAY\n");
        else if(s2==3 && s4==5 && strcmp(day,"MONDAY")==0)
            printf("WEDNESDAY\n");
        else if(s2==3 && s4==5 && strcmp(day,"TUESDAY")==0)
            printf("THRUSDAY\n");
        else if(s2==3 && s4==5 && strcmp(day,"WEDNESDAY")==0)
            printf("FIRDAY\n");
        else if(s2==3 && s4==5 && strcmp(day,"THURSDAY")==0)
            printf("SATURDAY\n");//////////////


        else if(s2==3 && s4==6 && strcmp(day,"FRIDAY")==0)
            printf("MONDAY\n");
        else if(s2==3 && s4==6 && strcmp(day,"SATURDAY")==0)
            printf("TUESDAY\n");
        else if(s2==3 && s4==6 && strcmp(day,"SUNDAY")==0)
            printf("WEDNESDAY\n");
        else if(s2==3 && s4==6 && strcmp(day,"MONDAY")==0)
            printf("THURSDAY\n");
        else if(s2==3 && s4==6 && strcmp(day,"TUESDAY")==0)
            printf("FRIDAY\n");
        else if(s2==3 && s4==6 && strcmp(day,"WEDNESDAY")==0)
            printf("SATURDAY\n");
        else if(s2==3 && s4==6 && strcmp(day,"THURSDAY")==0)
            printf("SUNDAY\n");///////////////////







        else if(s2==4 && s4==0 && strcmp(day,"FRIDAY")==0)
            printf("MONDAY\n");
        else if(s2==4 && s4==0 && strcmp(day,"SATURDAY")==0)
            printf("TUESDAY\n");
        else if(s2==4 && s4==0 && strcmp(day,"SUNDAY")==0)
            printf("WEDNESDAY\n");
        else if(s2==4 && s4==0 && strcmp(day,"MONDAY")==0)
            printf("THURSDAY\n");
        else if(s2==4 && s4==0 && strcmp(day,"TUESDAY")==0)
            printf("FRIDAY\n");
        else if(s2==4 && s4==0 && strcmp(day,"WEDNESDAY")==0)
            printf("SATURDAY\n");
        else if(s2==4 && s4==0 && strcmp(day,"THURSDAY")==0)
            printf("SUNDAY\n");//////////////


        else if(s2==4 && s4==1 && strcmp(day,"FRIDAY")==0)
            printf("TUESDAY\n");
        else if(s2==4 && s4==1 && strcmp(day,"SATURDAY")==0)
            printf("WEDNESDAY\n");
        else if(s2==4 && s4==1 && strcmp(day,"SUNDAY")==0)
            printf("THRUSDAY\n");
        else if(s2==4 && s4==1 && strcmp(day,"MONDAY")==0)
            printf("FRIDAY\n");
        else if(s2==4 && s4==1 && strcmp(day,"TUESDAY")==0)
            printf("SATURDAY\n");
        else if(s2==4 && s4==1 && strcmp(day,"WEDNESDAY")==0)
            printf("SUNDAY\n");
        else if(s2==4 && s4==2 && strcmp(day,"THURSDAY")==0)
            printf("MONDAY\n");//////////////


        else if(s2==4 && s4==2 && strcmp(day,"FRIDAY")==0)
            printf("WEDNESDAY\n");
        else if(s2==4 && s4==2 && strcmp(day,"SATURDAY")==0)
            printf("THURSDAY\n");
        else if(s2==4 && s4==2 && strcmp(day,"SUNDAY")==0)
            printf("FRIDAY\n");
        else if(s2==4 && s4==2 && strcmp(day,"MONDAY")==0)
            printf("SATURDAY\n");
        else if(s2==4 && s4==2 && strcmp(day,"TUESDAY")==0)
            printf("SUNDAY\n");
        else if(s2==4 && s4==2 && strcmp(day,"WEDNESDAY")==0)
            printf("MONDAY\n");
        else if(s2==4 && s4==2 && strcmp(day,"THURSDAY")==0)
            printf("TUESDAY\n");///////////


        else if(s2==4 && s4==3 && strcmp(day,"FRIDAY")==0)
            printf("THURSDAY\n");
        else if(s2==4 && s4==3 && strcmp(day,"SATURDAY")==0)
            printf("FRIDAY\n");
        else if(s2==4 && s4==3 && strcmp(day,"SUNDAY")==0)
            printf("SATURDAY\n");
        else if(s2==4 && s4==3 && strcmp(day,"MONDAY")==0)
            printf("SUNDAY\n");
        else if(s2==4 && s4==3 && strcmp(day,"TUESDAY")==0)
            printf("MONDAY\n");
        else if(s2==4 && s4==3 && strcmp(day,"WEDNESDAY")==0)
            printf("TUESDAY\n");
        else if(s2==4 && s4==3 && strcmp(day,"THURSDAY")==0)
            printf("WEDNESDAY\n");////////////////


        else if(s2==4 && s4==4 && strcmp(day,"FRIDAY")==0)
            printf("FRIDAY\n");
        else if(s2==4 && s4==4 && strcmp(day,"SATURDAY")==0)
            printf("SATURDAY\n");
        else if(s2==4 && s4==4 && strcmp(day,"SUNDAY")==0)
            printf("SUNDAY\n");
        else if(s2==4 && s4==4 && strcmp(day,"MONDAY")==0)
            printf("MONDAY\n");
        else if(s2==4 && s4==4 && strcmp(day,"TUESDAY")==0)
            printf("TUESDAY\n");
        else if(s2==4 && s4==4 && strcmp(day,"WEDNESDAY")==0)
            printf("WEDNESDAY\n");
        else if(s2==4 && s4==4 && strcmp(day,"THURSDAY")==0)
            printf("THURSDAY\n");////////////////


        else if(s2==4 && s4==5 && strcmp(day,"FRIDAY")==0)
            printf("SATURDAY\n");
        else if(s2==4 && s4==5 && strcmp(day,"SATURDAY")==0)
            printf("SUNDAY\n");
        else if(s2==4 && s4==5 && strcmp(day,"SUNDAY")==0)
            printf("MONDAY\n");
        else if(s2==4 && s4==5 && strcmp(day,"MONDAY")==0)
            printf("TUESDAY\n");
        else if(s2==4 && s4==5 && strcmp(day,"TUESDAY")==0)
            printf("WEDNESDAY\n");
        else if(s2==4 && s4==5 && strcmp(day,"WEDNESDAY")==0)
            printf("THURSDAY\n");
        else if(s2==4 && s4==5 && strcmp(day,"THURSDAY")==0)
            printf("FIRDAY\n");//////////////////////


        else if(s2==4 && s4==6 && strcmp(day,"FRIDAY")==0)
            printf("SUNDAY\n");
        else if(s2==4 && s4==6 && strcmp(day,"SATURDAY")==0)
            printf("MONDAY\n");
        else if(s2==4 && s4==6 && strcmp(day,"SUNDAY")==0)
            printf("TUEDSDAY\n");
        else if(s2==4 && s4==6 && strcmp(day,"MONDAY")==0)
            printf("WEDNESDAY\n");
        else if(s2==4 && s4==6 && strcmp(day,"TUESDAY")==0)
            printf("THRUSDAY\n");
        else if(s2==4 && s4==6 && strcmp(day,"WEDNESDAY")==0)
            printf("FIRDAY\n");
        else if(s2==4 && s4==6 && strcmp(day,"THURSDAY")==0)
            printf("SATURDAY\n");//////////////







        else if(s2==5 && s4==0 && strcmp(day,"FRIDAY")==0)
            printf("SUNDAY\n");
        else if(s2==5 && s4==0 && strcmp(day,"SATURDAY")==0)
            printf("MONDAY\n");
        else if(s2==5 && s4==0 && strcmp(day,"SUNDAY")==0)
            printf("TUESDAY\n");
        else if(s2==5 && s4==0 && strcmp(day,"MONDAY")==0)
            printf("WEDNESDAY\n");
        else if(s2==5 && s4==0 && strcmp(day,"TUESDAY")==0)
            printf("THURSDAY\n");
        else if(s2==5 && s4==0 && strcmp(day,"WEDNESDAY")==0)
            printf("FRIDAY\n");
        else if(s2==5 && s4==0 && strcmp(day,"THURSDAY")==0)
            printf("SATURDAY\n");///////


        else if(s2==5 && s4==1 && strcmp(day,"FRIDAY")==0)
            printf("MONDAY\n");
        else if(s2==5 && s4==1 && strcmp(day,"SATURDAY")==0)
            printf("TUESDAY\n");
        else if(s2==5 && s4==1 && strcmp(day,"SUNDAY")==0)
            printf("WEDNESDAY\n");
        else if(s2==5 && s4==1 && strcmp(day,"MONDAY")==0)
            printf("THURSDAY\n");
        else if(s2==5 && s4==1 && strcmp(day,"TUESDAY")==0)
            printf("FRIDAY\n");
        else if(s2==5 && s4==1 && strcmp(day,"WEDNESDAY")==0)
            printf("SATURDAY\n");
        else if(s2==5 && s4==1 && strcmp(day,"THURSDAY")==0)
            printf("SUNDAY\n");//////////////


        else if(s2==5 && s4==2 && strcmp(day,"FRIDAY")==0)
            printf("TUESDAY\n");
        else if(s2==5 && s4==2 && strcmp(day,"SATURDAY")==0)
            printf("WEDNESDAY\n");
        else if(s2==5 && s4==2 && strcmp(day,"SUNDAY")==0)
            printf("THURSDAY\n");
        else if(s2==5 && s4==2 && strcmp(day,"MONDAY")==0)
            printf("FRIDAY\n");
        else if(s2==5 && s4==2 && strcmp(day,"TUESDAY")==0)
            printf("SATURDAY\n");
        else if(s2==5 && s4==2 && strcmp(day,"WEDNESDAY")==0)
            printf("SUNDAY\n");
        else if(s2==5 && s4==2 && strcmp(day,"THURSDAY")==0)
            printf("MONDAY\n");//////////////


        else if(s2==5 && s4==3 && strcmp(day,"FRIDAY")==0)
            printf("WEDNESDAY\n");
        else if(s2==5 && s4==3 && strcmp(day,"SATURDAY")==0)
            printf("THURSDAY\n");
        else if(s2==5 && s4==3 && strcmp(day,"SUNDAY")==0)
            printf("FRIDAY\n");
        else if(s2==5 && s4==3 && strcmp(day,"MONDAY")==0)
            printf("SATURDAY\n");
        else if(s2==5 && s4==3 && strcmp(day,"TUESDAY")==0)
            printf("SUNDAY\n");
        else if(s2==5 && s4==3 && strcmp(day,"WEDNESDAY")==0)
            printf("MONDAY\n");
        else if(s2==5 && s4==3 && strcmp(day,"THURSDAY")==0)
            printf("TUESDAY\n");//////////////


        else if(s2==5 && s4==4 && strcmp(day,"FRIDAY")==0)
            printf("THURSDAY\n");
        else if(s2==5 && s4==4 && strcmp(day,"SATURDAY")==0)
            printf("FRIDAY\n");
        else if(s2==5 && s4==4 && strcmp(day,"SUNDAY")==0)
            printf("SATURDAY\n");
        else if(s2==5 && s4==4 && strcmp(day,"MONDAY")==0)
            printf("SUNDAY\n");
        else if(s2==5 && s4==4 && strcmp(day,"TUESDAY")==0)
            printf("MONDAY\n");
        else if(s2==5 && s4==4 && strcmp(day,"WEDNESDAY")==0)
            printf("TUESDAY\n");
        else if(s2==5 && s4==4 && strcmp(day,"THURSDAY")==0)
            printf("WEDNESDAY\n");////////////////


        else if(s2==5 && s4==5 && strcmp(day,"FRIDAY")==0)
            printf("FRIDAY\n");
        else if(s2==5 && s4==5 && strcmp(day,"SATURDAY")==0)
            printf("SATURDAY\n");
        else if(s2==5 && s4==5 && strcmp(day,"SUNDAY")==0)
            printf("SUNDAY\n");
        else if(s2==5 && s4==5 && strcmp(day,"MONDAY")==0)
            printf("MONDAY\n");
        else if(s2==5 && s4==5 && strcmp(day,"TUESDAY")==0)
            printf("TUESDAY\n");
        else if(s2==5 && s4==5 && strcmp(day,"WEDNESDAY")==0)
            printf("WEDNESDAY\n");
        else if(s2==5 && s4==5 && strcmp(day,"THURSDAY")==0)
            printf("THURSDAY\n");/////////////////


        else if(s2==5 && s4==6 && strcmp(day,"FRIDAY")==0)
            printf("SATURDAY\n");
        else if(s2==5 && s4==6 && strcmp(day,"SATURDAY")==0)
            printf("SUNDAY\n");
        else if(s2==5 && s4==6 && strcmp(day,"SUNDAY")==0)
            printf("MONDAY\n");
        else if(s2==5 && s4==6 && strcmp(day,"MONDAY")==0)
            printf("TUESDAY\n");
        else if(s2==5 && s4==6 && strcmp(day,"TUESDAY")==0)
            printf("WEDNESDAY\n");
        else if(s2==5 && s4==6 && strcmp(day,"WEDNESDAY")==0)
            printf("THURSDAY\n");
        else if(s2==5 && s4==6 && strcmp(day,"THURSDAY")==0)
            printf("FIRDAY\n");
        else if(s2==5 && s4==6 && strcmp(day,"FRIDAY")==0)
            printf("SUNDAY\n");//////////////////








        else if(s2==6 && s4==0 && strcmp(day,"FRIDAY")==0)
            printf("SATURDAY\n");
        else if(s2==6 && s4==0 && strcmp(day,"SATURDAY")==0)
            printf("SUNDAY\n");
        else if(s2==6 && s4==0 && strcmp(day,"SUNDAY")==0)
            printf("MONDAY\n");
        else if(s2==6 && s4==0 && strcmp(day,"MONDAY")==0)
            printf("TUESDAY\n");
        else if(s2==6 && s4==0 && strcmp(day,"TUESDAY")==0)
            printf("WEDNESDAY\n");
        else if(s2==6 && s4==0 && strcmp(day,"WEDNESDAY")==0)
            printf("THURSDAY\n");
        else if(s2==6 && s4==0 && strcmp(day,"THURSDAY")==0)
            printf("FIRDAY\n");////////////////////


        else if(s2==6 && s4==1 && strcmp(day,"FRIDAY")==0)
            printf("SUNDAY\n");
        else if(s2==6 && s4==1 && strcmp(day,"SATURDAY")==0)
            printf("MONDAY\n");
        else if(s2==6 && s4==1 && strcmp(day,"SUNDAY")==0)
            printf("TUESDAY\n");
        else if(s2==6 && s4==1 && strcmp(day,"MONDAY")==0)
            printf("WEDNESDAY\n");
        else if(s2==6 && s4==1 && strcmp(day,"TUESDAY")==0)
            printf("THURSDAY\n");
        else if(s2==6 && s4==1 && strcmp(day,"WEDNESDAY")==0)
            printf("FRIDAY\n");
        else if(s2==6 && s4==1 && strcmp(day,"THURSDAY")==0)
            printf("SATURDAY\n");///////////////


        else if(s2==6 && s4==2 && strcmp(day,"FRIDAY")==0)
            printf("MONDAY\n");
        else if(s2==6 && s4==2 && strcmp(day,"SATURDAY")==0)
            printf("TUESDAY\n");
        else if(s2==6 && s4==2 && strcmp(day,"SUNDAY")==0)
            printf("WEDNESDAY\n");
        else if(s2==6 && s4==2 && strcmp(day,"MONDAY")==0)
            printf("THURSDAY\n");
        else if(s2==6 && s4==2 && strcmp(day,"TUESDAY")==0)
            printf("FRIDAY\n");
        else if(s2==6 && s4==2 && strcmp(day,"WEDNESDAY")==0)
            printf("SATURDAY\n");
        else if(s2==6 && s4==2 && strcmp(day,"THURSDAY")==0)
            printf("SUNDAY\n");//////////////


        else if(s2==6 && s4==3 && strcmp(day,"FRIDAY")==0)
            printf("TUESDAY\n");
        else if(s2==6 && s4==3 && strcmp(day,"SATURDAY")==0)
            printf("WEDNESDAY\n");
        else if(s2==6 && s4==3 && strcmp(day,"SUNDAY")==0)
            printf("THURSDAY\n");
        else if(s2==6 && s4==3 && strcmp(day,"MONDAY")==0)
            printf("FRIDAY\n");
        else if(s2==6 && s4==3 && strcmp(day,"TUESDAY")==0)
            printf("SATURDAY\n");
        else if(s2==6 && s4==3 && strcmp(day,"WEDNESDAY")==0)
            printf("SUNDAY\n");
        else if(s2==6 && s4==3 && strcmp(day,"THURSDAY")==0)
            printf("MONDAY\n");//////////////


        else if(s2==6 && s4==4 && strcmp(day,"FRIDAY")==0)
            printf("WEDNESDAY\n");
        else if(s2==6 && s4==4 && strcmp(day,"SATURDAY")==0)
            printf("THURSDAY\n");
        else if(s2==6 && s4==4 && strcmp(day,"SUNDAY")==0)
            printf("FRIDAY\n");
        else if(s2==6 && s4==4 && strcmp(day,"MONDAY")==0)
            printf("SATURDAY\n");
        else if(s2==6 && s4==4 && strcmp(day,"TUESDAY")==0)
            printf("SUNDAY\n");
        else if(s2==6 && s4==4 && strcmp(day,"WEDNESDAY")==0)
            printf("MONDAY\n");
        else if(s2==6 && s4==4 && strcmp(day,"THURSDAY")==0)
            printf("TUESDAY\n");//////////////


        else if(s2==6 && s4==5 && strcmp(day,"FRIDAY")==0)
            printf("THURSDAY\n");
        else if(s2==6 && s4==5 && strcmp(day,"SATURDAY")==0)
            printf("FRIDAY\n");
        else if(s2==6 && s4==5 && strcmp(day,"SUNDAY")==0)
            printf("SATURDAY\n");
        else if(s2==6 && s4==5 && strcmp(day,"MONDAY")==0)
            printf("SUNDAY\n");
        else if(s2==6 && s4==5 && strcmp(day,"TUESDAY")==0)
            printf("MONDAY\n");
        else if(s2==6 && s4==5 && strcmp(day,"WEDNESDAY")==0)
            printf("TUESDAY\n");
        else if(s2==6 && s4==5 && strcmp(day,"THURSDAY")==0)
            printf("WEDNESDAY\n");////////////////


        else if(s2==6 && s4==6 && strcmp(day,"FRIDAY")==0)
            printf("FRIDAY\n");
        else if(s2==6 && s4==6 && strcmp(day,"SATURDAY")==0)
            printf("SATURDAY\n");
        else if(s2==6 && s4==6 && strcmp(day,"SUNDAY")==0)
            printf("SUNDAY\n");
        else if(s2==6 && s4==6 && strcmp(day,"MONDAY")==0)
            printf("MONDAY\n");
        else if(s2==6 && s4==6 && strcmp(day,"TUESDAY")==0)
            printf("TUESDAY\n");
        else if(s2==6 && s4==6 && strcmp(day,"WEDNESDAY")==0)
            printf("WEDNESDAY\n");
        else if(s2==6 && s4==6 && strcmp(day,"THURSDAY")==0)
            printf("THURSDAY\n");

}

return 0;
}
