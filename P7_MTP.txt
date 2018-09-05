//Kátia S R Pereira
//11711ETE023
#include <stdio.h>
int A(int a, int b){
    if (a==0){
    	return b + 1;	
	}
    if (a > 0 && b==0){
    	return A(a - 1, 1);	
	}
    if (a > 0 && b > 0){
    	return A(a - 1, A(a, b - 1));
	}
    }
int main ()
{
    int n = 0, m = 0;
    printf("DIGITE m e n RESPECTIVAMENTE: \n\nm: ");
    scanf("%d",&m);
    printf("\nn: ");
    scanf("%d",&n);
    getchar();
    printf("\n\nRESULTADO DA FUNCAO DE ACKERMANN:  %d",A(m, n));
    return 0;
}
