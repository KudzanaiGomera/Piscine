#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    int i;
    i = 0;
    if (argc != 2)
        ft_putchar('\n');
    else
    {
        while(argv[1][i] == '\t' || argv[1][i] == 32)
            i++;
        while(argv[1][i] != '\t' && argv[1][i] != 32 && argv[1][i] != '\0')
        {
            ft_putchar(argv[1][i]);
            i++;
        }
        ft_putchar('\n');
    }
    return(0);
}