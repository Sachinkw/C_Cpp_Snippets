# include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("table.txt","w");
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        fprintf(ptr,"%d X %d = %d\n",n,i,n*i);
    }
    fclose(ptr);
    printf("Table generated in table.txt");
    return 0;
}