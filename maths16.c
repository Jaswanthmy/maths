/*PROGRAM FOR CALCULATIING AREA OF TRIANGLE USING COORDINATES*/
#include <stdio.h>

int main()
{
    printf("20BCS065  RAVI GOWRI JASWANTH\n\n");
    
    int x1, y1, x2, y2, x3, y3;
    float area;
    printf("Enter the coordinates of first vertex: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the coordinates of second vertex: ");
    scanf("%d %d", &x2, &y2);
    printf("Enter the coordinates of third vertex: ");
    scanf("%d %d", &x3, &y3);
    area = (x1 * (y2 - y3)) + (x2 * (y3 - y1)) + (x3 * (y1 - y2));
    area = area / 2;
    if(area<0)
    {
        area=-area;
    }
    printf("Area of triangle is %f\n", area);
}