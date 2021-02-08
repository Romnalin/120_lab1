#include <stdio.h>
int main ()
{
 float time,x;
 scanf("%f",&time);

 if (time<12)
 {
 printf("%.2f a.m.",time);
 }
 else if (time>12)
 {
 printf("%.2f p.m.",time-12);
 }
 else if (time==12)
 {
 printf("%.2f p.m.",time);
 }
 return 0 ;
}
