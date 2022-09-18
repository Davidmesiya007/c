//calculate shapes area
#include<stdio.h>
int main()
{
int width,height,radius;
float a_circle,perimeter,circum,a_rectangle;
printf("\nEnter the width and height of the rectangle : ");
scanf("%d%d",&width,&height);
printf("\nEnter the radius of the circle");
scanf("%d",&radius);
a_circle=3.14*radius*radius;
a_rectangle=width*height;
perimeter=2*(width+height);
circum=2*3.14*radius;
printf("\nperimetre of the rectangle = %0.2f",perimeter);
printf("\narea of the rectangle = %0.2f",a_rectangle);
printf("\ncircumference of the circle = %0.2f",circum);
printf("\nArea of the circle = %0.2f",a_circle);

return 0;
}
