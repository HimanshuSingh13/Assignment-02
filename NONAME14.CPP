#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i=1,j=1,k=1,sumf=0,countf=0,sumw=0,countw=0,sumd=0,countd=0;
for(i=1;i<=10;i++)
{
sumf=sumf+i;
countf++;
}
cout<<endl<<"Sum= "<<sumf;
cout<<endl<<"Average= "<<(sumf/countf);
cout<<endl<<"**********************************************";
while(j<=10)
{
sumw =sumw+j;
countw++ ;
j++;
}
cout<<endl<<"Sum= "<<sumw;
cout<<endl<<"Average= "<<(sumw/countw);
cout<<endl<<"**********************************************";
do
{
sumd =sumd+k;
countd++ ;
k++;
}
while(k<=10);
cout<<endl<<"Sum= "<<sumd;
cout<<endl<<"Average= "<<(sumd/countd);
cout<<endl<<"**********************************************";
getch();
}