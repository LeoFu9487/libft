#include "libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;

	i = ft_min(ft_strlen(s1), n - 1);
	j = i;
	while (i < n - 1 && s2[i - j] != '\0')
	{
		s1[i] = s2[i - j];
		i++;
	}
	if (j < n)
		s1[i] = '\0';
	return (j + ft_strlen(s2));
}
