#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a;
	scanf("%d",&a);
	if (a==1)
	{
	  system("shutdown -a");
	} 
	else
	{
	   system("shutdown -s -t 5");
}   
    return 0;
	}
	  