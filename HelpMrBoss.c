#include <stdio.h>
void main(){
    int n,max_cs = -99999999, max_it = -99999999;
    int count_cs = 0, count_it = 0, sum_cs = 0, sum_it = 0;
    float avg_cs, avg_it;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        int pre, sum_post = 0, x, y, a = 1;
        scanf("%d",&y);
        if(y == 1){
            count_cs++;
            for(int j = 0; j < 4; j++){
                scanf("%d",&x);
                if(j == 0){
                    if(x >= 0 && x <= 40){
                        pre = x;
                    }
                    else {
                        printf("Invalid input.\n");
                        count_cs--;
                        a = 0;
                        break;
                    }
                }
                else if(j == 1){
                    if(x >= 0 && x <= 25){
                        sum_post += x;
                    }
                    else {
                        printf("Invalid input.\n");
                        count_cs--;
                        a = 0;
                        break;
                    }
                }
                else if(j == 2){
                    if(x >= 0 && x <=5){
                        sum_post += x;
                    }
                    else {
                        printf("Invalid input.\n");
                        count_cs--;
                        a = 0;
                        break;
                    }
                }
                else if(j == 3){
                    if(x >= 0 && x <= 10){
                        sum_post += x;
                    }
                    else {
                        printf("Invalid input.\n");
                        count_cs--;
                        a = 0;
                        break;
                    }
                }
            }
            sum_cs += sum_post;
            if(sum_post > max_cs){
                max_cs = sum_post;
            }
        }
        else if(y == 2){
            count_it++;
            for(int j = 0; j < 4; j++){
                scanf("%d",&x);
                if(j == 0){
                    if(x >= 0 && x <= 40){
                        pre = x;
                    }
                    else {
                        printf("Invalid input.\n");
                        count_it--;
                        a = 0;
                        break;
                    }
                }
                else if(j == 1){
                    if(x >= 0 && x <= 25){
                        sum_post += x;
                    }
                    else {
                        printf("Invalid input.\n");
                        count_it--;
                        a = 0;
                        break;
                    }
                }
                else if(j == 2){
                    if(x >= 0 && x <=5){
                        sum_post += x;
                    }
                    else {
                        printf("Invalid input.\n");
                        count_it--;
                        a = 0;
                        break;
                    }
                }
                else if(j == 3){
                    if(x >= 0 && x <= 10){
                        sum_post += x;
                    }
                    else {
                        printf("Invalid input.\n");
                        count_it--;
                        a = 0;
                        break;
                    }
                }
            }
            sum_it += sum_post;
            if(sum_post > max_it){
                max_it = sum_post;
            }
        }
        if(a == 1){
            if(pre > sum_post){
                printf("The score is %d points lower than last time.\n", pre - sum_post);
            }
            else if(sum_post > pre){
                printf("The score is %d points better than last time.\n", sum_post - pre);
            }
            else {
                printf("Your score is the same as last time!!\n");
            }
        }
    }
    if(count_cs > 0){
        printf("The best score in CS is %d\n", max_cs);
        avg_cs = 1.0*sum_cs/count_cs;
        printf("Average score in CS is %.2f\n", avg_cs);
        printf("Total of student in CS is %d\n", count_cs);
    }
    if(count_it > 0){
        printf("The best score in IT is %d\n", max_it);
        avg_it = 1.0*sum_it/count_it;
        printf("Average score in IT is %.2f\n", avg_it);
        printf("Total of student in IT is %d\n", count_it);
    }
}
