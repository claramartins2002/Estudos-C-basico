#include <stdio.h>

int main() {

//declaração de variáveis

int a, b;

char c;

//coleta de dados

printf("Digite dois números, respectivamente: ");

scanf("%d %d", &a, &b);

printf("Digite a operação: \n adição + \n subtração - \n divisão / \n multiplicação * ");

scanf(" %c", &c);

//análise dos dados e exibição do resultado

if(c == '+'){

printf("%d + %d = %d", a, b, a+b);

}

if(c == '-'){

printf("%d - %d = %d", a, b, a-b);

}

if(c == '/'){

if( b != 0){

printf("%d / %d = %d", a, b, a/b);

}

else {

printf("Erro! Divisão por zero");

}

}

if(c =='*'){

printf("%d * %d = %d", a, b, a*b);

}

//printf("%d %s %d = %d", a, c, b, a);

return 0;

}