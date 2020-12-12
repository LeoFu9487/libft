#include "libft.h"

void			*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int	i;

	i = -1;
	while (++i < n)
	{
		*(char*)(dest + i) = *(char*)(src + i);
		if (*(int*)(src + i) == c)
			return (dest + i + 1);
	}
	return (NULL);
}
