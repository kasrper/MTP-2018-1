//Kátia S R Pereira
//11711ETE023
#include <stdio.h>
int bin_dec(char binario[]){
 int h = 0, k = 0, l = 0, i = 0, e = 0, b = 0, c = 0, d = 0;
 
while(binario[h]!='\0')
   h++;
   c = h;
   
 while(binario[k]=='0')
 {
 	k++;
 	
 }
 for(l=0;l<i;l++){
 	
 binario[l]= binario[k];
  k++;
}

for(e = 0; e < h; e++)
{
	if(binario[c-1]=='1')
{	b = pow(2,e);
	d = d + b;
	
}	c--;
}
return d;
}
int main() {
	int menu, a;
	printf("Digite a opcao desejada:\n\n1-BIN-DEC\n2-BIN-HEXA\n3-HEXA-DEC\n4-HEXA-BIN\n5-DEC-BIN\n6-DEC-HEXA\n7-OCT-DEC\n\n");
	scanf("%d", &menu);

	
	if(menu==1){
		printf("\nDIGITE O NUMERO A SER CONVERTIDO:\n");
		char binario[256];
		scanf("%s",&binario);
		a = bin_dec(binario);
		printf("\nCONVERSAO EM DECIMAL: %d", a);
		
}
   	if(menu==2){
	
		printf("\nDIGITE O NUMERO A SER CONVERTIDO: \n");
		char bin_h[256];
		scanf("%s",&bin_h);
		int aux2 = 0;
		aux2 = bin_dec(bin_h);
		printf("\nCONVERSAO EM HEXADECIMAL: %X\n",aux2);
		}
		
	if(menu==3){
		int he_dec;
		printf("\nDIGITE O NUMERO A SER CONVERTIDO: \n");
		scanf("%X", &he_dec);
		printf("\nCONVERSAO EM DECIMAL: %d\n", he_dec);
	}
	
	if(menu==4){
	    printf("\nDIGITE O NUMERO A SER CONVERTIDO: \n");
	    int he_bin;
	    char binaux[256];
	    scanf("%X",&he_bin);
	    itoa(he_bin, binaux,2);
	    printf("\nCONVERSAO EM BINARIO: %s\n",binaux);
	}
		
   if(menu==5){
   		printf("\nDIGITE O NUMERO A SER CONVERTIDO:\n");
   	int numd;
   	char bin[256];
   	scanf("%d",&numd);
   	itoa(numd,bin,2);
   	printf("\nCONVERSAO EM BINARIO: %s",bin);
   }
   if(menu==6){
   	printf("\nDIGITE O NUMERO A SER CONVERTIDO:\n");
   	int num;
   	scanf("%d",&num);
   	printf("\nCONVERSAO EM HEXADECIMAL: %X\n",num);}
   	
   	if(menu==7){
   	printf("\nDIGITE O NUMERO A SER CONVERTIDO: \n");
   	int oc_dec;
   	scanf("%o",&oc_dec);
   	printf("\nCONVERSAO EM DECIMAL: %d\n",oc_dec);
	   }
   	
	return 0;
}
