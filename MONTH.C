#include<stdio.h>
#include<conio.h>
main()
{
 int c ;
 clrscr();
 printf("press 1 for  month1\n");
 printf("press 2 for  month2\n");
 printf("press 3 for  month3\n");
 printf("press 4 for  month4\n");
 printf("press 5 for  month5\n");
 printf("press 6 for  month6\n");
 printf("press 7 for  month7\n");
 printf("press 8 for  month8\n");
 printf("press 9 for  month9\n");
 printf("press 10 For  month10\n");
 printf("press 11 for  montH11\n");
 printf("press 12 For  month12\n");
 printf("enter number between 1to12 for month=") ;
 scanf("%d",&c);
 switch(c)
 {
     case 1:
	    printf("january");
	    break;
     case 2:
	    printf("FEBRUARY");
	    break;
     case 3:
	    printf("MARCH");
	    break;
     case 4:
	    printf("APRIL");
	    break;
     case 5:
	    printf("MAY");
	    break;
     case 6:
	    printf("jUNE");
	    break;
     case 7:
	    printf("JULY");
	    break;
     case 8:
	    printf("AUGUST");
	    break;
     case 9:
	    printf("SEPTEMBER");
	    break;
     case 10:
	    printf("OCTOBER");
	    break;
     case 11:
	    printf("NOVEMBER");
	    break;
     case 12:
	    printf("DECEMBER");
	    break;
}
 getch();
 }