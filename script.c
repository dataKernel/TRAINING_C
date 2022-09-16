#include <stdio.h>
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     ft_check_nbr(int nbr, int indice_base)
{
    int     result;

    result = 1;
    while(nbr > 0)
    {
        result *= indice_base;
        nbr /= indice_base;
    }
    return(result / indice_base);
}

void    ft_putnbr_base(int nbr, char *base)
{
    int     check_base;
    int     power_nbr;
    int     indice;

    indice = 0;
    check_base = 0;
    while(base[check_base])
        check_base++;
    power_nbr = ft_check_nbr(nbr, check_base);
    while(power_nbr > 0)
    {
        indice = nbr / power_nbr % check_base;
        power_nbr /= check_base;
        ft_putchar(base[indice]);
    }
}

int     main(void)
{
    ft_putnbr_base(123, "01");
    return(0);
}
