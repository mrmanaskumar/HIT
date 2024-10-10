//To find area and perimeter of square.
#include <stdio.h>
int main()
{
    int a,area,perimeter;
    printf("Enter the value of side of a suare: ");
    scanf("%d",&a);
    area=a*a;
    perimeter=4*a;
    printf("area of square=%d",area);
    printf("\nperimeter of square=%d",perimeter);
}
git init
git commit -m "first commit"
git branch -M main
git remote add origin https://github.com/mrmanaskumar/HIT.git
git push -u origin main