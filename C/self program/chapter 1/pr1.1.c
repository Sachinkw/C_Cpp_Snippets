# include<stdio.h>

int main(){
    int l,b,area;
    printf("Enter your length:\n");
    scanf("%d", &l);
    printf("Enter your breadth:\n");
    scanf("%d", &b);
    area = l*b ;
    printf("Area of rectangle is %d", area);
    return 0;
}