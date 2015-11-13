#include <stdio.h>
#include <stdlib.h>

int main()
{
    int coluna, linha, largura, altura, continuar;
    char nome[20];
    
    continuar = 1;
    while(continuar == 1){
    
    printf("Digite seu nome :\n");
    scanf("%s", nome);
    
    printf("Digite a largura do retangulo :\n");
    scanf("%d", &largura);
    
    printf("Digite a altura do retangulo :\n");
    scanf("%d", &altura);
    
    printf("Ola, meu nome e %s e o retangulo ficou assim :\n", nome);
    
    for(coluna=1;coluna<=altura;coluna++){
    for(linha=1;linha<=largura;linha++)
    
    if (coluna == 1 || coluna == altura || linha ==1 || linha == largura)
               printf("*");
               else
               printf(" ");
               printf("\n");
               }
               
    printf("Deseja continuar ? (1 - s/2 - n)\n");
    scanf("%d", &continuar);    
}   

    return 0;
    system("pause");
               
}           
