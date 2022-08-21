# include<stdio.h>

int main(){
    int marks ;
    scanf("%d", &marks);
    switch (marks){
        case 90 :
            printf("you got grade A");
            break;
        case 80 :
            printf("you got grade B");
            break;
        case 70 :
            printf("you got grade C");
            break;
        case 60 :
            printf("you got grade D");
            break;
    default:
            printf("you are failed");
        break;
    }

    return 0;
}