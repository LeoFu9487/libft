#include "libft.h"

char			*ft_strjoin(char const *s1, char const *s2)
{
	int		l;
	char	*str;

	l = ft_strlen(s1) + ft_strlen(s2);
	if (l < 0 || !(str = (char*)malloc((l + 1) * sizeof(char))) || !s1 || !s2)
		return (NULL);
	ft_strlcat(str, s1, ft_strlen(s1) + 1);
	ft_strlcat(str, s2, ft_strlen(s1)  + ft_strlen(s2) + 1);
	return (str);
}
