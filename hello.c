#include <stdio.h>

int main() {
    printf("My Name is Jency\n"); 
    int age = 18;
    printf("My age is :%d\n", age);
    float pi = 3.14;
    printf("value of pi is :%f\n", pi);
    char star = '*';
    printf("Star is %c\n", star);
    int number;
    printf("Enter a number\n");
    scanf("%d", &number);
    printf("number is : %d\n", number);
    int a,b;
    printf("enter a");
    scanf("%d", &a);
    
    printf("enter b");
    scanf("%d", &b);

    int sum = a + b;
    printf("Sum is : %d\n", sum);

    //Area of square
    int side;
    printf(" Enter side of square\n");
    scanf("%d", &side);

    printf("area is : %d\n", side * side);
return 0;
}