# include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(){
    char sentence[] = "my name is sachin wadhwani sachin";
    char word[20], str1[100], str2[100];
    char *ptr = &sentence[0];
    char *p = strstr(sentence, "sachin");
    
    int len;
    if(p == NULL)
        printf("Sachin is not present in the string");
    else
    {
        printf("Enter the letter to be insert: ");
        scanf("%s",word);
        while(p!=NULL)
        {
                    int i=0;
            while(ptr != p){
            str1[i] = sentence[i];
           ptr++;
           i++;
       }
        len = strlen(str1) + strlen("sachin");
       int j=0;
       while(*ptr != '\0'){
           str2[j] = sentence[len+1];
           ptr++;
           len++;
           j++;
       }
       strcat(str1,word);
       strcat(str1,str2);
       printf("%s",str1);
        }


    }
    return 0;
}