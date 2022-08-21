# include<stdio.h>

int main(){
    int score[6];
    int *ptr;
    ptr = &score[0];
    for(int i=0;i++;i<=5){
        printf("Run/s scored in the ball %d:",i+1);
        scanf("%d", ptr);
        // ptr++;
    }
    printf("total runs scored in  the over is %d", (score[0] + score[1] +score[2] +score[3] +score[4] +score[5]));
    return 0;
}