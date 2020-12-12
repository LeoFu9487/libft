#include "libft.h"

char			*ft_strdup(const char *source)
{
	char	*ans;
	int		len;
	int		i;

	len = ft_strlen(source);
	ans = (char*)malloc((len + 1) * sizeof(char));
	i = -1;
	while (++i < len)
		ans[i] = source[i];
	ans[i] = '\0';
	return (ans);
}
