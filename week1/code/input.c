#include <cs50.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    string answer = get_string("what is your name? ");
    printf("You entered %s.\n", answer);
    return 0;
}
