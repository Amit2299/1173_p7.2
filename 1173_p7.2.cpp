//Part II: Multiple Exception
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char a;
int b;
cout<<"Enter a character:";
cin>>a;
cout<<"Enter a value:";
cin>>b;
try
{
if(a=='d')
{
cout<<a;
}
else
{
throw a;
}
if(b=='5')
{
cout<<b;
}
else
{
throw b;
}
}
catch(inti)
{
cout<<"Value of Integer is:"<<i;
}
catch(char h)
{
cout<<"Character is:"<<h;
}
getch();
}
