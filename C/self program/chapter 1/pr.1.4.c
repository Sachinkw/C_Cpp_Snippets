# include<stdio.h>

int main(){
    int interest, principal, time;
    scanf("%d", &principal);
    scanf("%d", &time);
    scanf("%d", &interest);
    printf("SI is : %d", principal*time*interest/100);
    return 0;
}