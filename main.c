#include "./inc/ft_printf.h"
#include "ft_printf.c"

int            main(int ac, char **av)
{
	int				d = -2147483648;
	int				f = 30;
	char			c = 'a';
	char			*s = "salut je suis ben";
	int				x = -2554564;
	int				X = -2554564;
	unsigned int	u = 4294967294;
	int				i = 0;
	//printf("\n '0.10u' : mon  return = %d\n", ft_printf("\n%0.10u", u));
	//printf("\n '0.10u' : vrai return = %d\n", printf("\n%0.10u", u));
//	printf("| Return : %d", ft_printf("\n%x", x));
//  ft_printf("\n%100s", s);
//	printf("---------------------------------------------------------\n");
	printf("\ntrue = %d\n", printf("true = %-20p djghkdjhfk% 15d, %-50.20X\n", &d, x, X));
	printf("\ntrue = %d\n", printf("true = %-20p djghkdjhfk% 15d, %-50.20X\n", &d, x, X));
}