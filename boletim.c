#include <stdio.h>

int main() {

// variáveis

float n1, n2, n3, media;

char nome[80];

//coleta de dados

printf("Digite o nome do aluno:");

scanf("%s", &nome);

printf("Digite as notas, respectivamente:");

scanf("%f %f %f", &n1, &n2, &n3);

//cálculo da média aritmética

media = (n1 + n2 + n3)/3;

//exibição do resultado

printf("nome: %s \n média: %f \n ", nome, media);

return 0;

}