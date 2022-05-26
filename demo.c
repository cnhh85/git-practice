#include <stdio.h>

void f2()
{
    int a, b;
    printf("Dien 2 so: ");
    scanf("%d%d", &a, &b);
    printf("a + b = %d \n", a + b);
}

int main()
{
    printf("Hello F-Code:\n");
    // f1();
    f2();
    // f3();
    // f4();
    return 0;
}