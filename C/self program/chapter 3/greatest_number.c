# include<stdio.h>

int main(){
    int a,b,c,d, great1, great2 ;
    printf("Enter four no.s and I will tell you the largest \n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    if (a>b){
        great1 = a;
    }
    else
    {
        great1 = b;
    }
    if (c>d){
        great2 = c;
    }
    else
    {
        great2 = d;
    }
    if (great1>great2){
        printf("%d is the largest", great1);
    }
    else
    {
        printf("%d is the largest", great2);
    }
    return 0;
}