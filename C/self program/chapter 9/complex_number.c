# include<stdio.h>

typedef struct complexNumber
{
    int real;
    int img;
}complex;

void display(complex c){
    int r = c.real;
    int i = c.img;
    printf("Complex num is %d + %di\n",r,i);
}

int main(){
    complex arr[5];
    printf("Enter real and img parts of complex number 1:\n");
    scanf("%d", &arr[0].real);
    scanf("%d", &arr[0].img);
    display(arr[0]);

    printf("Enter real and img parts of complex number 2:\n");
    scanf("%d", &arr[1].real);
    scanf("%d", &arr[1].img);
    display(arr[1]);

    printf("Enter real and img parts of complex number 3:\n");
    scanf("%d", &arr[2].real);
    scanf("%d", &arr[2].img);
    display(arr[2]);

    printf("Enter real and img parts of complex number 4:\n");
    scanf("%d", &arr[3].real);
    scanf("%d", &arr[3].img);
    display(arr[3]);

    printf("Enter real and img parts of complex number 5:\n");
    scanf("%d", &arr[4].real);
    scanf("%d", &arr[4].img);
    display(arr[4]);
    return 0;
}