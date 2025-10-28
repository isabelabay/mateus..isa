/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int contador = 0;
    while (1) {
        printf("Contador: %d\n", contador);
        contador++;

    char nome[50];
    int idade;
    float peso, altura;

 
    printf("=== Sistema Cadastro ===\n\n");
 
    printf("Digite o nome: ");
    scanf("%49s", nome);
   
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura);

    printf("Digite seu peso (em kg): ");
    scanf("%f", &peso);
    
    printf("\n=== Dados Cadastrados ===\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);
    printf("Peso: %.2f kg\n", peso);
   
    if (contador >= 5) { // Condição para parar
            break; // Sai do loop
        }
    }
    printf("Loop interrompido!\n");
    return 0;
   
}