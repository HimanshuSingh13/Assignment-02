#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int qty;
cout<<endl<<"Enter the no of units purchased:";
cin>>qty;
if((qty*100)>=10000)
{
cout<<endl<<"Hurray you recived discount of 10%";
cout<<endl<<"original amount to be paid:"<<((qty*100)-((qty*100)*0.1));
}
else
cout<<endl<<"original amount to be paid:"<<(qty*100);
getch();
}