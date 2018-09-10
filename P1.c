//Kátia S R Pereira
//11711ETE023
#include <stdio.h>
float potencia (int base, int exp)
{
float resultado = base;
if (exp==0)
resultado=1;
else{

 int i;  
    for ( i = 0; i < exp-1; i++){ 
	    resultado = resultado*base;  
		  } }  return resultado;
		  
} 
int main() {
	
 int b = 0, c = 0, d = 0, e = 0, h = 0, i = 0, l = 0, k = 0, estado = 0;

	
char binario[300];
scanf("%s", &binario);
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
{	b = potencia(2,e);
	d = d + b;
	
}	c--;
}

	if(d%3==0)
	estado = 1;
	
	switch(estado)
	{
	case 1:
	{
	printf("\n E multiplo de 3! ");	
     break;
	 }
	case 0:
	{
	printf("\n Nao e multiplo de 3!");
    }}
	return 0;
}
