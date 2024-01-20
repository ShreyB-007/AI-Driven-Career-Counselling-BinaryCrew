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
    char key;
    char b;
    int priority[6];
    char M=0,MS=0,NM=0,NMS=0,CM=0,CMS=0,C=0,CS=0,H=0,HS=0,BE=0,BES=0;
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
    while(a==0)
    {
        printf("Please enter your qualification:\nFor 10th pass press 1.\nFor 12th pass press 2.\n");
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
            break;
        }
    }
    if(a==1)
    {
        printf("Do you have a predetermined list of priorities for the academic streams in mind?(Y/N) ");
        scanf("%s",&b);
        if(b=='Y')
        {
            printf("Non-medical: 1\nMedical: 2\nBioengineering: 3\nCommerce with maths: 4\nCommerce w/o maths: 5\nHumanities: 6\nPlease enter the order of your priorities as per your comfort:");
            for(int i=0;i<6;i++)
            {
                scanf("%d",&priority[i]);
            }
        }
        printf("Alright %s %s, now we will ask you a series of questions to assess your interests, skills and hobbies that will help us in providing you the best possible councelling based on your needs.\nPlease enter any key to continue.",title,name1);
        scanf("%s",&key);
        printf("Are you interested in testing the quality of machinery parts before shipment?(Y/N)");
        scanf("%s",&NM);
        if(NM=='Y')
        {
            NMS+=1;
            NM=0;
        }
        else
        {
            NM=0;
        }
        printf("Are you interested in engaging in on-site work?(Y/N)");
        scanf("%s",&NM);
        if(NM=='Y')
        {
            NMS+=1;
            NM=0;
        }
        else
        {
            NM=0;
        }
        printf("Do you have an interest in putting together electronic elements?(Y/N)");
        scanf("%s",&NM);
        if(NM=='Y')
        {
            NMS+=1;
            NM=0;
        }
        else
        {
            NM=0;
        }
        printf("Do you have an interest in operating machinery within factory settings?(Y/N)");
        scanf("%s",&NM);
        if(NM=='Y')
        {
            NMS+=1;
            NM=0;
        }
        else
        {
            NM=0;
        }
        printf("Do you have an interest in computing and recording statistical data?(Y/N)");
        scanf("%s",&NM);
        if(NM=='Y')
        {
            NMS+=1;
            NM=0;
        }
        else
        {
            NM=0;
        }
        printf("Have you ever considered going into the intricacies of human development?(Y/N)");
        scanf("%s",&M);
        if(M=='Y')
        {
            MS+=1;
            M=0;
        }
        else
        {
            M=0;
        }
        printf("Are you interested in conducting research on animal behavior?(Y/N)");
        scanf("%s",&M);
        if(M=='Y')
        {
            MS+=1;
            M=0;
        }
        else
        {
            M=0;
        }
        printf("Are you keen on exploring the development of a novel medical treatment?(Y/N)");
        scanf("%s",&M);
        if(M=='Y')
        {
            MS+=1;
            M=0;
        }
        else
        {
            M=0;
        }
        printf("Are you interested in engaging in biological research?(Y/N)");
        scanf("%s",&M);
        if(M=='Y')
        {
            MS+=1;
            M=0;
        }
        else
        {
            M=0;
        }
        printf("Are you interested in assisting people with mental health challenges?(Y/N)");
        scanf("%s",&M);
        if(M=='Y')
        {
            MS+=1;
            M=0;
        }
        else
        {
            M=0;
        }
        printf("Do you have an interest in managing customer bank transactions?(Y/N)");
        scanf("%s",&CM);
        if(CM=='Y')
        {
            CMS+=1;
            CM=0;
        }
        else
        {
            CM=0;
        }
        printf("Do you have an interest in maintaining employee records?(Y/N)");
        scanf("%s",&CM);
        if(CM=='Y')
        {
            CMS+=1;
            CM=0;
        }
        else
        {
            CM=0;
        }
        printf("Do you have an interest in assisting people with financial management?(Y/N)");
        scanf("%s",&CM);
        if(CM=='Y')
        {
            CMS+=1;
            CM=0;
        }
        else
        {
            CM=0;
        }
        printf("Do you have an interest in aiding companies in identifying financial issues?(Y/N)");
        scanf("%s",&CM);
        if(CM=='Y')
        {
            CMS+=1;
            CM=0;
        }
        else
        {
            CM=0;
        }
        printf("Are you interested in collecting survey data and analyzing it?(Y/N)");
        scanf("%s",&CM);
        if(CM=='Y')
        {
            CMS+=1;
            CM=0;
        }
        else
        {
            CM=0;
        }
        printf("Do you have an interest in managing a shop?(Y/N)");
        scanf("%s",&C);
        if(C=='Y')
        {
            CS+=1;
            C=0;
        }
        else
        {
            C=0;
        }
        printf("Do you have an interest in managing heavy maintenance departments?(Y/N)");
        scanf("%s",&C);
        if(C=='Y')
        {
            CS+=1;
            C=0;
        }
        else
        {
            C=0;
        }
        printf("Do you have an interest in overseeing the operations of a hotel?(Y/N)");
        scanf("%s",&C);
        if(C=='Y')
        {
            CS+=1;
            C=0;
        }
        else
        {
            C=0;
        }
        printf("Do you have an interest in taking on the role of a company secretary?(Y/N)");
        scanf("%s",&C);
        if(C=='Y')
        {
            CS+=1;
            C=0;
        }
        else
        {
            C=0;
        }
        printf("Do you have an interest in managing the online presence of your company?(Y/N)");
        scanf("%s",&C);
        if(C=='Y')
        {
            CS+=1;
            C=0;
        }
        else
        {
            C=0;
        }
        printf("Do you possess strong problem-solving skills?(Y/N)");
        scanf("%s",&H);
        if(H=='Y')
        {
            HS+=1;
            H=0;
        }
        else
        {
            H=0;
        }
        printf("Are you interested in interpreting evidence from texts, artifacts, and other materials spanning different time periods?(Y/N)");
        scanf("%s",&H);
        if(H=='Y')
        {
            HS+=1;
            H=0;
        }
        else
        {
            H=0;
        }
        printf("Do you have an interest in studying past events?(Y/N)");
        scanf("%s",&H);
        if(H=='Y')
        {
            HS+=1;
            H=0;
        }
        else
        {
            H=0;
        }
        printf("Are you interested in sharing pertinent information with a broad audience via television, radio, or newspapers?(Y/N)");
        scanf("%s",&H);
        if(H=='Y')
        {
            HS+=1;
            H=0;
        }
        else
        {
            H=0;
        }
        printf("Do you have an interest in acquiring knowledge of new languages?(Y/N)");
        scanf("%s",&H);
        if(H=='Y')
        {
            HS+=1;
            H=0;
        }
        else
        {
            H=0;
        }
        printf("Are you interested in analyzing crime scenes for the presence of fingerprints?(Y/N)");
        scanf("%s",&BE);
        if(BE=='Y')
        {
            BES+=1;
            BE=0;
        }
        else
        {
            BE=0;
        }
        printf("Do you have interest in pursuing a career in research field?(Y/N)");
        scanf("%s",&BE);
        if(BE=='Y')
        {
            BES+=1;
            BE=0;
        }
        else
        {
            BE=0;
        }
        printf("Do you have a natural curiosity for both the physical and life sciences in your academic pursuits?(Y/N)");
        scanf("%s",&BE);
        if(BE=='Y')
        {
            BES+=1;
            BE=0;
        }
        else
        {
            BE=0;
        }
        printf("Are you intrigued by the study of viruses, cells, and various chemical substances?(Y/N)");
        scanf("%s",&BE);
        if(BE=='Y')
        {
            BES+=1;
            BE=0;
        }
        else
        {
            BE=0;
        }
        printf("Are you drawn to academic disciplines that encompass a combination of mathematical and scientific principles?(Y/N)");
        scanf("%s",&BE);
        if(BE=='Y')
        {
            BES+=1;
            BE=0;
        }
        else
        {
            BE=0;
        }
        printf("We are glad to inform you that the survey is over now. Thank you for your cooperation. Press any key for the results.");
        scanf("%s",&key);
        if(b=='Y')
        {
        printf("Given your priority list at the start of the survey and the questions you answered during your survey, we have concluded that:");
        }
    }
}
