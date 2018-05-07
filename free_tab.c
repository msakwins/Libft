/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakwins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 20:02:54 by msakwins          #+#    #+#             */
/*   Updated: 2017/09/13 20:06:24 by msakwins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		free_tab(char **tab)
{
	int		i;

	i = 0;
	while (tab[i])
		ft_memdel((void **)&tab[i++]);
	ft_memdel((void **)&tab);
}