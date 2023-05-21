/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zekaya <zekaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 15:31:14 by zekaya            #+#    #+#             */
/*   Updated: 2023/05/18 15:31:19 by zekaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <unistd.h>
# include "ft_printf/ft_printf.h"

void	ft_shiftoperation(int pid, char c);
void	signal_handler(int signal);
int		ft_atoi(const char *str);

#endif