#include "libft.h"

static int		g_nbr[10];

static int		ft_size(int n)
{
	int	ans;

	n = ft_abs(n);
	ans = 0;
	while (n > 0)
	{
		g_nbr[ans++] = n % 10;
		n /= 10;
	}
	return (ans);
}

static char*	ft_solve()
{
	char*	ans;
	char*	nbr;
	int		ct;

	nbr = "-217483648";
	ans = (char*)malloc(12 * sizeof(char));
	ct = -1;
	while (++ct < 12)
		ans[ct] = nbr[ct];
	return (ans);
}

char 			*ft_itoa(int n)
{
	char	*ans;
	int		ct[2];

	ans = NULL;
	if (n == -2147483648)
	{
		ans = ft_solve();
		return (ans);
	}
	if (!(ans = (char*)malloc(12 * sizeof(char))))
		return (NULL);
	ct[0] = 0;
	if (n == 0)
	{
		ans[0] = '0';
		ans[1] = '\0';
		return (ans);
	}
	if (n < 0)
		ans[ct[0]++] = '-';
	ct[1] = ft_size(n);
	while (--ct[1] >= 0)
		ans[ct[0]++] = '0' + g_nbr[ct[1]];
	return (ans);
}
