//Kátia S R Pereira
//11711ETE023

#include <stdio.h>
int d1, d2, bin1[32] = {0}, bin2[32] = {0}, r[32] = {0}, nb, arrastar;


void NOT()
{
	int i = 0, aux=0;
	
	printf("NOT %d (", d1);
	for(i = 31; i >= 0; i--)
		printf("%d", bin1[i]);
	
	printf(") : ");
	
	for(i = 0; i < 32; i++)
	{
		if(bin1[i] == 1)
			bin1[i]= 0;
		else
			bin1[i] = 1;
	}

	printf("%d (",~d1);

	for(i = 31; i >= 0; i--)
		printf("%d", bin1[i]);
		
	printf(")");
}

void AND()
{
	int i = 0, aux = 0;
	
	printf("%d (", d1);
	for(i = 31; i >= 0; i--)
		printf("%d", bin1[i]);
		
	printf(") AND ");
	printf("%d (", d2);
	
	for(i = 31; i >= 0; i--)
		printf("%d", bin2[i]);
		
	printf(") : ");
	
	for(i = 0; i < 32; i++)
	{
		if(bin1[i] == 1 && bin2[i] == 1)
			r[i] = 1;
		else 
			r[i] = 0;
	}
	
	printf("%d (",d1&d2);
	
	for(i = 31; i >= 0; i--)
		printf("%d", r[i]);
	
	printf(")");
}

void OR()
{
	int i = 0, aux = 0;
	
	printf("%d (", d1);
	
	for(i = 31; i >= 0; i--)
		printf("%d", bin1[i]);
			
	printf(") OR ");
	printf("%d (", d2);
	
	for(i = 31; i >= 0; i--)
		printf("%d", bin2[i]);
	
	printf(") : ");
	
	for(i = 0; i < 32; i++)
	{
		if(bin1[i] == 0 && bin2[i] == 0)
			r[i] = 0;
		else 
			r[i] = 1;
	}

	printf("%d (",d1|d2);
	
	for(i = 31; i >= 0; i--)
		printf("%d", r[i]);
	
	printf(")");
}

void XOR()
{
	int i = 0, aux = 0;
	
	printf("%d (", d1);
	for(i = 31; i >= 0; i--)
		printf("%d", bin1[i]);
	
	printf(") XOR ");
	printf("%d (", d2);
	
	for(i = 31; i >= 0; i--)
		printf("%d", bin2[i]);
	
	printf(") : ");
	
	for(i = 0; i < 32; i++)
	{
		if(bin1[i] == bin2[i])
			r[i] = 0;
		else 
			r[i] = 1;
	}
	
	printf("%d (",d1^d2);
	
	for(i = 31; i >= 0; i--)
		printf("%d", r[i]);
	
	printf(")");	
}

void RIGHTSHIFT(int arrastar)
{
	int i = 0, j = 0, aux = 0;
	
	printf("%d (", d1);
	
	for(i = 31; i >= 0; i--)
		printf("%d", bin1[i]);
			
	printf(") >> ");
	printf("%d (", arrastar);
	
	for(i = 31; i >= 0; i--)
		printf("%d", bin2[i]);
	
	printf(") : ");
	
	for(i = 0; i < arrastar; i++)
		r[i] = 0;
		
	for(i = arrastar; i < 32; i++)
	{
		r[i] = bin1[j];
		j++;
	}
	
	printf("%d (",d1>>arrastar);
	
	for(i = 31; i >= 0; i--)
		printf("%d", r[i]);
	
	printf(")");
}

