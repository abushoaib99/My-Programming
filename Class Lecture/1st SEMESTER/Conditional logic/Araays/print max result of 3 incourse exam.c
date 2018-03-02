#include <stdio.h>
int main()
{
    int ft_incrous_marks[35] = {583, 686, 597, 495, 793, 895, 586, 452, 449, 541, 642, 547, 790,
    659, 563, 586, 440, 846, 492, 656, 451, 848, 667, 449, 542, 690, 642, 483, 747, 695, 669, 882,
    826, 588, 697},
    st_incrous_marks[35] = {826, 597, 695, 893, 695, 786, 852, 449, 541, 642, 748, 895, 559, 663,
    865, 404, 446, 592, 856, 551, 448, 657, 649, 442, 790, 842, 683, 747, 695, 769, 682, 582, 658,
    695, 675},
    final_incrous_marks[35] = {857, 654, 691, 443, 589, 566, 658, 873, 899, 681, 700, 564, 755,
    679, 857, 871, 780, 677, 887, 471, 462, 778, 558, 646, 798, 475, 586, 690, 680, 785, 800, 664,
    555, 629,741};
    int i;

    printf("_______________________________________________________________\n");
    printf("  Roll NO \t\t\t Highest Marks");
    printf("\n_______________________________________________________________\n");



    for(i = 1; i <= 35; i++) {
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

