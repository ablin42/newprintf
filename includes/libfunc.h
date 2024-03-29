/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfunc.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablin <ablin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 01:12:47 by ablin             #+#    #+#             */
/*   Updated: 2018/09/30 20:08:27 by ablin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __LIBFUNC_H
# define __LIBFUNC_H
# include <unistd.h>
# include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len);
char	*ft_strcat(char *restrict s1, const char *restrict s2);
char				*ft_strncat(char *restrict s1, const char *restrict s2, size_t n);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
char				*ft_strtoupper(char *str);
char				*ft_itoa_base_u(uintmax_t n, int base);
char				*ft_itoa_base(unsigned int n, int base);
size_t				ft_strlen(const char *s);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strchr(const char *s, int c);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
int					ft_putwchar(wchar_t c);
int					ft_putwstr(wchar_t *str);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_toupper(int c);
#endif
