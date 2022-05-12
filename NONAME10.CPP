#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
float class_held,class_attended;
float per;
cout<<endl<<"Enter no of classes held:";
cin>>class_held;
cout<<endl<<"Enter no of classes attended:";
cin>>class_attended;
per=((class_attended/class_held)*100);
cout<<endl<<"your attendance percentage is:"<<per;
if(per>=75)
{
cout<<endl<<"Cong you are allowed to sit in exam.";
}
else
{
cout<<endl<<"Sorry due to less attendance you are not allowed to sit in exam.";
}
getch();
}
