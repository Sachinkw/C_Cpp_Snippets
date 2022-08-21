# include<stdio.h>

int main(){
    int yr ;
    printf("Enter the year to br checked \n");
    scanf("%d", &yr);
    if (yr%4 != 0)
    {
        printf("The year %d is not a leap year as it has 365 days.", yr);
    }
    else
    {
        if(yr%100 != 0){
            printf("The year %d is a leap year as it has 366 days.", yr);
        }
        else
        {
            if(yr%400 == 0)
            printf("The year %d is a leap year as it has 366 days.", yr);
            else
            printf("The year %d is not a leap year as it has 365 days.", yr);
        }
    }
    return 0;
}