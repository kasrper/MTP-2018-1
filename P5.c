//Kátia S R Pereira
//11711ETE023
#include <stdio.h>

int main()

{
    char tex[256], *pc;
	int k, i, cont, str[64], *ps, num;

	do{

	printf("Digite \n1  Codificar a mensagem\n2 -Decodificar a mensagem\n3 -Sair\n Escolha uma opcao: ");

	scanf("%d", &k);

	getchar();

	switch(k)

	{

		case 1:

			for(i=0; i<256; i++)

				tex[i] = '\0';

			printf("\nDigite a mensagem: ");

			fgets(tex, 256, stdin);

			for(cont=0; tex[cont] != '\0'; cont++);

			ps = (int*)tex;

			printf("\nMensagem codificada:");

			for(i=0; i<cont; i++){

				if(*(ps+i) != 0)

					printf("%i ", *(ps+i));

			}

			break;

		case 2:

			printf("\nObs: Digite 0 ao final da sequencia.");

			pc = (char*)str;

			i=0;

			printf("\nDigite a sequencia numerica:");

			do{

				scanf("%d", &num);

				getchar();

				str[i] = num;

				i++;

			}while(num != 0);

			pc = (char*)&str;

			printf("\nFrase decodificada:");

			for(i=0; i<sizeof(str) && *(pc+i)!=0; i++)

				printf("%c", *(pc+i));

			break;

		case 3:

			return 0;

		default:

			break;

	}

	}while(k != 4);

	return 0;

}
