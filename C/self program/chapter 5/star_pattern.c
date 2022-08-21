# include<stdio.h>

void starPattern(int i);

int main(){
    int n;
    printf("Enter a natural no.\n");
    scanf("%d", &n);
    starPattern(n);
    return 0;
}

void starPattern(int i){
    int j,k;
    for(j=1;j<=(2*i-1);j+=2)
    {
        for (k=1;k<=j;k++)
        {
        printf("*");
        }
        printf("\n");
    }
}