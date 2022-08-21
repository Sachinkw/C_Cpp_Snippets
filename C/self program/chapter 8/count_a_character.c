# include<stdio.h>

int count(char str[], char c){
    int num=0;
    while (*str !='\0')
    {
      if (*str == c)
      {
          num++;
      }
      str++;
    }
    return num;
}

int main(){
    char arr[] = "jsahfuiashi";
    int n = count(arr,'i');
    printf("%d",n);
    return 0;
}