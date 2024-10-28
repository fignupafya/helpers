
#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h> 

void	test_func(unsigned int a, char *b)
{
	printf("%d %c\n", a, *b);
}

int	main(void)
{
	char test[] = "kasdddaasdaa";
	char test2[] = "asdaa";
	char test3[] = "11231231a2 asdaa";
	char test4[] = " . - 11231231a2 asdaa ']>£#} ";
	char memset_test1[] = " . - 11231231a2 asdaa ']>£#} ";
	char memset_test2[] = " . - 11231231a2 asdaa ']>£#} ";
	char bzero_test1[] = " . - 11231231a2 asdaa ']>£#} ";
	char bzero_test2[] = " . - 11231231a2 asdaa ']>£#} ";
	char bzero_test3[] = " . - 11231231a2 asdaa ']>£#} ";
	char bzero_test4[] = " . - 11231231a2 asdaa ']>£#} ";
	char memcpy_test1_1[] = "asdaa";
	char memcpy_test1_2[] = "11231231a2 asdaa";
	char memcpy_test2_1[] = "asdaa";
	char memcpy_test2_2[] = "11231231a2 asdaa";
	char memmove_test1[] = "1234567890";
	char memmove_test2[] = "1234567890";
	char memmove_test3[] = "1234567890";
	char memmove_test4[] = "1234567890";
	char strlcpy_test1[] = "1234567890";
	char strlcpy_test2[] = "asdkasd";
	char strlcpy_test3[] = "1234567890";
	char strlcpy_test4[] = "asdkasd";
	char* strlcat_test1 = malloc(50);
	char  strlcat_test2[] = "1234567890";
	char* strlcat_test3 = malloc(50);
	char  strlcat_test4[] = "1234567890";
	for (int i=0;i<10;i++){
		strlcat_test1[i]='A'+i;
		strlcat_test3[i]='A'+i;
	}
	char  strchr_test[] = "1234567890";
	char  strrchr_test[] = "12345678901234567890";

	char strncmp_test1[] = "123456789012345678901234567890";
	char* strncmp_test2 = malloc(50);
		for (int i=0;i<20;i++){
		if (i==15)
			strncmp_test2[i]=0;
		else
			strncmp_test2[i]='A'+i;
	}

	char memchr_test[] = "aıdkaj*h*skjash*dkjashdkjiasldkaş";
	


	char* memcmp_test1 = malloc(50);
	char* memcmp_test2 = malloc(50);
	char* memcmp_test3 = malloc(50);
	char* memcmp_test4 = malloc(50);
		for (int i=0;i<40;i++){
			memcmp_test1[i]=i+48;
			memcmp_test2[i]=i+48;
			if (i==20)
				memcmp_test3[i]=52;
			else
				memcmp_test3[i]=i+48;
	}


	char strnstr_big1[]="1234567890123456789012K345678901234567890";
	char strnstr_big2[]="1234567890123456789012345678901234567890";
	char strnstr_small1[]="89012K34";
	char strnstr_small2[]="23lashfjaks";

	char atoi_test1[]="deneme1234";
	char atoi_test2[]="deneme-1234";
	char atoi_test3[]="ahkasd";
	char atoi_test4[]="123123ahkasd";
	char atoi_test5[]="-123123ahkasd";
	char atoi_test6[]="dkjffkjd123123ahkasd123";
	char atoi_test7[]="dkjffkjd-123123ahkasd123";
	char atoi_test8[]="dkjffkjd-123123ahkasd-123";
	char atoi_test9[]="dkjffkjd123123ahkasd-123";
	char atoi_test10[]="12345";
	char atoi_test11[]="-12345";
	char atoi_test12[]="--12345";
	char atoi_test13[]="-123-45";

	char atoi_test1_2[]="  deneme1234";
	char atoi_test2_2[]="  deneme-1234";
	char atoi_test3_2[]="  ahkasd";
	char atoi_test4_2[]="  123123ahkasd";
	char atoi_test5_2[]="  -123123ahkasd";
	char atoi_test6_2[]="  dkjffkjd123123ahkasd123";
	char atoi_test7_2[]="  dkjffkjd-123123ahkasd123";
	char atoi_test8_2[]="  dkjffkjd-123123ahkasd-123";
	char atoi_test9_2[]="  dkjffkjd123123ahkasd-123";
	char atoi_test10_2[]= "  12345";
	char atoi_test11_2[]="  -12345";
	char atoi_test12_2[]="  --12345";
	char atoi_test13_2[]="  -123-45";


	printf("\n\nft_isalpha\n");
	printf("%d %d\n",ft_isalpha('a'),isalpha('a'));
	printf("%d %d\n",ft_isalpha('Z'),isalpha('Z'));
	printf("%d %d\n",ft_isalpha('/'),isalpha('/'));
	
	
	
	
	printf("\n\nft_isdigit\n");
	printf("%d %d\n",ft_isdigit('0'),isdigit('0'));
	printf("%d %d\n",ft_isdigit('k'),isdigit('k'));
	printf("%d %d\n",ft_isdigit(2),isdigit(2));
	
	
	
		
	printf("\n\nft_isalnum\n");
	printf("%d %d\n",ft_isalnum('0'),isalnum('0'));
	printf("%d %d\n",ft_isalnum('k'),isalnum('k'));
	printf("%d %d\n",ft_isalnum('/'),isalnum('/'));
	
	
	
		
	printf("\n\nft_isascii\n");
	printf("%d %d\n",ft_isascii(0),isascii(0));
	printf("%d %d\n",ft_isascii(127),isascii(127));
	printf("%d %d\n",ft_isascii(128),isascii(128));
	
	
	
	
		
	printf("\n\nft_isprint\n");
	printf("%d %d\n",ft_isprint(31),isprint(31));
	printf("%d %d\n",ft_isprint(32),isprint(32));
	printf("%d %d\n",ft_isprint(126),isprint(126));
	printf("%d %d\n",ft_isprint(127),isprint(127));
	
	
		
	printf("\n\nft_strlen\n");
	printf("%d %d\n",ft_strlen(test),strlen(test));
	printf("%d %d\n",ft_strlen(test2),strlen(test2));
	printf("%d %d\n",ft_strlen(test3),strlen(test3));
	printf("%d %d\n",ft_strlen(test4),strlen(test4));
	
	
		
	printf("\n\nft_memset\n");
	printf("%s\n",memset_test1);
	printf("%s\n",memset_test2);
	printf("%s\n",ft_memset(memset_test1,48,5));
	printf("%s\n",memset(memset_test2,48,5));
	printf("%s\n",ft_memset(memset_test2,55,strlen(memset_test2)));
	printf("%s\n",memset(memset_test2,55,strlen(memset_test2)));

	
	printf("\n\n\n\nft_bzero\n");
	printf("%s\n",bzero_test1);
	printf("%s\n",bzero_test2);

	int strlen1 = strlen(bzero_test1);
	int strlen2 = strlen(bzero_test2);
	int strlen3 = strlen(bzero_test3);
	int strlen4 = strlen(bzero_test4);
	
	ft_bzero(bzero_test1,5);
	bzero(bzero_test2,5);

	printf("\n\nbzero_test1:\n");
	for(int i=0;i<strlen1/2;i++)
		printf("'%c' ",bzero_test1[i]);	


	printf("\n\nbzero_test2:\n");
	for(int i=0;i<strlen2/2;i++)
		printf("'%c' ",bzero_test2[i]);	

	
	printf("\n%s\n",bzero_test3);
	printf("\n%s\n",bzero_test4);
	ft_bzero(bzero_test3,strlen3);
	bzero(bzero_test4,strlen4);



	printf("\n\nbzero_test3:\n");
	for(int i=0;i<strlen1;i++)
		printf("'%c' ",bzero_test3[i]);	

	printf("\n\nbzero_test4:\n");
	for(int i=0;i<strlen2;i++)
		printf("'%c' ",bzero_test4[i]);	
	





	
	printf("\n\nft_memcpy\n");
	printf("%s   -   %s\n",memcpy_test1_2, memcpy_test1_1);
	printf("%s   -   %s\n",memcpy_test2_2, memcpy_test2_1);
	ft_memcpy(memcpy_test1_2,memcpy_test1_1,strlen(memcpy_test1_1));
	memcpy(memcpy_test2_2,memcpy_test2_1,strlen(memcpy_test2_1));
	printf("%s   -   %s\n",memcpy_test1_2, memcpy_test1_1);
	printf("%s   -   %s\n",memcpy_test2_2, memcpy_test2_1);

	
	




	
	printf("\n\nft_memmove\n");
	printf("%s   -   %s\n",memmove_test1, &memmove_test1[3]);
	printf("%s   -   %s\n",memmove_test2, &memmove_test2[3]);

	printf("\n");
	

	ft_memmove(memmove_test1, &memmove_test1[2],4);
	memmove(memmove_test2, &memmove_test2[2],4);
	printf("%s   -   %s\n",memmove_test1, &memmove_test1[3]);
	printf("%s   -   %s\n",memmove_test2, &memmove_test2[3]);

	printf("\n");

	printf("%s   -   %s\n",memmove_test3, &memmove_test3[3]);
	printf("%s   -   %s\n",memmove_test4, &memmove_test4[3]);
	
	printf("\n");
	

	ft_memmove( &memmove_test3[2],memmove_test3,4);
	memmove( &memmove_test4[2],memmove_test4,4);
	printf("%s   -   %s\n",memmove_test3, &memmove_test3[3]);
	printf("%s   -   %s\n",memmove_test4, &memmove_test4[3]);
	printf("\n\n");
	
	




	
	printf("\n\nft_strlcpy\n");
	printf("%s   -   %s\n",strlcpy_test1, strlcpy_test2);
	printf("%s   -   %s\n",strlcpy_test3, strlcpy_test4);
	printf("%d %d\n",ft_strlcpy(strlcpy_test1,strlcpy_test2,3),strlcpy(strlcpy_test3,strlcpy_test4,3));
	printf("%s   -   %s\n",strlcpy_test1, strlcpy_test2);
	printf("%s   -   %s\n",strlcpy_test3, strlcpy_test4);

	
	




	
	printf("\n\nft_strlcat\n");
	printf("%s   -   %s\n",strlcat_test1, strlcat_test2);
	printf("%s   -   %s\n",strlcat_test3, strlcat_test4);
	printf("%d %d\n",ft_strlcat(strlcat_test1,strlcat_test2,5),strlcat(strlcat_test3,strlcat_test4,5));
	printf("%s   -   %s\n",strlcat_test1, strlcat_test2);
	printf("%s   -   %s\n",strlcat_test3, strlcat_test4);

	
	

		
	printf("\n\nft_toupper\n");
	printf("%d %d\n",ft_toupper('0'),toupper('0'));
	printf("%d %d\n",ft_toupper('-'),toupper('-'));
	printf("%d %d\n",ft_toupper('a'),toupper('a'));
	printf("%d %d\n",ft_toupper('z'),toupper('z'));
	printf("%d %d\n",ft_toupper('K'),toupper('K'));
	
	


	
	

		
	printf("\n\nft_tolower\n");
	printf("%d %d\n",ft_tolower('0'),tolower('0'));
	printf("%d %d\n",ft_tolower('-'),tolower('-'));
	printf("%d %d\n",ft_tolower('a'),tolower('a'));
	printf("%d %d\n",ft_tolower('z'),tolower('z'));
	printf("%d %d\n",ft_tolower('K'),tolower('K'));
	
	

		
	printf("\n\nft_strchr\n");
	printf("%p %p\n",ft_strchr(strchr_test,'1'),strchr(strchr_test,'1'));
	printf("%p %p\n",ft_strchr(strchr_test,'5'),strchr(strchr_test,'5'));
	printf("%p %p\n",ft_strchr(strchr_test,'k'),strchr(strchr_test,'k'));
	printf("%p %p\n",ft_strchr(strchr_test,'9'),strchr(strchr_test,'9'));
	printf("%p %p\n",ft_strchr(strchr_test,0),strchr(strchr_test,0));
	
	

		
	printf("\n\nft_strrchr\n");
	printf("%p %p\n",ft_strrchr(strrchr_test,'1'),strrchr(strrchr_test,'1'));
	printf("%p %p\n",ft_strrchr(strrchr_test,'5'),strrchr(strrchr_test,'5'));
	printf("%p %p\n",ft_strrchr(strrchr_test,'k'),strrchr(strrchr_test,'k'));
	printf("%p %p\n",ft_strrchr(strrchr_test,'9'),strrchr(strrchr_test,'9'));
	printf("%p %p\n",ft_strrchr(strrchr_test,0),strrchr(strrchr_test,0));
	
	




	
	printf("\n\nft_strncmp\n");
	printf("%p %p\n",ft_strncmp(strncmp_test1,strncmp_test2,5),strncmp(strncmp_test1,strncmp_test2,5));
	printf("%p %p\n",ft_strncmp(strncmp_test1,strncmp_test2,20),strncmp(strncmp_test1,strncmp_test2,20));
	printf("%p %p\n",ft_strncmp(strncmp_test1,strncmp_test2,strlen(strncmp_test1)),strncmp(strncmp_test1,strncmp_test2,strlen(strncmp_test1)));
	printf("%p %p\n",ft_strncmp(strncmp_test1,strncmp_test2,strlen(strncmp_test2)),strncmp(strncmp_test1,strncmp_test2,strlen(strncmp_test2)));

	printf("%p %p\n",ft_strncmp(strncmp_test2,strncmp_test1,5),strncmp(strncmp_test2,strncmp_test1,5));
	printf("%p %p\n",ft_strncmp(strncmp_test2,strncmp_test1,20),strncmp(strncmp_test2,strncmp_test1,20));
	printf("%p %p\n",ft_strncmp(strncmp_test2,strncmp_test1,strlen(strncmp_test1)),strncmp(strncmp_test2,strncmp_test1,strlen(strncmp_test1)));
	printf("%p %p\n",ft_strncmp(strncmp_test2,strncmp_test1,strlen(strncmp_test2)),strncmp(strncmp_test2,strncmp_test1,strlen(strncmp_test2)));




	


		
	printf("\n\nft_memchr\n");
	printf("%p %p\n",ft_memchr(memchr_test,'5',10),memchr(memchr_test,'5',10));
	printf("%p %p\n",ft_memchr(memchr_test,'5',3),memchr(memchr_test,'5',3));
	printf("%p %p\n",ft_memchr(memchr_test,'5',strlen(memchr_test)),memchr(memchr_test,'5',strlen(memchr_test)));
	printf("%p %p\n",ft_memchr(memchr_test,'*',10),memchr(memchr_test,'*',10));
	printf("%p %p\n",ft_memchr(memchr_test,'*',3),memchr(memchr_test,'*',3));
	printf("%p %p\n",ft_memchr(memchr_test,'*',strlen(memchr_test)),memchr(memchr_test,'*',strlen(memchr_test)));
	printf("%p %p\n",ft_memchr(memchr_test,'a',10),memchr(memchr_test,'a',10));
	printf("%p %p\n",ft_memchr(memchr_test,'a',3),memchr(memchr_test,'a',3));
	printf("%p %p\n",ft_memchr(memchr_test,'a',strlen(memchr_test)),memchr(memchr_test,'a',strlen(memchr_test)));	
	printf("%p %p\n",ft_memchr(memchr_test,'-',10),memchr(memchr_test,'-',10));
	printf("%p %p\n",ft_memchr(memchr_test,'-',3),memchr(memchr_test,'-',3));
	printf("%p %p\n",ft_memchr(memchr_test,'-',strlen(memchr_test)),memchr(memchr_test,'-',strlen(memchr_test)));
	printf("%p %p\n",ft_memchr(memchr_test,0,10),memchr(memchr_test,0,10));
	printf("%p %p\n",ft_memchr(memchr_test,0,3),memchr(memchr_test,0,3));
	printf("%p %p\n",ft_memchr(memchr_test,0,strlen(memchr_test)),memchr(memchr_test,0,strlen(memchr_test)));
	
	




	

	printf("\n\nft_memcmp\n");
	printf("%d %d\n",ft_memcmp(memcmp_test1,memcmp_test2,5),memcmp(memcmp_test1,memcmp_test2,5));
	printf("%d %d\n",ft_memcmp(memcmp_test1,memcmp_test2,20),memcmp(memcmp_test1,memcmp_test2,20));
	printf("%d %d\n",ft_memcmp(memcmp_test1,memcmp_test2,30),memcmp(memcmp_test1,memcmp_test2,30));
	printf("%d %d\n",ft_memcmp(memcmp_test1,memcmp_test2,strlen(memcmp_test1)),memcmp(memcmp_test1,memcmp_test2,strlen(memcmp_test1)));
	printf("%d %d\n",ft_memcmp(memcmp_test1,memcmp_test2,strlen(memcmp_test2)),memcmp(memcmp_test1,memcmp_test2,strlen(memcmp_test2)));

	printf("%d %d\n",ft_memcmp(memcmp_test1,memcmp_test3,5),memcmp(memcmp_test1,memcmp_test3,5));
	printf("%d %d\n",ft_memcmp(memcmp_test1,memcmp_test3,20),memcmp(memcmp_test1,memcmp_test3,20));
	printf("%d %d\n",ft_memcmp(memcmp_test1,memcmp_test3,30),memcmp(memcmp_test1,memcmp_test3,30));
	printf("%d %d\n",ft_memcmp(memcmp_test1,memcmp_test3,strlen(memcmp_test1)),memcmp(memcmp_test1,memcmp_test3,strlen(memcmp_test1)));
	printf("%d %d\n",ft_memcmp(memcmp_test1,memcmp_test3,strlen(memcmp_test3)),memcmp(memcmp_test1,memcmp_test3,strlen(memcmp_test3)));









		
	
	printf("\n\nft_strnstr\n");
	printf("%p %p\n",ft_strnstr(strnstr_big1,strnstr_small1,10),strnstr(strnstr_big1,strnstr_small1,10));
	printf("%p %p\n",ft_strnstr(strnstr_big1,strnstr_small2,10),strnstr(strnstr_big1,strnstr_small2,10));
	printf("%p %p\n",ft_strnstr(strnstr_big2,strnstr_small2,10),strnstr(strnstr_big2,strnstr_small2,10));
	printf("%p %p\n",ft_strnstr(strnstr_big2,strnstr_small1,10),strnstr(strnstr_big2,strnstr_small1,10));
	
	printf("%p %p\n",ft_strnstr(strnstr_big1,strnstr_small1,strlen(strnstr_big1)),strnstr(strnstr_big1,strnstr_small1,strlen(strnstr_big1)));
	printf("%p %p\n",ft_strnstr(strnstr_big1,strnstr_small2,strlen(strnstr_big1)),strnstr(strnstr_big1,strnstr_small2,strlen(strnstr_big1)));
	printf("%p %p\n",ft_strnstr(strnstr_big2,strnstr_small2,strlen(strnstr_big2)),strnstr(strnstr_big2,strnstr_small2,strlen(strnstr_big2)));
	printf("%p %p\n",ft_strnstr(strnstr_big2,strnstr_small1,strlen(strnstr_big2)),strnstr(strnstr_big2,strnstr_small1,strlen(strnstr_big2)));
	





	printf("\n\nft_atoi\n");
	printf("%d %d\n",ft_atoi(atoi_test1),atoi(atoi_test1));
	printf("%d %d\n",ft_atoi(atoi_test2),atoi(atoi_test2));
	printf("%d %d\n",ft_atoi(atoi_test3),atoi(atoi_test3));
	printf("%d %d\n",ft_atoi(atoi_test4),atoi(atoi_test4));
	printf("%d %d\n",ft_atoi(atoi_test5),atoi(atoi_test5));
	printf("%d %d\n",ft_atoi(atoi_test6),atoi(atoi_test6));
	printf("%d %d\n",ft_atoi(atoi_test7),atoi(atoi_test7));
	printf("%d %d\n",ft_atoi(atoi_test8),atoi(atoi_test8));
	printf("%d %d\n",ft_atoi(atoi_test9),atoi(atoi_test9));
	printf("%d %d\n",ft_atoi(atoi_test10),atoi(atoi_test10));
	printf("%d %d\n",ft_atoi(atoi_test11),atoi(atoi_test11));
	printf("%d %d\n",ft_atoi(atoi_test12),atoi(atoi_test12));
	printf("%d %d\n",ft_atoi(atoi_test13),atoi(atoi_test13));

	printf("%d %d\n",ft_atoi(atoi_test1_2),atoi(atoi_test1_2));
	printf("%d %d\n",ft_atoi(atoi_test2_2),atoi(atoi_test2_2));
	printf("%d %d\n",ft_atoi(atoi_test3_2),atoi(atoi_test3_2));
	printf("%d %d\n",ft_atoi(atoi_test4_2),atoi(atoi_test4_2));
	printf("%d %d\n",ft_atoi(atoi_test5_2),atoi(atoi_test5_2));
	printf("%d %d\n",ft_atoi(atoi_test6_2),atoi(atoi_test6_2));
	printf("%d %d\n",ft_atoi(atoi_test7_2),atoi(atoi_test7_2));
	printf("%d %d\n",ft_atoi(atoi_test8_2),atoi(atoi_test8_2));
	printf("%d %d\n",ft_atoi(atoi_test9_2),atoi(atoi_test9_2));
	printf("%d %d\n",ft_atoi(atoi_test10_2),atoi(atoi_test10_2));
	printf("%d %d\n",ft_atoi(atoi_test11_2),atoi(atoi_test11_2));
	printf("%d %d\n",ft_atoi(atoi_test12_2),atoi(atoi_test12_2));
	printf("%d %d\n",ft_atoi(atoi_test13_2),atoi(atoi_test13_2));



	printf("\n\nft_calloc\n");
	char* addr1 = ft_calloc(3,2);
	char* addr2 = calloc(3,2);

	for (int i = 0; i<3*2;i++){
		printf("'%c'  -  '%c'\n",addr1[i],addr2[i]);
	}





	char strdup_test[]="123deneme";
	printf("\n\nft_strdup\n");
	printf("'%s'   -   '%s'\n",ft_strdup((strdup_test)),strdup((strdup_test)));









	char substr_test[]="123deneme09876";
	printf("\n\nft_substr\n");
	printf("'%s'   -   '%s'\n",substr_test,ft_substr(substr_test,3,5));





	char strjoin_test1[]="123dene";
	char strjoin_test2[]="me09876";
	printf("\n\nft_strjoin\n");
	printf("'%s' '%s'\n",strjoin_test1,strjoin_test2);
	printf("'%s'\n",ft_strjoin(strjoin_test1,strjoin_test2));






	char strtrim_test1[]="!)!!!)!)!)!)!)---alsjhdajksld!)'^)!)!)')a";
	char strtrim_test2[]="kasd!)!!!)!)!)!)!)---alsjhdajksld!)'^)!)!)')";
	char strtrim_test3[]="kasd!)!!!)!)!)!)!)---alsjhdajksld!)'^)!)!)')kjasnd";
	char strtrim_test4[]="!)!!!)!)!)!)!)---alsjhdajksld!)'^)!)!)')";
	char strtrim_test_set[]="!)'";
	printf("\n\nft_strtrim\n");
	printf("'%s'\n'%s'\n\n",strtrim_test1,ft_strtrim(strtrim_test1,strtrim_test_set));
	printf("'%s'\n'%s'\n\n",strtrim_test2,ft_strtrim(strtrim_test2,strtrim_test_set));
	printf("'%s'\n'%s'\n\n",strtrim_test3,ft_strtrim(strtrim_test3,strtrim_test_set));
	printf("'%s'\n'%s'\n\n",strtrim_test4,ft_strtrim(strtrim_test4,strtrim_test_set));







	char split_test[]="123deneme09876";
	char** splitted = ft_split(split_test,'0');
	printf("\n\nft_split\n");
	printf("'%s'\n",split_test);
	printf("'%s'   -   '%s'   -   %p\n",splitted[0],splitted[1],splitted[2]);






	printf("\nResult     : %s", ft_itoa(-572));
	printf("\nResult     : %s", ft_itoa(572));
	printf("\nResult     : %s", ft_itoa(0));
	printf("\nResult     : %s", ft_itoa(5));
	printf("\nResult     : %s", ft_itoa(-5));
	printf("\nResult     : %s", ft_itoa(-2147483647));
	printf("\nResult     : %s", ft_itoa(2147483647));
	printf("\nResult     : %s", ft_itoa(-2147483648));

	return (0);
}