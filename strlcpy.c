#include "libft.h"

size_t			ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	i;

	i = -1;
	if (!dst || !src)
		return (0);
	while (src[++i] && size--)
		dst[i] = src[i];
	dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}
