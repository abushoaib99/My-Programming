#include <stdio.h>
int main()

{
    int ft_incrous_marks[35],st_incrous_marks[35],final_incrous_marks[35];
    int i,j,n;
    printf("\nHow much student: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
           printf("\nRoll No: %d\t3 in course exam Marks: ",i+1);
           scanf("%d %d %d",&ft_incrous_marks[i],&st_incrous_marks[i],&final_incrous_marks[i]);

    }
    printf("\n_______________________________________________________________\n");
    printf("\n  Roll NO\t\t\t Highest Marks\n");
    printf("\n_______________________________________________________________\n");


    for(i = 1; i <= n; i++) {
            if(ft_incrous_marks[i-1] > st_incrous_marks[i-1] && ft_incrous_marks[i-1] >final_incrous_marks[i-1]){
            printf("\n Roll NO:- %d\t\tHighest Mark: %d  than  %d  and  %d\n",i,ft_incrous_marks[i-1],st_incrous_marks[i-1],final_incrous_marks[i-1]);
            printf("\n_______________________________________________________________\n");
            }
            else if(st_incrous_marks[i-1]>ft_incrous_marks[i-1] && st_incrous_marks[i-1] > final_incrous_marks[i-1]){
                printf("\n Roll NO:- %d\t\tHighest Mark: %d  than  %d  and  %d\n",i,st_incrous_marks[i-1],ft_incrous_marks[i-1],final_incrous_marks[i-1]);
                printf("\n_______________________________________________________________\n");
                }
                else if(final_incrous_marks[i-1]> st_incrous_marks[i-1] && final_incrous_marks[i-1]>ft_incrous_marks[i-1]){
                printf("\n Roll NO:- %d\t\tHighest Mark: %d  than  %d  and  %d\n",i,final_incrous_marks[i-1],ft_incrous_marks[i-1],st_incrous_marks[i-1]);
                printf("\n_______________________________________________________________\n");
                }
            }
            printf("\n_______________________________________________________________\n\n");


            return 0;
}


