#include<stdio.h>
int main(){
	int a,b,temp;
	printf("enter two number:");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("after swapping: a=%d,b=%d",a,b);
	return 0;
}
