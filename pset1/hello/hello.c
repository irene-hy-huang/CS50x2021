#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Ask user name, and print out hello with user name
    string name = get_string("What is your name?\n");
    printf("hello, %s\n", name);
}