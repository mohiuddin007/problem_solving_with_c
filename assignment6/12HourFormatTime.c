
/*
          Define a structure called, time which contains 3 members hour minute and second.
          Develop a program that would assign values to individual members and display time in 12-hour format.
*/
#include<stdio.h>
#include<conio.h>

struct time{
          int Hour;
          int Minute;
          int Second;
};

void main()

{

          struct time T;

          clrscr();

          false :

          printf("\nEnter the Hour:");

          scanf("%d",&T.Hour);

          if(T.Hour>24)

          {

                   printf("\nInvalid Hour !");

                   goto false ;

          }

          false1 :

          printf("\nEnter the Minute:");

          scanf("%d",&T.Minute);

          if(T.Minute>60)

          {

                   printf("\nInvalid Minute !");

                   goto false1 ;

          }

          false2 :

          printf("\nEnter the Second:");

          scanf("%d",&T.Second);

          if(T.Second>60)

          {

                   printf("\nInvalid Second !");

                   goto false2 ;

          }

          if(T.Hour<12)

          {

                   printf("\n%d:%d:%d A.M.\n",T.Hour,T.Minute,T.Second);

          }

          else if(T.Hour==12)

          {

                   printf("\n%d:%d:%d P.M.\n",T.Hour,T.Minute,T.Second);

          }

          else

          {

                   T.Hour = T.Hour-12;

                   printf("\n%d:%d:%d P.M.\n",T.Hour,T.Minute,T.Second);

          }

          getch();

}