void LEFTSHIFT(int arrastar)
{
	int i = 0, j = 0, aux = 0;
	
	printf("%d (", d1);
	for(i = 31; i >= 0; i--)
		printf("%d", bin1[i]);
	
	printf(") << ");
	printf("%d (", arrastar);
	for(i = 31; i >= 0; i--)
		printf("%d", bin2[i]);
	
	printf(") : ");
	
	for(i = arrastar; i < 32; i++)
	{
		r[i] = bin1[j];
		j++;
	}
	
	for(; j < 32; j++)
		r[j] = 0;
	
	printf("%d (",d1<<arrastar);
	
	for(i = 31; i >= 0; i--)
		printf("%d", r[i]);
	
	printf(")");
}
void d_b1(int decimal)
{
	int i, resultado = 0;
    
    resultado=decimal;
    if(decimal<0)
    {
	    resultado=-resultado;
	    
		for(i=0;resultado!=0;i++)
		{
	        bin1[i]=resultado%2;
	        resultado=(resultado - bin1[i])/2;
	    }
	    
	    for(i=0;i<32;i++)
	    	bin1[i]=!bin1[i];
    	
    	for(i=31;i!=0;i--)
    	{
    		if(bin1[i]==0)
    		{
    			bin1[i]=1;
    			break;
			}
			else
			bin1[i]=0;
		}
		
		for(i=0;i<32;i++)
	    	bin1[i]=!bin1[i];
	}
	if(decimal>=0)
	{
		for(i=0;resultado!=0;i++)
		{
	        bin1[i]=resultado%2;
	        resultado=(resultado - bin1[i])/2;
	    }
	}
}

void d_b2(int decimal)
{
	int i, resultado = 0;
    
    resultado=decimal;
    if(decimal<0)
    {
	    resultado=-resultado;
	    
		for(i=0;resultado!=0;i++)
		{
	        bin2[i]=resultado%2;
	        resultado=(resultado - bin2[i])/2;
	    }
	    
	    for(i=0;i<32;i++)
	    	bin2[i]=!bin2[i];
    	
    	for(i=31;i!=0;i--)
    	{
    		if(bin2[i]==0)
    		{
    			bin2[i]=1;
    			break;
			}
			else
			bin2[i]=0;
		}
		
		for(i=0;i<32;i++)
	    	bin2[i]=!bin2[i];
	}
	if(decimal>=0)
	{
		for(i=0;resultado!=0;i++)
		{
	        bin2[i]=resultado%2;
	        resultado=(resultado - bin2[i])/2;
	    }
	}
}

int main( )
{
	int k,i,saida;
    printf("\t1. Digite 1 para NOT\n");
    printf("\t2. Digite 2 para AND\n");
    printf("\t3. Digite 3 para OR\n");
    printf("\t4. Digite 4 para  XOR\n");
    printf("\t5. Digite 5 para RIGHT SHIFT\n");
    printf("\t6. Digite 6 para LEFT SHIFT\n");
    printf("\t7. Digite 7 para Sair\n");
    
	do
	{
		inicio:
		printf ("\nDigite sua opcao: ");
		scanf("%d",&k);
		switch(k)
		{
			case 1:
				printf("Digite um numero decimal: ");
				scanf("%d", &d1);
				getchar();
				d_b1(d1);
				NOT();
				saida=1;
				break;
			
			case 2:	
				printf("Digite o primeiro numero decimal: ");
				scanf("%d", &d1);
				getchar();
				d_b1(d1);
				printf("Digite o segundo numero decimal: ");
				scanf("%d", &d2);
				getchar();
				d_b2(d2);
				AND();
				saida=1;
				break;
			
			case 3:
				printf("Digite o primeiro numero decimal: ");
				scanf("%d", &d1);
				getchar();
				d_b1(d1);
				printf("Digite o segundo numero decimal: ");
				scanf("%d", &d2);
				getchar();
				d_b2(d2);
				OR();
				saida=1;
				break;
			
			case 4:
				printf("Digite o primeiro numero decimal: ");
				scanf("%d", &d1);
				getchar();
				d_b1(d1);
				printf("Digite o segundo numero decimal: ");
				scanf("%d", &d2);
				getchar();
				d_b2(d2);
				XOR();
				saida=1;
				break;
		
			case 5:
				printf("Digite o primeiro numero decimal: ");
				scanf("%d", &d1);
				getchar();
				d_b1(d1);
				printf("Digite quantos bits para direita: ");
				scanf("%d", &arrastar);
				getchar();
				d_b2(arrastar);
				RIGHTSHIFT(arrastar);
				saida=1;
				break;
		
			case 6:
				printf("Digite o primeiro numero decimal: ");
				scanf("%d", &d1);
				getchar();
				d_b1(d1);
				printf("Digite quantos bits para esquerda: ");
				scanf("%d", &arrastar);
				getchar();
				d_b2(arrastar);
				LEFTSHIFT(arrastar);
				saida=1;
				break;
		
			case 7:
				saida = 0;
				break;		
	}
	}while(saida!=0);



	return 0;
}
