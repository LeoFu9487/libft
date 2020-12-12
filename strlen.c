#include "libft.h"

size_t		ft_strlen(const char *s)
{
	return ((!s || *s == 0) ? 0 : 1 + ft_strlen(s + 1));
}
