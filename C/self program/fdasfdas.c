# include<stdio.h>
#include<string.h>


int main(){
    char sentence[] = "my name is sachin wadhwani";
    char str1[100], str2[100];
    char *ptr = sentence;
    char *p = strstr(sentence, "sachin");
    char *word;
    printf("Enter the letter to be insert: ");
    scanf("%s",word);
    int len;
    if(p == NULL)
        printf("Sachin is not present in the string");
    else
    {
        int i=0;
       while(ptr != p){
           str1[i] = sentence[i];
           ptr++;
       }
       len = strlen(str1) + strlen("sachin");
       while(*ptr != '\0'){
           str2[len-1] = sentence[len-1];
           ptr++;
           len++;
       }
       strcat(str1,word);
       strcat(str1,str2);
       printf("%s",str1);

    }
    return 0;
}