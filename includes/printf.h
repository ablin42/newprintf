/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablin <ablin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 01:13:03 by ablin             #+#    #+#             */
/*   Updated: 2018/09/30 23:02:51 by ablin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libfunc.h"
# include <stdarg.h>

# define C { "c%", pf_c_padding }
# define CC { "C", pf_print_wchar }
# define S { "s", pf_str_handler }
# define SS { "S", pf_print_wstr }
# define INT { "dDi", pf_int_handler }
# define HEX { "oOuUxXp", pf_hex_handler }

#include <stdio.h>

# define BUFF_SIZE 1000

typedef enum		e_mod
{
	NONE = 0, HH = 1, H = 2, L = 3, LL = 4, J = 5, Z = 6
}					t_mod;

typedef struct		s_arg
{
	char			buff[BUFF_SIZE];
	int				htag;
	int				ztag;
	int				mtag;
	int				ptag;
	int				stag;
	int				ispreci;
	int				preci;
	int				width;
	int				base;
	char			flag;
	t_mod			mod;
}					t_arg;

typedef struct		s_fun
{
	char			*conv;
	void			(*handler)(char *, t_arg, int *, va_list);
}					t_fun;

/*
** ft_printf.c
*/
int					ft_printf(const char *restrict format, ...);
void				pf_get_handler(char *buf, t_arg lst, int *retour, va_list ap);

/*
** fill_list.c
*/
int					pf_handle_exc(char *twflag, char *wflag, char flag);
int					pf_cycle_format(t_arg **lst, char *format, va_list ap);

/*
** padding.c
*/
int					pf_flag_exc(char flag);
int					pf_blank_and_sign(char *buf, t_arg lst, uintmax_t size, int signe,
					int toprint);
int					pf_precision_and_zero(char *buf, t_arg lst, uintmax_t size, int signe);
void				pf_minus_flag(char *buf, t_arg lst, int toprint, int signe);

/*
** length_handler.c
*/
intmax_t			pf_handle_length(t_arg lst, va_list ap);
uintmax_t			pf_handle_ulength(t_arg lst, va_list ap);

/*
** char_handler.c
*/
void				pf_c_padding(char *buf, t_arg lst, int *r, va_list ap);
int					pf_putstr_exc(char *buf, char *str, t_arg lst);
void				pf_str_handler(char *buf, t_arg lst, int *r, va_list ap);

/*
** nb_handler.c
*/
void				pf_int_handler(char *buf, t_arg lst, int *r, va_list ap);
void				pf_hex_handler(char *buf, t_arg lst, int *r, va_list ap);

/*
** wide_char_handler.c
*/
void				pf_print_wchar(char *buf, t_arg lst, int *r, va_list ap);
void				pf_print_wstr(char *buf, t_arg lst, int *r, va_list ap);
int					pf_putwstr_preci(wchar_t *str, t_arg lst,
					int (*func)(wchar_t));

/*
** utils.c
*/
int					pf_get_pad(char *str, int end);
int					pf_get_preci(char *str, int end);
int					pf_htag(char *buf, t_arg lst, int signe, int mode);
void				pf_itoa_base(char *buf, t_arg lst, uintmax_t n);
char				*pf_strdup(const char *s1);

/*
** utils2.c
*/
int					pf_divide_nb(t_arg lst, intmax_t nb);
int					pf_divide_unb(t_arg lst, uintmax_t nb);
int					pf_add_to_buf(char *buf, char c, int toprint);
void				pf_to_print_s(char *buf, t_arg lst, int toprint, int signe);
int					pf_wchar_len(wchar_t c);

#endif
