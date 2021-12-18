#include <stdio.h>

int main() {

// declaração das variáveis

int n1, n2, n3;

//coleta dos dados

printf("Digite três números, respectivamente: ");

scanf("%d%d%d", &n1, &n2, &n3);

//análise dos dados

if((n1>abs(n2-n3) && n1< (n2 + n3))|| (n2>abs(n1-n3) && n2< (n1 + n3))||(n3>abs(n1-n3) && n3< (n1 + n3))){

//printf("É um triângulo");

if(n1 == n2 && n2 == n3) {

printf("é um triângulo equilátero \n ");

}

if((n1 != n2 && n1 == n3) || (n2 != n1 && n2 == n3) || (n3 != n2 && n3 == n1) || (n1 == n2 && n2 == n3)) {

printf("é um triângulo isósceles");

}

else{

printf("é um triângulo escaleno");

}

}

else {

printf("Não é um triângulo");

}

return 0;

}