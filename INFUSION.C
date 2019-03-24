#include<stdio.h>
#include<conio.h>
void main()
{
float cc,wgt,dose,ml;
/* cc=IV Rate(cc/Hr);  wgt=Body Weight(Kg);
   dose=Dose Available; ml=mL Available*/
float mghr,mchr;
/* mghr=Dose in Milligram per Hour*/
/*mchr=Dose(Answer) in Microgram per Hour*/
clrscr();
printf("Enter the IV Ratio (cc/Hr):\n");
scanf("%f",&cc);
printf("Enter the Body weight (Kg):\n");
scanf("%f",&wgt);
printf("Enter the Dose Available:\n");
scanf("%f",&dose);
printf("Enter the mL Available :\n");
scanf("%f",&ml);
mghr=(cc/ml)*dose;
mchr=(mghr*1000)/(60*wgt);     /*(mghr/60)*(1000/wgt);*/
printf("The Infusion Rate as Milligram per Hour is %f \n",mghr);
printf("The Infusion Rate as Microgram per Hour is %f \n",mchr);
getch();
}