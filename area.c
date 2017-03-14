#include<stdio.h>
struct rectangle 
{
	float length;
	float breadth;
};
void drawrectangle(struct rectangle r)
{
   for (int i=0;i<r.length;i++)
   {
	   printf("*");
   }
   printf("\n");
   
   for (int j=0;j<r.breadth-2;j++)
   {
   printf("*");
   }
   printf("\n");
   
   for (int i=0;i<r.length-2;i++)
   {
	   printf("   ");
   }
   printf("*\n");
   for (int i=0;i<r.length;i++)
   {
	   printf("*");
   }
   printf("\n");
}
   
   int main()
   {
   struct rectangle r={4,4};
   drawrectangle(r);
   return 0;
}
 
   


	

