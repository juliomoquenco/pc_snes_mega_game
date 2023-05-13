#include<stdio.h>
#include<string.h>

void write_on_display(char *message)
{
    printf("%s", message);
}
void new_line()
{
    printf("\n");
}

int main()
{
    write_on_display("Hello World!");
    new_line();
}