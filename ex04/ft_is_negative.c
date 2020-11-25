#include <unistd.h>

void ft_is_negative(int n)
{
    char c = n < 0 ? 'N' : 'P';
    write(1, &c, 1);
}