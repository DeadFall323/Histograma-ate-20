
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int vet_par[20]={ 1,4,6,8,10,12,14,16,18,20};
int contador=0,l,histograma;

int func(int histograma) {
    
    printf("*");
    
    return histograma;
}

int main()
{
    
    printf("\nInsira 10 valor entre 1 e 20: ");
        
    
    printf("\nElemento          Valor        Histograma  ");
    for (l = 0; l < 10; l++) {
        
        printf("\n   %d               %d", contador++, vet_par[l]);
        if (vet_par[l] >=1 && vet_par[l] < 2){
            printf("               *");

        }
        if (vet_par[l] >= 2 && vet_par[l] < 3) {
            printf("               **");

        }
        if (vet_par[l] >= 3 && vet_par[l] < 4) {
            printf("               ***");

        }
        if (vet_par[l] >= 4 && vet_par[l] < 5) {
            printf("               ****");

        }
        if (vet_par[l] >= 5 && vet_par[l] < 6) {
            printf("               *****");

        }
        if (vet_par[l] >= 6 && vet_par[l] < 7) {
            printf("               ******");

        }
        if (vet_par[l] >= 7 && vet_par[l] < 8) {
            printf("               *******");

        }
        if (vet_par[l] >= 8 && vet_par[l] < 9) {
            printf("               ********");

        }
        if (vet_par[l] >= 9 && vet_par[l] < 10) {
            printf("               *********");

        }
        if (vet_par[l] >= 10 && vet_par[l] < 11) {
            printf("              **********");

        }
        if (vet_par[l] >= 11 && vet_par[l] < 12) {
            printf("              ***********");

        }
        if (vet_par[l] >= 12 && vet_par[l] < 13) {
            printf("              ************");

        }
        if (vet_par[l] >= 13 && vet_par[l] < 14) {
            printf("              *************");

        }
        if (vet_par[l] >= 14 && vet_par[l] < 15) {
            printf("              **************");

        }
        if (vet_par[l] >= 15 && vet_par[l] < 16) {
            printf("              ***************");

        }
        if (vet_par[l] >= 16 && vet_par[l] < 17) {
            printf("              ****************");

        }
        if (vet_par[l] >= 17 && vet_par[l] < 18) {
            printf("              *****************");

        }
        if (vet_par[l] >= 18 && vet_par[l] < 19) {
            printf("              ******************");

        }
        if (vet_par[l] >= 19 && vet_par[l] < 20) {
            printf("              *******************");

        }
        if (vet_par[l] >= 20 && vet_par[l] < 21) {
            printf("              ********************");

        }
    }


}