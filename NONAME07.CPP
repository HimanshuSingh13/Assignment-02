#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
float length,breadth;
cout<<endl<<"enter the length of rectangle:";
cin>>length;
cout<<endl<<"enter the breadth of rectangle:";
cin>>breadth;
if(length==breadth)
{
cout<<"According to the given dim the following is a square";
}
else
{
cout<<"According to the given dim the following is not a square:";
}
getch();
}