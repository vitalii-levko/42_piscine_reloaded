/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlevko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 14:57:18 by vlevko            #+#    #+#             */
/*   Updated: 2017/11/02 15:12:25 by vlevko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void	ft_strswap(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

int		main(int ac, char *av[])
{
	int i;
	int j;

	i = 1;
	j = ac;
	if (ac < 2)
		return (0);
	if (ac > 2)
	{
		while (ac > 2)
		{
			i = 1;
			while (i < ac - 1)
			{
				if (ft_strcmp(av[i], av[ac - 1]) < 0)
					ft_strswap(&av[i], &av[ac - 1]);
				i++;
			}
			ac--;
			ft_putstr(av[ac]);
		}
	}
	ft_putstr(av[1]);
	return (0);
}
