/*
Nome:Caio Gomes Alcantara Gloria | Matricula: 763989
Versao:  1.0
*/

#include "io.h"
#include <math.h>
#include <string.h>
// ------------------------------------- definicao de classe

void procedimento01(void) 
{
    //declarando variaveis 
    int lado=0;

    //estrutura de repetição para atribuir um valor ao lado 
    do
    {
        printf("Digite o lado:");
        scanf("%i", &lado);
        
        if(lado<=0)
        {
            printf("\n\aVALOR INVALIDO!!!!");
        }
    }while(lado<=0);
    
    //variaveis para definir a area que sera usada na variavel resposta 
    float area= lado * lado;
    float resposta= area/6;
    
    //mostrar na tela o resultado
    printf("\n 1/6 da area e= %.2f", resposta);
    return 0;
} // fim procedimento01 ( )


void procedimento02(void) 
{
    //declarando variaveis 
    int lado=0;

    //laço de repetição para atribuir o valor ao lado e proibir valor negativo 
    do
    {
        printf("Digite o lado:");
        scanf("%i", &lado);
        
        if(lado<=0)
        {
            printf("\n\aVALOR INVALIDO!!!!");
        }
    }while(lado<=0);

    //criando uma variavel q mudará o valor escolhido pelo usuario para seu dobro 
    int lado2= lado * 2;
    
    //variaveis para calcular a area e o perimetro com o valor do lado já dobrado
    float area= lado2 * lado2;
    int perimetro = lado2 * 4;
    
    //printar na tela o resultado
    printf("\n O dobro da area e= %.2f e o dobro do perimetro e= %i", area, perimetro);
    return 0;
} // fim procedimento02 ( )


void procedimento03(void) 
{
    //declarando variaveis iniciais
    int ladoA, ladoB;

    //estruturas de repetições para valores dos lados
    do
    {
        printf("Digite o lado A:");
        scanf("%i", &ladoA);
        
        if(ladoA<=0)
        {
            printf("\n\aVALOR INVALIDO!!!!");
        }
    }while(ladoA<=0);
    do
    {
        printf("Digite o lado B:");
        scanf("%i", &ladoB);
        
        if(ladoB<=0)
        {
            printf("\n\aVALOR INVALIDO!!!!");
        }
    }while(ladoB<=0);
    
    //variaveis para definir valor de 1/4 da area
    float area= ladoA * ladoB;
    float resposta = area/4;

//printar resposta
    printf("\n1/4 da area do retangulo=%.2f",resposta);
} // fim procedimento03 ( )


void procedimento04(void) 
{
    //variaveis iniciais 
    int ladoA, ladoB;

    //estruturas de repettição para definir valor dos lados 
    do
    {
        printf("Digite o lado A:");
        scanf("%i", &ladoA);
        
        if(ladoA<=0)
        {
            printf("\n\aVALOR INVALIDO!!!!");
        }
    }while(ladoA<=0);
    do
    {
        printf("Digite o lado B:");
        scanf("%i", &ladoB);
        
        if(ladoB<=0)
        {
            printf("\n\aVALOR INVALIDO!!!!");
        }
    }while(ladoB<=0);
    
    //variaveis que irão definir a metade do valor do lado digitado
    int ladoA2 = ladoA/2;
    int ladoB2 = ladoB/2;
    
    //fazer o valor da area e do perimetro 
    float area= ladoA2 * ladoB2;
    float perimetro = ladoA+ ladoB;

    //printar na tela o resultado
    printf("\n A metade da area e= %.2f e a metade do perimetro e= %.2f", area, perimetro);
} // fim procedimento04 ( )


void procedimento05(void) 
{
    //variaveis principais
    int base, altura;

    //estrutura de repetição para dar um valor positivo a base e altura 
    do
    {
        printf("Digite a base:");
        scanf("%i", &base);
        
        if(base<=0)
        {
            printf("\n\aVALOR INVALIDO!!!!");
        }
    }while(base<=0);

    do
    {
        printf("Digite a altura:");
        scanf("%i", &altura);
        
        if(altura<=0)
        {
            printf("\n\aVALOR INVALIDO!!!!");
        }
    }while(altura<=0);

    //variaveis que irao mudar o valor da altura para 1/3 
    int altura2 = altura/3;
    float area= (base*altura2)/2;

//printar o resultado com o valor ja alterado 
    printf("\nO valor de 1/3 da area= %.2f",area); 
} // fim procedimento05 ( )


void procedimento06(void) 
{
    //variavel lado
    int lado;
    //estrutura de repetição para atribuir um valor positivo ao lado
    do
    {
        printf("Digite o lado:");
        scanf("%i", &lado);
        
        if(lado<=0)
        {
            printf("\n\aVALOR INVALIDO!!!!");
        }
    }while(lado<=0);

    //perimetro do triangulo com o dobro do lado
    float perimetro = (lado*2)*3;
    
    //para definir a altura será feito um teorema de pitagoras e calcular a hipotenusa RAIZ
    float H;
    H = sqrt(((lado*2) * (lado*2))- (lado*lado));

    //calcular a area
    float area= ((lado * 2) * H)/2;

    //ptintar os resultados pedidos na tela
    printf("\nO dobro da altura= %.2f \n\n dobro da area=%.2f \n\ndobro do perimetro= %.0f \n\n ",H, area, perimetro);
} // fim procedimento06 ( )



