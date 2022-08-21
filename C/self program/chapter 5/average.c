# include<stdio.h>

int average(int num1, int num2, int num3, int num4, int num5);

int main(){
    int a,b,c,d,e,avg;
    printf("Enter 5 numbers\n");
    scanf("%d %d %d %d %d", &a , &b, &c , &d ,&e);
    avg = average(a,b,c,d,e);
    printf("average of the numbers is %d\n",avg);
    // printf("diksha is a loser, wo padhai nhi karti");
    return 0;
}
int average(int num1, int num2, int num3, int num4, int num5){
    return (num1 + num2 + num3 + num4 + num5)/5 ;
}