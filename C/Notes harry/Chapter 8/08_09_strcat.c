#include<stdio.h>
#include <string.h>

int main(){
    char st1[45] = "Hello";
    char *st2 = "Harry";
    strcat(st1, st2);   //concatenates without adding spaces
    printf("Now the st1 is %s", st1);
    return 0;
}