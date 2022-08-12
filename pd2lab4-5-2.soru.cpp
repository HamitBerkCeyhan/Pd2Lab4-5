#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int i,j;
	char *name,*surname;
	char ad[20],soyad[20];
	printf("isim giriniz: ");
	scanf("%s",&ad);
    printf("soyisim giriniz: ");
	scanf("%s",&soyad);	
	i=strlen(ad);
	j=strlen(soyad);
	name = (char *)malloc(i);
	surname = (char *)malloc(j);
	strcpy(name,ad);
	strcpy(surname,soyad);
	printf("%s %s",name, surname);
    free(name);
    free(surname);
	return 0;
}
