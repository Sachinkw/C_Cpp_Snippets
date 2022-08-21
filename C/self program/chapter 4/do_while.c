# include<stdio.h>

int main(){
    int n = 0,i;
    scanf("%d", &i);

    do{
        n++ ;
        printf("%d\n",n);
    }while (n<i);
    return 0;
}