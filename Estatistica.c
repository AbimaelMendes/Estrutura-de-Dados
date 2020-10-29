#include <stdio.h>

int main(){
    // Declaração das variáveis
    int n, k, op;
    float combinacao, p, x, q, l, m;

    //Menu
    printf("############################################# \n");
    printf("##### CALCULO DE PROBABILIDADE BINOMIAL ##### \n");
    printf("############################################# \n");
    printf("SELHECIONE UMA OPÇÃO \n");
    printf("1 - Distribuição Binomial \n");
    printf("2 - Binomial Acumulada \n");
    scanf("%d",&op);

    //Entrada de dados
    printf("Digite o Número de observações: (N) ");
    scanf("%d",&n);
    printf("Digite a porcentagem de casos favoráveis:(P) ");
    scanf("%f", &p);

    //calcula os casos de falha
    q = 1 - p;

    //Funcção que calcula o fatorial
    int fatorial(int x){   
        int i;
        for(i = 1; x > 1; x = x - 1){
            i = i * x;
        }
        return(i);
    }

    //Calcula a potência
    float potencia(float p, int k){
        int i;
        float result;
        result = 1;

        for (i = 1; i <= k; i++){
            result *= p;
        }
        return(result);
    }

    //Calculo binomial Não acumulada
    if (op == 1){
    
        //Entrada de dados
        printf("Digite a quantidade de sucessos:(K) ");
        scanf("%d",&k);

        //Calcula a combinação dos elementos
        combinacao = fatorial(n) / (fatorial(k) * (fatorial(n - k)));

        // joga a potência para uma variável
        m = potencia(q, n-k);
        l = potencia(p, k);

        //Calculo BINOMIAL e transforma em porcentagem
        x = combinacao * l * m * 100;

        printf("R: %f %\n", x);

    // calcula binomial ACUMULADA
    }else if (op == 2){

        //Entrada de dados
        printf("Seja no maximo:( <= ) ");
        scanf("%d",&k);

        //laço que fará a soma das probabilidades.
        int i;
        combinacao = 0;
        x = 0;

        for (i = 0; i <= k; i++){
            combinacao = (fatorial(n) / (fatorial(i) * fatorial(n - i)));
            printf("%d \n", i);
            printf("%f \n", combinacao);
            // calcula a potência e joga para uma variável
            m = potencia(q, n-i);
            l = potencia(p, i);

            //Calculo BINOMIAL e transforma em porcentagem
            x = x + (combinacao * l * m * 100);
            
        }
        printf("R: %f %\n", x);
        

    }else{
        printf("OPÇÂO INVÀLIDA! \n");
    }    
   
    return(0);
}