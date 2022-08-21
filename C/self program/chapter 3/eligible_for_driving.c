# include<stdio.h>

int main(){
    int age;
    printf("enter your age : \n");
    scanf ("%d", &age);
    if (age>=18){
        printf("Congrats! You are eligible for driving.");
    }
    else
    {
        printf("Oops !! your are not eligible") ;
    }
    return 0;
}