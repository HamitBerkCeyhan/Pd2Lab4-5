#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,*ptr,eb=0;
	printf("girilecek sayi adedi: ");
	scanf("%d",&n);
	
	ptr=(int *)calloc(n,sizeof(int));
	if(ptr==NULL)
	{
		printf("Yeterli Hafiza Yok");
	} 
	else
	{  
	    for(int i=0; i<n; ++i)
	    {
		printf("Dizi Elemanlarini giriniz:\n ",i+1);
		scanf("%d",ptr+i);
                if(*(ptr+i)>eb)
	        {
	           eb=*(ptr+i);
	        }  
	    }	
		printf("En Buyuk = %d",eb);
        }
	return 0;
}
