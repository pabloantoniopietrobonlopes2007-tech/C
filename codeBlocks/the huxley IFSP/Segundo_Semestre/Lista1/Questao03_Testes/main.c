#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char dicionario[50][2][51];      // [palavra original][tradução]
    char frase[101];
    char traducao[101];

    scanf("%d", &n);
    getchar(); // consome o '\n'

    // Lê o dicionário
    for (int i = 0; i < n; i++) {
        scanf("%s => %s", dicionario[i][0], dicionario[i][1]);
        getchar(); // consome o '\n'
    }

    // Lê as frases
    while (1) {
        fgets(frase, 101, stdin);

        // Remove o '\n' do fgets
        frase[strcspn(frase, "\n")] = '\0';

        // Encerra quando a linha for apenas "*"
        if (strcmp(frase, "*") == 0)
            break;

        traducao[0] = '\0'; // inicia string vazia

        // Separa a frase em palavras
        char *palavra = strtok(frase, " ");

        while (palavra != NULL) {
            int encontrou = 0;

            // Procura a palavra no dicionário
            for (int i = 0; i < n; i++) {
                if (strcmp(palavra, dicionario[i][0]) == 0) {
                    strcat(traducao, dicionario[i][1]);
                    encontrou = 1;
                    break;
                }
            }

            // Se não encontrou, mantém a palavra original
            if (!encontrou) {
                strcat(traducao, palavra);
            }

            palavra = strtok(NULL, " ");

            // Adiciona espaço entre as palavras
            if (palavra != NULL)
                strcat(traducao, " ");
        }

        printf("%s\n", traducao);
    }

    return 0;
}
