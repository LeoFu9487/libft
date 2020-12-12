#include "libft.h"

void			*ft_memcpy(void *destination, const void *source, size_t size)
{
	int	i;

	i = -1;
	while (++i < size)
		*(char*)(destination + i) = *(char*)(source + i);
	return (destination);
}
