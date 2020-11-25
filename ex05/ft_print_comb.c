#include <unistd.h>

void ft_print_comb(void)
{
    char a[5];
    a[3] = ',';
    a[4] = ' ';

    for(char i = 0; i < 7; i++)
    {
        a[0] = '0' + i;
        for(char j = i + 1; j < 10; j++)
        {
            a[1] = '0' + j;
            for (char k = j + 1; k < 10; k++)
            {
                a[2] = '0' + k;
                write(1, &a, 5);
            }
        }
    }

    write(1, "789\n", 4);
}