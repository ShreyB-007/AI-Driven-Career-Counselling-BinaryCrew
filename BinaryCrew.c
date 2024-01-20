#include <stdio.h>
void main()
{
    char name1[25];
    char name2[25];
    int age;
    char gender;
    long long contact;
    char title[4];
    int qualification;
    int a=0;
    printf("Please enter your first name- ");
    scanf("%s",name1);
    printf("Please enter your last name- ");
    scanf("%s",name2);
    printf("Age- ");
    scanf("%d",&age);
    printf("Gender(M/F)- ");
    scanf(" %c",&gender);
    printf("Please enter your contact number- ");
    scanf("%lld",&contact);
    if(gender=='M' || gender=='m')
    {
        snprintf(title,sizeof(title),"Mr.");
    }
    else
    {
        snprintf(title,sizeof(title),"Ms.");
    }
    while(a=0)
    {
        printf("Please enter your qualification:\nFor 10th pass press 1.\nFor 12th pass press 2.");
        scanf("%d",&qualification);
        switch(qualification)
        {
            case 1:
            a=1;
            break;
            case 2:
            a=2;
            break;
            default:
            printf("Please enter a valid response.");
        }
    }
