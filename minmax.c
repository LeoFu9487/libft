#include "libft.h"

int		ft_min(void* a, void* b)
{
	return ((int)a < (int)b ? a : b);
}

int		ft_max(void* a, void* b)
{
	return ((int)a > (int)b ? a : b);
}
