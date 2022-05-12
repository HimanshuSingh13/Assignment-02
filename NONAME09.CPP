#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
float grading;
cout<<endl<<"Enter your grading;";
cin>>grading;
if(grading<25)
{
cout<<endl<<"F";
}
else
{
  if((grading>=25) && (grading<45))
  {
   cout<<endl<<"E";
  }
  else
  {
     if((grading>=45) && (grading<50))
     {
      cout<<endl<<"D";
      }
      else
      {
	if((grading>=50) && (grading<60))
	 {
	 cout<<endl<<"C";
	 }
	  else
	  {
	     if((grading>=60) && (grading<80))
	     {
	      cout<<endl<<"B";
	      }
	      else
	      {
	       cout<<endl<<"A";
	       }
	       }
	       }
	       }}
	       getch();
	       }



