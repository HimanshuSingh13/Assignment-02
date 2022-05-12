#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char letter;
cout<<endl<<"Enter a char:";
cin>>letter;
if((letter>='A') && (letter<='Z'))
{
cout<<endl<<"The entered char is in upper case.";
}
else
{
if((letter>='a') && (letter<='z'))
{
cout<<endl<<"The entered char is in lower case.";
}
else
{
cout<<endl<<"The entered char is numerical.";
}}
getch();
}