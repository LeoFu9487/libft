#include "libft.h"

static int		ft_len(char const *s1, char const *set)
{
	int		len[2];
	int		ct[3];

	len[0] = ft_strlen(s1);
	len[1] = ft_strlen(set);
	ct[1] = -1;
	ct[0] = 0;
	while (++ct[1] < len[0])
	{
		ct[2] = -1;
		while (++ct[2] < len[1])
			if (s1[ct[1]] == set[ct[2]])
			{
				ct[0]++;
				break;
			}
	}
	return (len[0] - ct[0]);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*ans;
	int		len[2];
	int		ct[3];

	len[0] = ft_len(s1,set);
	if (!(ans = (char*)malloc((len[0] + 1) * sizeof(char))) || !s1 || !set)
		return (NULL);
	ct[0] = -1;
	ct[2] = 0;
	len[1] = ft_strlen(set);
	while (++ct[0] < ft_strlen(s1))
	{
		ct[1] = -1;
		while (++ct[1] < len[1])
			if (s1[ct[0]] == set[ct[1]])
				break;
		if (ct[1] == len[1])
			ans[ct[2]++] = s1[ct[0]];
	}
	ans[ct[2]] = '\0';
	return (ans);
}
