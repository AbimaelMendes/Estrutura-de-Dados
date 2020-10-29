#include <stdio.h>
#include <string.h>

// int main(){
//     char vet[20];
//     int i;
//     int contador;
//     fgets(vet, sizeof(vet), stdin);

//     vet[strcspn(vet, "\n")] = '\0';
//     contador=0;
//     for (i=0;i <= 20;i++){
//         if (vet[i] != '\0'){
//             contador++;
//         }
//     }
//     printf("%d",&contador);
//     return(0);
// }

int main(){
    char vet[];
    char vet2[];
    int con;
    int i;

    fgets(vet, sizeof(vet),stdin);
    vet[strcspn(vet, "\n")] = '\0'

    for (i=0; vet[i] != '\0';i++);
    for (j=0; i)
    



}