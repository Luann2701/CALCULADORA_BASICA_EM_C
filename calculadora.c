#include <stdio.h>

int main() {
    float num1, num2, resultado = 0;
    int operacao;
    int sair = 0; 
    char opcao = 'Y'; 

    while (sair != -1) {
        printf("\n--- CALCULADORA ---\n");
        
        if (opcao == 'Y' || opcao == 'y') {
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);
        } else {
            printf("Usando o resultado anterior (%.2f) como primeiro numero.\n", num1);
        }

        printf("Digite o segundo numero: ");
        scanf("%f", &num2);

        printf("Escolha a operacao (1-Soma, 2-Subtracao, 3-Multiplicacao, 4-Divisao): ");
        scanf("%d", &operacao);

        if (operacao == 1) resultado = num1 + num2;
        else if (operacao == 2) resultado = num1 - num2;
        else if (operacao == 3) resultado = num1 * num2;
        else if (operacao == 4) {
            if (num2 == 0) printf("Erro: Divisao por zero!\n");
            else resultado = num1 / num2;
        } else {
            printf("Operacao invalida.\n");
        }

        printf("Resultado atual: %.2f\n", resultado);

        printf("\nDigite -1 para sair ou qualquer numero para continuar: ");
        scanf("%d", &sair);
        
        if (sair == -1) {
            printf("\n--- Ate logo! ---\n");
        } else {
            
            do {
                printf("\nQuer usar o resultado (%.2f) para a proxima operacao?", resultado);
                printf("\n(Y para colocar novos numeros / N para usar resultado anterior): ");
                scanf(" %c", &opcao); 
                
                if (opcao == 'N' || opcao == 'n') {
                    num1 = resultado; 
                } 
                else if (opcao != 'Y' && opcao != 'y') {
                    printf("\nOpcao invalida! Tente novamente.");
                }
                
            } while (opcao != 'n' && opcao != 'N' && opcao != 'y' && opcao != 'Y');
        }
    }

    return 0;
}
