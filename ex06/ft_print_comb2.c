#include <unistd.h>

void ft_print_comb2(void)
{
    char a[7];
    a[2] = ' ';
    a[5] = ',';
    a[6] = ' ';

    for(char i = 0; i < 98; i++)
    {
        a[0] = '0' + i / 10;
        a[1] = '0' + i % 10;
        for(char j = i + 1; j < 100; j++)
        {
            a[3] = '0' + j / 10;
            a[4] = '0' + j % 10;
            write(1, &a, 7);
        }
    }

    write(1, "98 99\n", 6);
}