void procedimento07(void) 
{
    //variavel lado
    int lado=0;

    //estrutura de repetição para atribuir um valor positivo ao lado
    do
    {
        printf("Digite o lado:");
        scanf("%i", &lado);
        
        if(lado<=0)
        {
            printf("\n\aVALOR INVALIDO!!!!");
        }
    }while(lado<=0);

    //mudar o valor do lado
    int lado1= lado/4;

    //calcular volume do lado
    float volume= (lado1*lado1*lado1);

    //printar na tela
    printf("\n o volume do solido com 1/4 da aresta = %.2f", volume);
} // fim procedimento07 ( )



void procedimento08(void) 
{
    //variaveis das partes de um paralelepipedo
    int comprimento, largura, altura;
    
        //estrutura de repetição para atribuir um valor positivo ao comprimento, lpargura e altura
    do
    {
        printf("Digite o comprimento:");
        scanf("%i", &comprimento);
        
        if(comprimento<=0)
        {
            printf("\n\aVALOR INVALIDO!!!!");
        }
    }while(comprimento<=0);

    do
    {
        printf("Digite a largura:");
        scanf("%i", &largura);
        
        if(largura<=0)
        {
            printf("\n\aVALOR INVALIDO!!!!");
        }
    }while(largura<=0);

    do
    {
        printf("Digite a altura:");
        scanf("%i", &altura);
        
        if(altura<=0)
        {
            printf("\n\aVALOR INVALIDO!!!!");
        }
    }while(altura<=0);

    //alterando valor de cada parte 7 vezes
    comprimento = comprimento * 7;
    largura = largura * 7;
    altura = altura * 7;

    //calculando a area com o valor ja mudado
    float area = (comprimento * largura)* altura;
    
    //printar na tela
    printf("\n A area do paralelepipedo= %.1f", area);
} // fim procedimento08 ( )

void procedimento09(void) 
{
    //declarando a variavel
    int raio;
    
    //estrutura de repetição para atribuir um valor positivo ao raio
    do
    {
        printf("Digite o raio:");
        scanf("%i", &raio);
        
        if(raio<=0)
        {
            printf("\n\aVALOR INVALIDO!!!!");
        }
    }while(raio<=0);

    //modificando o valor do raio que será digitado
    raio = raio/4;
    
    //variavel area
    float area;
    area= 3.14*(raio*raio);

    //printar na tela o resultado
    printf("\nA area = %.2f", area);
    return 0;
} // fim procedimento09 ( )



void procedimento10(void) 
{
    //variavel raio
    float raio;
    
    //estrutura de repetição para atribuir um valor positivo ao raio
    do
    {
        printf("Digite o raio:");
        scanf("%f", &raio);
        
        if(raio<=0)
        {
            printf("\n\aVALOR INVALIDO!!!!");
        }
    }while(raio<=0);

    //modificar o falor do raio
    raio = (raio*5)/8;
    
    //calcular o volume de uma esfera com o raio digitado alterado
    float area;
    area= (4*3.14*(raio*raio*raio))/3;

    //printar o resultado na tetla
    printf("\nA area = %.2f", area);
    return 0;
} // fim procedimento10 ( )

// ------------------------------------ definicao do metodo principal

void menu(void) {
  if (IO_trace) {
    // identificar
    IO_clrscr(); // para limpar a tela
    IO_println("Guia_05 - v.0.0 - 26/09/2022\n");
    IO_println("Matricula: 0765593 Nome: Alexandre Augusto Niess Ferreira\n");

    // mostrar opcoes
    IO_println("Opcoes:");
    IO_println(" 0 - parar");
    IO_println(" 1 - procedimento 01   2 - procedimento 02");
    IO_println(" 3 - procedimento 03   4 - procedimento 04");
    IO_println(" 5 - procedimento 05   6 - procedimento 06");
    IO_println(" 7 - procedimento 07   8 - procedimento 08");
    IO_println(" 9 - procedimento 09  10 - procedimento 10");
    IO_println(""); // para saltar linha
  }
}

int main(void) {
  // IO_debugOFF ( );           // desativar a interatividade

  int opcao = 0;

  // repetir ate' desejar parar
  do {
    // opcoes
    menu();

    // ler opcao
    opcao = IO_readint("Qual a sua opcao? ");

    // escolher acao
    switch (opcao) {
    case 0:
      break;
    case 1:
      procedimento01();
      break;
    case 2:
      procedimento02();
      break;
    case 3:
      procedimento03();
      break;
    case 4:
      procedimento04();
      break;
    case 5:
      procedimento05();
      break;
    case 6:
      procedimento06();
      break;
    case 7:
      procedimento07();
      break;
    case 8:
      procedimento08();
      break;
    case 9:
      procedimento09();
      break;
    case 10:
      procedimento10();
      break;

    default:
      IO_pause("\nERRO: Opcao invalida.\n");
      break;
    } // fim escolher
  } while (opcao != 0);

  // encerrar execucao
  IO_pause("\nApertar ENTER para terminar.\n");
} 