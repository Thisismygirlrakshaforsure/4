WAP to calculate area of rectangle using function.
#include 
Int area (void);
int main()
{   
	int a;
   	a = area();
	printf(“area is %d”,a);
   	return 0;
}
int area()
{   
	int l,b,ar;
   	printf(“Enter length and breadth”);
   	scanf(“%d%d”,&l,&b);
	ar = l*b
   	return ar;
}
