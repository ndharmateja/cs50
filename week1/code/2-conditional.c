#include <stdio.h>
#include <cs50.h>

int main(int argc, char const *argv[])
{
    int x = get_int("Enter x: ");
    int y = get_int("Enter y: ");
    if (x < y)
    {
        printf("x < y\n");
    }
    else if (x > y)
    {
        printf("x > y\n");
    }
    else
    {
        printf("x = y\n");
    }
    return 0;
}
