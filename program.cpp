#include<iostream.h>
#include<stdlib.h>
int main()
{
system("cls");
int i,num,fact=1;
cout<<"\n enter integer :";
cin>>num;
i=num;
while(num)
{
fact*=num;
--num;
}
cout<<"the factorial of"<<i<<"is"<<fact<<"\n";
return 0;
}
