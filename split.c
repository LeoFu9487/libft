#include "libft.h"

static int		ft_cnt(char const *s, char c)
{
	int		ct[2];

	if (!s)
		return (-1);
	ct[0] = 0;
	ct[1] = 0;
	while (s[ct[0]])
	{
		while (s[ct[0]] && s[ct[0]] == c)
			ct[0]++;
		while (s[ct[0]] && s[ct[0]] != c)
			ct[0]++;
		if (s[ct[0]] == '\0')
			break;
		ct[1]++;
	}
	return (ct[1]);
}

static int		ft_cnt2(char *s, char c)
{
	
}

char			**ft_split(char const *s, char c)
{
	char	**ans;
	int		sz;
	int		ct[3];

	sz = ft_cnt(s,c);
	if (!(ans = (char**)malloc((sz + 1) * sizeof(char*)) || !s))
		return (NULL);
	ct[0] = 0;
	ct[1] = 0;
	while (s[ct[0]])
	{
		ct[2] = 0;
		while (s[ct[0]] && s[ct[0]] == c)
			ct[0]++;
		while (s[ct[0]] && s[ct[0]] != c)
		{
			ct[0]++;
			ct[2]++;
		}
		if (ct[2] > 0)
		{
			if (!(ans[ct[1]] = (char*)malloc((ct[2] + 1) * sizeof(char))))
				return (ans);
			ans[ct[1]++] = ft_substr(s, ct[0] - ct[2], ct[2] + 1);
		}
	}
	ans[ct[1]] = NULL;
	return (ans);
}