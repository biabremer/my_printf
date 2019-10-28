/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: bbremer <bbremer@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 11:06:42 by bbremer        #+#    #+#                */
/*   Updated: 2019/10/28 11:59:37 by bbremer       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "stdio.h"

int		main()
{
	char *str;
	char *str2;
	int ret_printf;
	int ret_ft_printf;

	str = "42";
	str2 = "oi";
    ft_writeincolours("\nd specifier\n\n", "light cyan");
    ft_writeincolours("printf:    ", "light yellow");
	ret_printf = printf("%d e %d\n", 745, 42);
    ft_writeincolours("my printf: ", "magenta");
	ret_ft_printf = ft_printf("%d e %d\n", 745, 42);

    ft_writeincolours("\ni specifier\n\n", "light cyan");
    ft_writeincolours("printf:    ", "light yellow");
	ret_printf = printf("%i e %i\n", 745, 42);
    ft_writeincolours("my printf: ", "magenta");
	ret_ft_printf = ft_printf("%i e %i\n", 745, 42);

    ft_writeincolours("\nu specifier\n\n", "light cyan");
    ft_writeincolours("printf:    ", "light yellow");
	ret_printf = printf("%u e %u\n", 745, 42);
    ft_writeincolours("my printf: ", "magenta");
	ret_ft_printf = ft_printf("%u e %u\n", 745, 42);

    ft_writeincolours("\nx specifier\n\n", "light cyan");
    ft_writeincolours("printf:    ", "light yellow");
	ret_printf = printf("%x e %x\n", 745, 42);
    ft_writeincolours("my printf: ", "magenta");
	ret_ft_printf = ft_printf("%x e %x\n", 745, 42);

    ft_writeincolours("\nX specifier\n\n", "light cyan");
    ft_writeincolours("printf:    ", "light yellow");
	ret_printf = printf("%X e %X\n", 745, 42);
    ft_writeincolours("my printf: ", "magenta");
	ret_ft_printf = ft_printf("%X e %X\n", 745, 42);

    ft_writeincolours("\no specifier\n\n", "light cyan");
    ft_writeincolours("printf:    ", "light yellow");
	ret_printf = printf("%o e %o\n", 745, 42);
    ft_writeincolours("my printf: ", "magenta");
	ret_ft_printf = ft_printf("%o e %o\n", 745, 42);

    ft_writeincolours("\np specifier\n\n", "light cyan");
    ft_writeincolours("printf:    ", "light yellow");
	ret_printf = printf("%p e %p\n", &str, &str2);
    ft_writeincolours("my printf: ", "magenta");
	ret_ft_printf = ft_printf("%p e %p\n", &str, &str2);

    ft_writeincolours("\nc specifier\n\n", "light cyan");
    ft_writeincolours("printf:    ", "light yellow");
	ret_printf = printf("%c\n", 'c');
    ft_writeincolours("my printf: ", "magenta");
	ret_ft_printf = ft_printf("%c\n", 'c');

    ft_writeincolours("\ns specifier\n\n", "light cyan");
    ft_writeincolours("printf:    ", "light yellow");
	ret_printf = printf("%s\n", "Hello world!");
    ft_writeincolours("my printf: ", "magenta");
	ret_ft_printf = ft_printf("%s\n", "Hello world!");

    ft_writeincolours("\nprint percentage sign\n\n", "light cyan");
    ft_writeincolours("printf:    ", "light yellow");
	ret_printf = printf("%%\n");
    ft_writeincolours("my printf: ", "magenta");
	ret_ft_printf = ft_printf("%%\n", 42);

    ft_writeincolours("\nf specifier\n\n", "light cyan");
    ft_writeincolours("printf:    ", "light yellow");
	ret_printf = printf("%f\n", 38.88888);
    ft_writeincolours("my printf: ", "magenta");
	ret_ft_printf = ft_printf("%f\n", 38.88888);

    ft_writeincolours("\ns specifier with - flag\n\n", "light cyan");
    ft_writeincolours("printf:    ", "light yellow");
	ret_printf = printf("|%-20s|\n", "Hello world!");
    ft_writeincolours("my printf: ", "magenta");
	ret_ft_printf = ft_printf("|%-20s|\n", "Hello world!");

    ft_writeincolours("\nd specifier with - flag\n\n", "light cyan");
    ft_writeincolours("printf:    ", "light yellow");
	ret_printf = printf("|%-10d|\n", 42);
    ft_writeincolours("my printf: ", "magenta");
	ret_ft_printf = ft_printf("|%-10d|\n", 42);

    ft_writeincolours("\nf specifier with - flag\n\n", "light cyan");
    ft_writeincolours("printf:    ", "light yellow");
	ret_printf = printf("|%-10f|\n", 42.3232);
    ft_writeincolours("my printf: ", "magenta");
	ret_ft_printf = ft_printf("|%-10f|\n", 42.3232);

    ft_writeincolours("\nd specifier with + flag\n\n", "light cyan");
    ft_writeincolours("printf:    ", "light yellow");
	ret_printf = printf("%+d\n", 42);
    ft_writeincolours("my printf: ", "magenta");
	ret_ft_printf = ft_printf("%+d\n", 42);

    ft_writeincolours("\nf specifier with + flag\n\n", "light cyan");
    ft_writeincolours("printf:    ", "light yellow");
	ret_printf = printf("%+f\n", 42.3232);
    ft_writeincolours("my printf: ", "magenta");
	ret_ft_printf = ft_printf("%+f\n", 42.3232);

    ft_writeincolours("\nd specifier with 0 flag\n\n", "light cyan");
    ft_writeincolours("printf:    ", "light yellow");
	ret_printf = printf("%010d\n", 42);
    ft_writeincolours("my printf: ", "magenta");
	ret_ft_printf = ft_printf("%010d\n", 42);

    ft_writeincolours("\nf specifier with 0 flag\n\n", "light cyan");
    ft_writeincolours("printf:    ", "light yellow");
	ret_printf = printf("%010f\n", 42.3232);
    ft_writeincolours("my printf: ", "magenta");
	ret_ft_printf = ft_printf("%010f\n", 42.3232);

    ft_writeincolours("\nx specifier with # flag\n\n", "light cyan");
    ft_writeincolours("printf:    ", "light yellow");
	ret_printf = printf("%#x\n", 42);
    ft_writeincolours("my printf: ", "magenta");
	ret_ft_printf = ft_printf("%#x\n", 42);

    ft_writeincolours("\nd specifier with space\n\n", "light cyan");
    ft_writeincolours("printf:    ", "light yellow");
	ret_printf = printf("% d\n", 42);
    ft_writeincolours("my printf: ", "magenta");
	ret_ft_printf = ft_printf("% d\n", 42);

    ft_writeincolours("\nf specifier with space\n\n", "light cyan");
    ft_writeincolours("printf:    ", "light yellow");
	ret_printf = printf("% f\n", 42.3232);
    ft_writeincolours("my printf: ", "magenta");
	ret_ft_printf = ft_printf("% f\n", 42.3232);

	printf("\nreturn of printf is    %i\nreturn of ft_printf is %i\n", ret_printf, ret_ft_printf);
	return (0);
}