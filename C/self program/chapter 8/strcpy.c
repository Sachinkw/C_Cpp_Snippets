# include<stdio.h>
# include<string.h>
int main(){
    char *ptr1 = "sachin";
    char ptr2[10];
    strcpy(ptr2,ptr1);
    printf("%s",ptr2);
    return 0;
}