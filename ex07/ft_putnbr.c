#include <unistd.h>

void ft_putnbr(int nb)
{

    if (nb < 0)
    {
        char c = '-';
        write(1, &c, 1);
        nb = -nb;
    }

    int tmp = nb;
    int nb_figures = 0;
    while(tmp > 0)
    {
        tmp /= 10;
        nb_figures++;
    }

    for(int i=0; i < nb_figures; i++)
    {
        int tmp = nb;
        for(int j = i; j < nb_figures -1; j++)
            tmp /= 10;
        char c =  '0' + (tmp % 10);
        write(1, &c, 1);
    }
}

int main()
{
    ft_putnbr(42);
}