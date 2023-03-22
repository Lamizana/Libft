/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamizan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 08:23:41 by alamizan          #+#    #+#             */
/*   Updated: 2022/10/19 12:26:55 by alamizan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <ctype.h>

#include "libft.h"

int	main(void)
{
	printf("-----------------------------------------------\n");
	// ft_isalpha ------------------------
	printf("- isalpha   : %d\n", isalpha('9'));
	printf("- ft_isalpha: %d\n", ft_isalpha('9'));

	// ft_isdigit ------------------------
	printf("\n- isdigit   : %d\n", isdigit('9'));
	printf("- ft_isdigit: %d\n", ft_isdigit('9'));
	
	// ft_isalnum ------------------------
	printf("\n- isalnum   : %d\n", isalnum('e'));
	printf("- ft_isalnum: %d\n", ft_isalnum('e'));

	// ft_isascii ------------------------
	printf("\n- isascii   : %d\n", isascii(-128));
	printf("- ft_isascii: %d\n", ft_isascii(-128));

	// ft_isprint ------------------------
	printf("\n- isprint   : %d\n", isprint('k'));
	printf("- ft_isprint: %d\n", ft_isprint('k'));

	// ft_strlen ------------------------
	printf("\n- strlen   : %ld\n", strlen("CouCou a vous"));
	printf("- ft_strlen: %ld\n", ft_strlen("Coucou a vous"));

	// ft_memset ------------------------
	char mot[100]= "rat";
	char mot1[100]= "rat";
	memset(mot, '/', 3);	
	printf("\n- memset   : %s\t- adresse: %p\n", mot, mot);
	ft_memset(mot1, '/', 3);	
	printf("- ft_memset: %s\t- adresse: %p\n", mot1, mot1);

	// ft_bzero ------------------------
	char msg[100]= "ratatouile";
	char msg1[100]= "ratatouile";
	bzero(msg, 1);	
	printf("\n- bzero   : %s\t- adresse: %p\n", msg, msg);
	ft_bzero(msg1, 1);	
	printf("- ft_bzero: %s\t- adresse: %p\n", msg1, msg1);

	// ft_memcpy ------------------------
	// Test 1 
	printf("\n- memcpy: ");
	const char src[50] = "http://www.tutorialspoint.com";
	char dest[50];
	strcpy(dest,"Heloooo!!");
	printf("\nBefore memcpy dest = %s\n", dest);
	memcpy(dest, src, ft_strlen(src)+1);
	printf("After memcpy dest = %s\n", dest);

	printf("- ft_memcpy:");
	const char src1[50] = "http://www.tutorialspoint.com";
	char dest1[50];
	strcpy(dest1,"Heloooo!!");
	printf("\nBefore ft_memcpy dest = %s\n", dest1);
	ft_memcpy(dest1, src1, ft_strlen(src1)+1);
	printf("After ft_memcpy dest = %s\n", dest1);

	// Test 2
	char str1[] = "Geeksaaaaa"; 
	char str2[] = "Quiz"; 
	printf("\nstr1 before memcpy = %s\n", str1);
	memcpy (str1, str2, sizeof(str2));
	printf("str1 after memcpy = %s\n", str1);

	char str3[] = "Geeksaaaaa"; 
	char str4[] = "Quiz"; 
	printf("\nstr1 before ft_memcpy = %s\n", str3);
	ft_memcpy (str3, str4, sizeof(str4));
	printf("str1 after ft_memcpy = %s\n", str3);

	// ft_memmove ------------------------
	// Test 1 
	printf("\n- memmove: ");
	const char src10[50] = "http://www.tutorialspoint.com";
	char dest10[50];
	strcpy(dest10,"Heloooo!!");
	printf("\nBefore memmove dest = %s\n", dest10);
	memmove(dest10+3, src10, ft_strlen(src10)+1);
	printf("After memmove dest = %s\n", dest10);

	printf("- ft_memmove:");
	const char src11[50] = "http://www.tutorialspoint.com";
	char dest11[50];
	strcpy(dest11,"Heloooo!!");
	printf("\nBefore ft_memmove dest = %s\n", dest11);
	ft_memmove(dest11+3, src11, ft_strlen(src11)+1);
	printf("After ft_memmove dest = %s\n", dest11);
	//
	// Test 2
	char str12[] = "Geetttttt";
	char str13[] = "Quizz"; 
	printf("\nstr1 before memmove = %s\n", str12);
	memmove (str12, str12, sizeof(str12));
	printf("str1 after memmove = %s\n", str12);

	char str14[] = "Geetttttt"; 
	char str15[] = "Quizz"; 
	printf("\nstr1 before ft_memmove = %s\n", str14);
	ft_memmove (str14, str14, sizeof(str14));
	printf("str1 after ft_memmove = %s\n", str14);

	// ft_strlcpy ------------------------
	//printf("\n- strlcpy    : %ld\n", strlcpy("bofttft", "raga6565", 4));
	
	/*
	// ft_strlcat ------------------------
	char msg3[] = "Geeks"; 
	char msg4[] = "Quiz"; 
	printf("\n- strlcat   : %ld\n", strlcat(msg3, msg4, 3));
	printf("- strlcat   : %s\n",msg3);
		
	char message1[] = "Geeks"; 
	char message2[] = "Quiz"; 
	printf("- ft_strlcat   : %ld\n", strlcat(message1, message2, 3));
	printf("- ft_strlcat   : %s\n",message1);
	*/

	// ft_toupper -------------------------------
	printf("\n- toupper   : %c\n", toupper('Z'));
	printf("- ft_toupper: %c\n", ft_toupper('Z'));

	// ft_tolower -------------------------------
	printf("\n- tolower   : %c\n", tolower('Z'));
	printf("- ft_tolower: %c\n", ft_tolower('Z'));

	// ft_strchr --------------------------------
	printf("\n- strchr    : %s\n", strchr("alor l r!!a", 'r'));
	printf("- ft_strchr : %s\n", ft_strchr("alor l r!!a", 'r'));
	
	// ft_strrchr -------------------------------
	printf("\n- strrchr   : %s\n", strrchr("alor l r!!a", 'r'));
	printf("- ft_strrchr: %s\n", ft_strrchr("alor l r!!a", 'r'));
	
	// ft_strncmp -------------------------------
	printf("\n- strncmp   : %d\n", strncmp("lacd", "lll", 3));
	printf("- ft_strncmp: %d\n", ft_strncmp("labcd", "lll", 3));
	printf("- strncmp: %d\n", strncmp("test\200", "test\0", 6));
	printf("- ft_strncmp: %d\n", ft_strncmp("test\200", "test\0", 6));
	printf("test\200");
	
	// ft_memchr --------------------------------
	char data[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    const unsigned int size = 30;
	printf("\n- memchr    : %p\n", memchr(data, 3 + 355, size));
	printf("- ft_memchr : %p\n", ft_memchr(data, 3 + 355, size));

	// ft_memcmp --------------------------------
	printf("\n- memcmp    : %d\n", memcmp("xrDk", "ykarc", 4));
	printf("- ft_memcmp : %d\n", ft_memcmp("xrDk", "yakrc", 4));

	// ft_strnstr -------------------------------
	printf("\n- ft_strnstr   : %s\n", ft_strnstr("aaabcabcd", "aabc", -1));
	printf("\n- ft_strnstr   : %s\n", ft_strnstr("aba brai", "br", 9));
	// gcc -lbsd:
	//printf("- strnstr   : %s\n", strnstr("aaabcabcd", "aabc", -1));

	// ft_atoi ----------------------------------
	printf("\n- atoi      : %d\n", atoi("2147483699"));
	printf("- ft_atoi   : %d\n", ft_atoi("2147483699"));

	// ft_calloc --------------------------------
    int  *ptr;
	int *ptr1;
	int taille = 5;
	int index = 0;
	ptr = (int*)calloc(taille, sizeof(int));
	ptr1 = (int*)ft_calloc(taille, sizeof(int));
	while (index != taille)
	{
		ptr[index] = index + 1;
		ptr1[index] = index + 1;
		printf("\n- calloc   : %d\t- adresse:%p\n", ptr[index], ptr+index);
		printf("- ft_calloc: %d\t- adresse:%p\n", ptr1[index], ptr1+index);
		index++;
	}
	printf("\n- calloc   : %d\t\t- adresse:%p\n", ptr[index+1], ptr+index+1);
	printf("- ft_calloc: %d\t\t- adresse:%p\n", ptr1[index+1], ptr1+index+1);
	free(ptr);
	free(ptr1);

	// ft_strdup --------------------------------
	char	msg5[] = "Sega c est plus fort que toi";
	char	*copy = strdup(msg5);	
	char	*copy2 = ft_strdup(msg5);	
	printf("\n- strdup   : %s\n", copy);
	printf("- ft_strdup: %s\n", copy2);
	free(copy);
	free(copy2);

	// ft_substr --------------------------------
	const char *msg6 = "Sega c est plus fort que toi";
	char* copy5 = ft_substr(msg6, 0, 4);	
	printf("\n- ft_substr: %s\n", copy5);
	free(copy5);

	// ft_strjoin -------------------------------
	const char *msg8 = "Sega c est plus fort";
	const char *msg9 = " que toi";
	char *texte = ft_strjoin(msg8, msg9);
	printf("\n- ft_strjoin: %s\n", texte);
	
	// ft_strtrim -------------------------------
	const char *msg10 = "\t\n \n \t  ";
	const char *msg11 = " \t\n";
	char *texte1 = ft_strtrim(msg10, msg11);
	printf("\n- ft_strtrim: %s\n", texte1);
	
	// ft_split ---------------------------------
	char *text = "||Hola||||||||||||||||\tcomment||ca|va|la,compagnie|des,sentiers||battues|Seul la mort|||sera|au|rendez||vous.i||i";
	char **taxi = NULL;
	char *s = "||split  ||this|for|me|||||!a||||||";
	char *s3 = "      split       this for   me  !       ";
	taxi = ft_split(s3, '\0');
	printf("\n- ft_split: %s\n", taxi[0]);

	// ft_itoa ----------------------------------
	printf("\n- ft_itoa: %s\n", ft_itoa(2147483647));

	// ft_strmapi -------------------------------
	
	// ft_striteri ------------------------------
	
	// ft_puchar_ft -----------------------------
	// ft_putstr_fd -----------------------------
	// ft_putendl -------------------------------
	int i = 0;
	int fd;
	char c = 'a';
    fd = open("test", O_WRONLY);
	ft_putstr_fd("Salut la compagnie!!\n", fd);
	while (i < 26)
		ft_putchar_fd((c + i++),fd);		
	write(fd, "\n", 1);
	ft_putnbr_fd(45355, fd);
	ft_putendl_fd("\nAu revoir les amis.", fd);
	close (fd);

	// ---------------------------------------------------------
	// STRUCTURE ET LISTES -------------------------------------	

	// ft_lstnew -----------------------------------------------	
	t_list *str;
	t_list *nb;

	str = ft_lstnew("Hello");
	nb = ft_lstnew((int *)456);
	printf("\n- ft_lstnew: %s", (char *)str->content);
	printf("\n- ft_lstnew: %d\n\n", (int *)nb->content);

	// ft_lstsize ----------------------------------------------
	t_list  *rtr;
	t_list  *tab;
	rtr = ft_lstnew("hello");

	// Affiche l element content de ptr:
	printf("- element de ptr: %s\n", (char *)rtr->content);
	printf("- nb element de ptr: %d\n", ft_lstsize(rtr));

	// ft_lstadd_front -----------------------------------------
	// Rajoute un element dans la liste ptr:
	tab = ft_lstnew("Au revoir");
	ft_lstadd_front(&rtr, tab);

	// Affiche les nouveaux elements de ptr:
	printf("- element de tab: %s\n", (char *)tab->content);
	// Compte le nombre d element ptr:                                                            
	printf("- nb element de ptr: %d\n\n", ft_lstsize(rtr));

	// ---------------------------------------------------------
	printf("-----------------------------------------------\n\n");
	return (0);
}
