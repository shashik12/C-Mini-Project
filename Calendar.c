Shashi Darling, [30/06/22 5:58 PM]
#include <stdio.h> 
#include <stdlib.h> 
 
int year,n,add,num,del,y,ask; 
char a[100],b[100],c[100],d[100],e[100],f[100],g[100],h[100],i[100],j[100],k[100],note[100]; 
 
struct date 
{ 
    int dd,mm,yyyy; 
}z[11]; 
int get_1st_weekday(int year) 
{ 
    int d; 
    d = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7; 
    return d; 
} 
void print_year_calender() 
{ 
    int month,day,daysinmonth,weekDay=0,startingday; 
 
    char *months[] = {"January","February","March","April","May","June","July","August","September","October","November","December"}; 
    int lastday[] = {31,28,31,30,31,30,31,31,30,31,30,31}; 
 
    if((year%4==0 && year%100!=0) || year%400==0) 
        lastday[1] = 29; 
 
    startingday=get_1st_weekday(year); 
 
    for(month=0;month<12;month++) 
    { 
        daysinmonth = lastday[month]; 
        printf("\n\n  ----------------------------------\n"); 
        printf("               %s                   \n",months[month]); 
        printf("  ----------------------------------\n"); //for displaying month 
        printf("\n   Sun  Mon  Tue  Wed  Thu  Fri  Sat\n"); 
 
        for(weekDay=0;weekDay<startingday;weekDay++) 
            printf("     "); 
 
        for(day=1;day<=daysinmonth;day++) 
        { 
            printf("%5d",day); 
 
            if(++weekDay>6) 
            { 
                printf("\n"); 
                weekDay=0; 
            } 
            startingday=weekDay; 
        } 
    } 
    printf("\n\n Main Festivals in a year:\n"); 
    printf("----------------------\n"); 
    printf(" January\n 1st-New Year\n 26th-Republic Day\n"); 
    printf("----------------------\n"); 
    printf(" April\n 15th-Good friday\n"); 
    printf("----------------------\n"); 
    printf(" August\n 14th-Ambedkar Jayanti\n 15th-Independence Day\n"); 
    printf("----------------------\n"); 
    printf(" September\n 8th-Onam\n"); 
    printf("----------------------\n"); 
    printf(" October\n 2nd-Gandhi Jayanti\n"); 
    printf("----------------------\n"); 
    printf(" November\n 8th-Guru Nanak Jayanti\n"); 
    printf("----------------------\n"); 
    printf(" December\n 25th-Christmas\n"); 
    printf("\n\n**********"); 
} 
void print_month_calender() 
{ 
    int month1; 
    printf("\n\n*** MONTH CALENDAR ***"); 
    printf("\n\nEnter 1 for Jan, 2 for feb........12 for dec"); 
    printf("\nEnter the month: "); 
    scanf("%d",&month1); 
    int month,day, daysinmonth, weekDay = 0, startingday; 
 
    char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"}; 
    int lastday[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
 
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) 
        lastday[1] = 29; 
 
    startingday = get_1st_weekday(year); 
 
    for(month=0;month<12;month++) 
    { 
        if(month1==month+1) 
        { 
            daysinmonth=lastday[month]; 
            printf("\n\n  ----------------------------------\n"); 
            printf("               %s                   \n",months[month]); 
            printf("  ----------------------------------\n"); //for displaying month 
            printf("\n   Sun  Mon  Tue  Wed  Thu  Fri  Sat\n"); 
 
            for(weekDay=0;weekDay<startingday;weekDay++) 
            printf("     "); 
 
            for(day=1;day<=daysinmonth;day++) 
            { 
                printf("%5d",day); 
 
                if(++weekDay>6) 
                { 
                    printf("\n"); 
                    weekDay=0; 
                } 
                startingday=weekDay; 
            } 
        } 
        else 
        { 
            daysinmonth=lastday[month]; 
            for(weekDay=0;weekDay<startingday;weekDay++)

Shashi Darling, [30/06/22 5:58 PM]
{ 
                // printf("     "); 
            } 
            for(day=1;day<=daysinmonth;day++) 
            { 
                if (++weekDay > 6) 
                { 
                    weekDay = 0; 
                } 
                startingday = weekDay; 
            } 
        } 
    } 
    printf("\n\n**********"); 
} 
void firstnote() 
{ 
    printf("\nPlease enter a valid date"); 
    printf("\nEnter the date(dd mm yyyy): "); 
    scanf("%d %d %d",&z[10].dd,&z[10].mm,&z[10].yyyy); 
    printf("\nEnter note: "); 
    scanf("\n"); 
    scanf("%[^\n]%*c",k); 
    printf("%d-%d-%d | Note is %s",z[10].dd,z[10].mm,z[10].yyyy,k); 
    takenote(); 
} 
void takenote() 
{ 
    printf("\n\nDo u want to replace, delete or add a new note, If yes enter 1 or enter any other number: "); 
    scanf("%d",&ask); 
    if(ask==1) 
    { 
        askinginput(); 
    } 
} 
void askinginput() 
{ 
    printf("\n\n******************"); 
    printf("\nYou have 10 note slots to choose from and please enter valid date"); 
    printf("\nEnter 1 replace a note, 2 to delete a note, 3 to add a note, 4 if no: "); 
    scanf("%d",&n); 
    switch(n) 
    { 
        case 1://for replacing 
        printf("\nIf you want to replace the very first note, then press 0"); 
        printf("\nEnter the number of note that u want to replace: "); 
        scanf("%d",&num); 
        printf("\nEnter the note that you want to replace: "); 
        scanf("\n"); 
        scanf("%[^\n]%*c",note); 
            switch(num) 
            { 
                case 0: 
                if(strlen(k)!= 0) 
                { 
                    printf("Enter the date(dd mm yyyy): "); 
                    scanf("%d %d %d",&z[10].dd,&z[10].mm,&z[10].yyyy); 
                    strcpy(k,note); 
                    printf("%d-%d-%d | First Note is %s",z[10].dd,z[10].mm,z[10].yyyy,k); 
                    takenote(); 
                } 
                else 
                { 
                    printf("\nThere is no note to replace"); 
                    takenote(); 
                } 
 
                case 1: 
                if(strlen(a)!= 0) 
                { 
                    printf("Enter the date(dd mm yyyy): "); 
                    scanf("%d %d %d",&z[0].dd,&z[0].mm,&z[0].yyyy); 
                    strcpy(a,note); 
                    printf("%d-%d-%d | Note 1 is %s",z[0].dd,z[0].mm,z[0].yyyy,a); 
                    takenote(); 
                } 
                else 
                { 
                    printf("\nThere is no note to replace"); 
                    takenote(); 
                } 
                break; 
 
                case 2: 
                if(strlen(b)!= 0) 
                { 
                    printf("Enter the date(dd mm yyyy): "); 
                    scanf("%d %d %d",&z[1].dd,&z[1].mm,&z[1].yyyy); 
                    strcpy(b,note); 
                    printf("%d-%d-%d | Note 2 is %s",z[1].dd,z[1].mm,z[1].yyyy,b); 
                    takenote(); 
                } 
                else 
                { 
                    printf("\nThere is no note to replace"); 
                    takenote(); 
                } 
                break; 
 
                case 3: 
                if(strlen(c)!= 0) 
                { 
                    printf("Enter the date(dd mm yyyy): "); 
                    scanf("%d %d %d",&z[2].dd,&z[2].mm,&z[2].yyyy); 
                    strcpy(c,note); 
                    printf("%d-%d-%d | Note 3 is %s",z[2].dd,z[2].mm,z[2].yyyy,c); 
                    takenote(); 
                } 
                else 
                { 
                    printf("\nThere is no note to replace");

Shashi Darling, [30/06/22 5:58 PM]
takenote(); 
                } 
                break; 
 
                case 4: 
                if(strlen(d)!= 0) 
                { 
                    printf("Enter the date(dd mm yyyy): "); 
                    scanf("%d %d %d",&z[3].dd,&z[3].mm,&z[3].yyyy); 
                    strcpy(d,note); 
                    printf("%d-%d-%d | Note 4 is %s",z[3].dd,z[3].mm,z[3].yyyy,d); 
                    takenote(); 
                } 
                else 
                { 
                    printf("\nThere is no note to replace"); 
                    takenote(); 
                } 
                break; 
 
                case 5: 
                if(strlen(e)!= 0) 
                { 
                    printf("Enter the date(dd mm yyyy): "); 
                    scanf("%d %d %d",&z[4].dd,&z[4].mm,&z[4].yyyy); 
                    strcpy(e,note); 
                    printf("%d-%d-%d | Note 5 is %s",z[4].dd,z[4].mm,z[4].yyyy,e); 
                    takenote(); 
                } 
                else 
                { 
                    printf("\nThere is no note to replace"); 
                    takenote(); 
                } 
                break; 
 
                case 6: 
                if(strlen(f)!= 0) 
                { 
                    printf("Enter the date(dd mm yyyy): "); 
                    scanf("%d %d %d",&z[5].dd,&z[5].mm,&z[5].yyyy); 
                    strcpy(f,note); 
                    printf("%d-%d-%d | Note 6 is %s",z[5].dd,z[5].mm,z[5].yyyy,f); 
                    takenote(); 
                } 
                else 
                { 
                    printf("\nThere is no note to replace"); 
                    takenote(); 
                } 
                break; 
 
                case 7: 
                if(strlen(g)!= 0) 
                { 
                    printf("Enter the date(dd mm yyyy): "); 
                    scanf("%d %d %d",&z[6].dd,&z[6].mm,&z[6].yyyy); 
                    strcpy(g,note); 
                    printf("%d-%d-%d | Note 7 is %s",z[6].dd,z[6].mm,z[6].yyyy,g); 
                    takenote(); 
                } 
                else 
                { 
                    printf("\nThere is no note to replace"); 
                    takenote(); 
                } 
                break; 
 
                case 8: 
                if(strlen(h)!= 0) 
                { 
                    printf("Enter the date(dd mm yyyy): "); 
                    scanf("%d %d %d",&z[7].dd,&z[7].mm,&z[7].yyyy); 
                    strcpy(h,note); 
                    printf("%d-%d-%d | Note  is %s",z[7].dd,z[7].mm,z[7].yyyy,h); 
                    takenote(); 
                } 
                else 
                { 
                    printf("\nThere is no note to replace"); 
                    takenote(); 
                } 
                break; 
 
                case 9: 
                if(strlen(i)!= 0) 
                { 
                    printf("Enter the date(dd mm yyyy): "); 
                    scanf("%d %d %d",&z[8].dd,&z[8].mm,&z[8].yyyy); 
                    strcpy(i,note); 
                    printf("%d-%d-%d | Note 9 is %s",z[8].dd,z[8].mm,z[8].yyyy,i); 
                    takenote(); 
                } 
                else 
                { 
                    printf("\nThere is no note to replace"); 
                    takenote(); 
                } 
                break; 
 
                case 10: 
                if(strlen(j)!= 0) 
                { 
                    printf("Enter the date(dd mm yyyy): "); 
                    scanf("%d %d %d",&z[9].dd,&z[9].mm,&z[9].yyyy); 
                    strcpy(j,note); 
                    printf("%d-%d-%d | Note 10 is %s",z[9].dd,z[9].mm,z[9].yyyy,j); 
                    takenote();

Shashi Darling, [30/06/22 5:58 PM]
} 
                else 
                { 
                    printf("\nThere is no note to replace"); 
                    takenote(); 
                } 
                break; 
 
                default: 
                printf("There are only 10 note slots to choose from"); 
                takenote(); 
            } 
            break; 
 
        case 2://deleting a note 
        printf("\nIf you want to delete the very first note, then press 0"); 
        printf("\nEnter the number of the note that u want to delete: "); 
        scanf("%d",&del); 
            switch(del) 
            { 
                case 0: 
                if(strlen(k)!= 0) 
                { 
                    strcpy(k,""); 
                    printf("First Note is deleted"); 
                    takenote(); 
                } 
                else 
                { 
                    printf("There is no note to delete"); 
                    takenote(); 
                } 
                break; 
 
                case 1: 
                if(strlen(a)!= 0) 
                { 
                    strcpy(a,""); 
                    printf("Note 1 is deleted"); 
                    takenote(); 
                } 
                else 
                { 
                    printf("There is no note to delete"); 
                    takenote(); 
                } 
                break; 
 
                case 2: 
                if(strlen(b)!= 0) 
                { 
                    strcpy(b,""); 
                    printf("Note 2 is deleted"); 
                    takenote(); 
                } 
                else 
                { 
                    printf("There is no note to delete"); 
                    takenote(); 
                } 
                break; 
 
                case 3: 
                if(strlen(c)!= 0) 
                { 
                    strcpy(c,""); 
                    printf("Note 3 is deleted"); 
                    takenote(); 
                } 
                else 
                { 
                    printf("There is no note to delete"); 
                    takenote(); 
                } 
                break; 
 
                case 4: 
                if(strlen(d)!= 0) 
                { 
                    strcpy(d,""); 
                    printf("Note 4 is deleted"); 
                    takenote(); 
                } 
                else 
                { 
                    printf("There is no note to delete"); 
                    takenote(); 
                } 
                break; 
 
                case 5: 
                if(strlen(e)!= 0) 
                { 
                    strcpy(e,""); 
                    printf("Note 5 is deleted"); 
                    takenote(); 
                } 
                else 
                { 
                    printf("There is no note to delete"); 
                    takenote(); 
                } 
                break; 
 
                case 6: 
                if(strlen(f)!= 0) 
                { 
                    strcpy(f,""); 
                    printf("Note 6 is deleted"); 
                    takenote(); 
                } 
                else 
                { 
                    printf("There is no note to delete"); 
                    takenote(); 
                } 
                break; 
 
                case 7: 
                if(strlen(g)!= 0) 
                { 
                    strcpy(g,""); 
                    printf("Note 7 is deleted"); 
                    takenote(); 
                } 
                else 
                { 
                    printf("There is no note to delete"); 
                    takenote(); 
                } 
                break; 
 
                case 8:

Shashi Darling, [30/06/22 5:58 PM]
if(strlen(h)!= 0) 
                { 
                    strcpy(h,""); 
                    printf("Note 8 is deleted"); 
                    takenote(); 
                } 
                else 
                { 
                    printf("There is no note to delete"); 
                    takenote(); 
                } 
                break; 
 
                case 9: 
                if(strlen(i)!= 0) 
                { 
                    strcpy(i,""); 
                    printf("Note 9 is deleted"); 
                    takenote(); 
                } 
                else 
                { 
                    printf("There is no note to delete"); 
                    takenote(); 
                } 
                break; 
 
                case 10: 
                if(strlen(j)!= 0) 
                { 
                    strcpy(j,""); 
                    printf("Note 10 is deleted"); 
                    takenote(); 
                } 
                else 
                { 
                    printf("There is no note to delete"); 
                    takenote(); 
                } 
                break; 
 
                default: 
                printf("There are only 10 note slots to choose from"); 
                takenote(); 
            } 
            break; 
 
            case 3://adding a note 
            printf("Enter the number of note that u want to add: "); 
            scanf("%d",&add); 
            switch(add) 
            { 
                case 1: 
                if(strlen(a)!= 0) 
                { 
                    printf("\nThere's another note here."); 
                    takenote(); 
                } 
                else 
                { 
                    printf("Enter the date(dd mm yyyy): "); 
                    scanf("%d %d %d",&z[0].dd,&z[0].mm,&z[0].yyyy); 
                    printf("\nEnter note 1: "); 
                    scanf("\n"); 
                    scanf("%[^\n]%*c",a); 
                    printf("%d-%d-%d | Note 1 is %s",z[0].dd,z[0].mm,z[0].yyyy,a); 
                    takenote(); 
                } 
                break; 
 
                case 2: 
                if(strlen(b)!= 0) 
                { 
                    printf("\nThere's another note here."); 
                    takenote(); 
                } 
                else 
                { 
                    printf("Enter the date(dd mm yyyy): "); 
                    scanf("%d %d %d",&z[1].dd,&z[1].mm,&z[1].yyyy); 
                    printf("\nEnter note 2: "); 
                    scanf("\n"); 
                    scanf("%[^\n]%*c",b); 
                    printf("%d-%d-%d | Note 2 is %s",z[1].dd,z[1].mm,z[1].yyyy,b); 
                    takenote(); 
                } 
                break; 
 
                case 3: 
                if(strlen(c)!= 0) 
                { 
                    printf("\nThere's another note here."); 
                    takenote(); 
                } 
                else 
                { 
                    printf("Enter the date(dd mm yyyy): "); 
                    scanf("%d %d %d",&z[2].dd,&z[2].mm,&z[2].yyyy); 
                    printf("\nEnter note 3: "); 
                    scanf("\n"); 
                    scanf("%[^\n]%*c",c); 
                    printf("%d-%d-%d | Note 3 is %s",z[2].dd,z[2].mm,z[2].yyyy,c); 
                    takenote(); 
                } 
                break; 
 
                case 4: 
                if(strlen(d)!= 0) 
                { 
                    printf("\nThere's another note here."); 
                    takenote(); 
                } 
                else 
                { 
                    printf("Enter the date(dd mm yyyy): "); 
                    scanf("%d %d %d",&z[3].dd,&z[3].mm,&z[3].yyyy);

Shashi Darling, [30/06/22 5:58 PM]
printf("\nEnter note 4: "); 
                    scanf("\n"); 
                    scanf("%[^\n]%*c",d); 
                    printf("%d-%d-%d | Note 4 is %s",z[3].dd,z[3].mm,z[3].yyyy,d); 
                    takenote(); 
                } 
                break; 
 
                case 5: 
                if(strlen(e)!= 0) 
                { 
                    printf("\nThere's another note here."); 
                    takenote(); 
                } 
                else 
                { 
                    printf("Enter the date(dd mm yyyy): "); 
                    scanf("%d %d %d",&z[4].dd,&z[4].mm,&z[4].yyyy); 
                    printf("\nEnter note 5: "); 
                    scanf("\n"); 
                    scanf("%[^\n]%*c",e); 
                    printf("%d-%d-%d | Note 5 is %s",z[4].dd,z[4].mm,z[4].yyyy,e); 
                    takenote(); 
                } 
                break; 
 
                case 6: 
                if(strlen(f)!= 0) 
                { 
                    printf("\nThere's another note here."); 
                    takenote(); 
                } 
                else 
                { 
                    printf("Enter the date(dd mm yyyy): "); 
                    scanf("%d %d %d",&z[5].dd,&z[5].mm,&z[5].yyyy); 
                    printf("\nEnter note 6: "); 
                    scanf("\n"); 
                    scanf("%[^\n]%*c",f); 
                    printf("%d-%d-%d | Note 6 is %s",z[5].dd,z[5].mm,z[5].yyyy,f); 
                    takenote(); 
                } 
                break; 
 
                case 7: 
                if(strlen(g)!= 0) 
                { 
                    printf("\nThere's another note here."); 
                    takenote(); 
                } 
                else 
                { 
                    printf("Enter the date(dd mm yyyy): "); 
                    scanf("%d %d %d",&z[6].dd,&z[6].mm,&z[6].yyyy); 
                    printf("\nEnter note 7: "); 
                    scanf("\n"); 
                    scanf("%[^\n]%*c",g); 
                    printf("%d-%d-%d | Note 7 is %s",z[6].dd,z[6].mm,z[6].yyyy,g); 
                    takenote(); 
                } 
                break; 
 
                case 8: 
                if(strlen(h)!= 0) 
                { 
                    printf("\nThere's another note here."); 
                    takenote(); 
                } 
                else 
                { 
                    printf("Enter the date(dd mm yyyy): "); 
                    scanf("%d %d %d",&z[7].dd,&z[7].mm,&z[7].yyyy); 
                    printf("\nEnter note 8: "); 
                    scanf("\n"); 
                    scanf("%[^\n]%*c",h); 
                    printf("%d-%d-%d | Note 8 is %s",z[7].dd,z[7].mm,z[7].yyyy,h); 
                    takenote(); 
                } 
                break; 
 
                case 9: 
                if(strlen(i)!=0) 
                { 
                    printf("\nThere's another note here."); 
                    takenote(); 
                } 
                else 
                { 
                    printf("Enter the date(dd mm yyyy): "); 
                    scanf("%d %d %d",&z[8].dd,&z[8].mm,&z[8].yyyy); 
                    printf("\nEnter note 9: "); 
                    scanf("\n"); 
                    scanf("%[^\n]%*c",i); 
                    printf("%d-%d-%d | Note 9 is %s",z[8].dd,z[8].mm,z[8].yyyy,i); 
                    takenote(); 
                } 
                break; 
 
                case 10: 
                if(strlen(j)!= 0) 
                { 
                    printf("\nThere's another note here."); 
                    takenote(); 
                } 
                else 
                { 
                    printf("Enter the date(dd mm yyyy): ");

Shashi Darling, [30/06/22 5:58 PM]
scanf("%d %d %d",&z[9].dd,&z[9].mm,&z[9].yyyy); 
                    printf("\nEnter note 10: "); 
                    scanf("\n"); 
                    scanf("%[^\n]%*c",j); 
                    printf("%d-%d-%d | Note 10 is %s",z[9].dd,z[9].mm,z[9].yyyy,j); 
                    takenote(); 
                } 
                break; 
 
                default: 
                printf("There are only 10 note slots to choose from"); 
                takenote(); 
                break; 
            } 
            break; 
 
        case 4://if no 
        printf("\nIf there are any notes, they will be displayed now\n"); 
        break; 
        default://for the switch case which we have 4 options to choose from 
        printf("\nThere are only 4 options to choose from"); 
        takenote(); 
    } 
} 
void output() 
{ 
    printf("\n*************"); 
    if(strlen(k) !=0 ) 
    { 
        printf("\n%d-%d-%d | Note is %s",z[10].dd,z[10].mm,z[10].yyyy,k); 
    } 
    if(strlen(a) !=0 ) 
    { 
        printf("\n%d-%d-%d | Note 1 is %s",z[0].dd,z[0].mm,z[0].yyyy,a); 
    } 
    if(strlen(b) != 0) 
    { 
        printf("\n%d-%d-%d | Note 2 is %s",z[1].dd,z[1].mm,z[1].yyyy,b); 
    } 
    if(strlen(c) != 0) 
    { 
        printf("\n%d-%d-%d | Note 3 is %s",z[2].dd,z[2].mm,z[2].yyyy,c); 
    } 
    if(strlen(d) != 0) 
    { 
        printf("\n%d-%d-%d | Note 4 is %s",z[3].dd,z[3].mm,z[3].yyyy,d); 
    } 
    if(strlen(e) != 0) 
    { 
        printf("\n%d-%d-%d | Note 5 is %s",z[4].dd,z[4].mm,z[4].yyyy,e); 
    } 
    if(strlen(f) != 0) 
    { 
        printf("\n%d-%d-%d | Note 6 is %s",z[5].dd,z[5].mm,z[5].yyyy,f); 
    } 
    if(strlen(g) != 0) 
    { 
        printf("\n%d-%d-%d | Note 7 is %s",z[6].dd,z[6].mm,z[6].yyyy,g); 
    } 
    if(strlen(h) != 0) 
    { 
        printf("\n%d-%d-%d | Note 8 is %s",z[7].dd,z[7].mm,z[7].yyyy,h); 
    } 
    if(strlen(i) != 0) 
    { 
        printf("\n%d-%d-%d | Note 9 is %s",z[8].dd,z[8].mm,z[8].yyyy,i); 
    } 
    if(strlen(j) != 0) 
    { 
        printf("\n%d-%d-%d | Note 10 is %s",z[9].dd,z[9].mm,z[9].yyyy,j); 
    } 
    printf("\n*************"); 
} 
int main() 
{ 
    system("Color 3F"); 
    printf("**** YEAR CALENDAR ****"); 
    printf("\n\nEnter your desired year: "); 
    scanf("%d",&year); 
    print_year_calender(); 
    print_month_calender(); 
    printf("\n\n**** NOTE MAKING *****"); 
    printf("\n\nIf you want to add a note enter 1 or enter any number: "); 
    scanf("%d",&y); 
    if(y == 1) 
    { 
        firstnote(); 
        output(); 
    } 
    printf("\n----------------------------------------"); 
    printf("\n|               Thank you              |"); 
    printf("\n----------------------------------------"); 
    printf("\n"); 
}
