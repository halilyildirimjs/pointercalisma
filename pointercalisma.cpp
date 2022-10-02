#include <stdio.h> 
int main()
{
int matris[3][4]={1,2,3,4,5,6,7,8,9,10,11,12},
	i=0,
	j=0,
	indis=0;  				 
int *pointer= &matris[0][0]; 

printf("3x4 Matris\n");
printf("----\n");  

for(j=0;j<3;j++){    
	for(i=0;i<4;i++) 
	{
		 if(indis<10)printf(" %d  ",*(pointer+indis++));
		 else printf("%d  ",*(pointer+indis++));  
	} printf("\n"); 
printf(" ----------------\n");  

printf("Silinecek elemanin indisi :[0-11] :");
scanf("%d",&j);
for(;;)
{
	if(j>=0 && j<12)
	break; 
	printf("[0-11] araliginda bir sayi : ");
	scanf("%d",&j);
}
printf("%d indisli %d elemani silme islemi\n",j,*(pointer+j));

for(j;j<12;j++)  
{
	*(pointer+j)=*(pointer+j+1); 
}
*(pointer+11)=0; 


printf("Yeni 3x4 Matris degeri\n"); 
printf(" ----------------\n");  
indis=0;
for(j=0;j<3;j++){    
					 
	for(i=0;i<4;i++) 
	{                           		
		 if(indis<10)printf(" %d  ",*(pointer+indis++));  
		 else printf("%d  ",*(pointer+indis++));  
	}
	printf("\n"); 
}

printf(" ---\n");  

return 0;
}
}
