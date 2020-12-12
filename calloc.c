#include "libft.h"

void			*ft_calloc(size_t elementCount, size_t elementSize)
{
	void	*ans;
	int		i;

	ans = malloc(elementCount * elementSize);
	i = -1;
	while (++i < elementCount)
		*(int*)(ans + i) = 0;
	return (ans);
}
