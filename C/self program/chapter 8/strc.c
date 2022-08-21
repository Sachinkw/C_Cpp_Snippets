# include<stdio.h>

void strc(char *strt, char *str1){
    int i;
    while (*str1 != '\0')
    {
        *strt = *str1;
        strt++;
        str1++;
    }
    *strt = '\0';
 }

int main(){
    char org[] = "Sachin";
    char *trgt;
    strc(trgt,org);
    printf("%s",trgt);
    return 0;
}