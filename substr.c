#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char*	ans;
	int		l;
	int		ct;

	l = ft_min(ft_strlen(s) - start, len);
	if (l < 0 || !(ans = (char*)malloc((l + 1) * sizeof(char))) || !s)
		return (NULL);
	ct = -1;
	while (++ct < l)
		ans[ct] = s[start + ct];
	ans[ct] = '\0';
	return (ans);
}
