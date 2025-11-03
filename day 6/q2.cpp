#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter three number:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>=b && a>=c)
	printf("greatest = %d\n",a);
	else if(b>=a && b>=c)
	printf("greatest = %d\n",b);
	else
	printf("greatest = %d\n",c);
	
	if(a<=b && b<=c)
	printf("smallest = %d\n",a);
	else if(b<=a && b<=c)
	printf("smallest = %d\n",b);
	else
	printf("smallest = %d\n",c);
	return 0;
}
