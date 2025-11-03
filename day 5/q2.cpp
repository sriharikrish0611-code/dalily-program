#include<stdio.h>
int main(){
	float length,breadth,side,base,height,radius;
	
	printf("enter length and breadth of rectangle:");
	scanf("%f%f",&length,&breadth);
	printf("area of rectangle = %.2f\n",length*breadth);
	
	printf("enter side of square:");
	scanf("%f",&side);
	printf("area of square = %.2f\n",side*side);
	
	printf("enter base and height of triangle:");
	scanf("%f%f",&base,&height);
	printf("area of triangle =%.2f\n",0.5*base*height);
	
	printf("enter radius of cricle:");
	scanf("%f",&radius);
	printf("area of cricle = %.2f\n",radius*radius);
	return 0;
}
