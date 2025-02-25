#include <stdio.h>

int main () {




//Carta 01

    char estado_1 [50];
    char codigo_1[10];
    char cidade_1 [50];
    int populacao_1; 
    float area_1;
    float pib_1;
    int turistas_1;

//Carta 02

    char estado_2 [50];
    char codigo_2[10];
    char cidade_2 [50];
    int populacao_2; 
    float area_2;
    float pib_2;
    int turistas_2;


    

    #define LIMPAR_BUFFER() (void)getchar();

printf("Digite as informações da primera carta:\n");

printf("Qual seu estado de (A-H)? ");
scanf("%s", &estado_1);
LIMPAR_BUFFER ();

printf("Qual o seu código? ");
scanf("%s", codigo_1);
LIMPAR_BUFFER ();


printf("Qual a sua cidade? ");
scanf("%[^\n]s", cidade_1); 
LIMPAR_BUFFER ();

printf("Qual a população? ");
scanf("%d", &populacao_1);
LIMPAR_BUFFER ();


printf("Qual a aréa em km²? ");
scanf("%f", &area_1);
LIMPAR_BUFFER ();

printf("Qual o PIB? ");
scanf("%f", &pib_1);
LIMPAR_BUFFER ();

printf("Pontos turísticos? ");
scanf("%d", &turistas_1);
LIMPAR_BUFFER ();



printf("Digite as informações da segunda carta:\n");

printf("Qual seu estado de (A-H)? ");
scanf("%s", &estado_2);
LIMPAR_BUFFER ();

 

printf("Qual o seu código? ");
scanf("%s", codigo_2);
LIMPAR_BUFFER ();


printf("Qual a sua cidade? ");
scanf(" %[^\n]s", cidade_2); 
LIMPAR_BUFFER ();

printf("Qual a população? ");
scanf("%d", &populacao_2);
LIMPAR_BUFFER ();


printf("Qual a aréa em km²? ");
scanf("%f", &area_2);
LIMPAR_BUFFER ();

printf("Qual o PIB? ");
scanf("%f", &pib_2);
LIMPAR_BUFFER ();
 

printf("Pontos turísticos? ");
scanf("%d", &turistas_2);
LIMPAR_BUFFER ();
 



printf ("Jogadores vejam os seus resultados inseridos:\n");
printf ("Estado: %s\n",estado_1);
printf ("Código: %s\n", codigo_1);
printf ("Cidade: %s\n", cidade_1);
printf ("População: %d\n", populacao_1);
printf ("Aréa em km²: %2.f\n", area_1);
printf ("PIB: %f\n", pib_1);
printf ("Quantidade de Pontos turísticos: %d\n", turistas_1); 

printf ("Jogadores, vejam os seus resultados inseridos:\n");
printf ("Estado: %s\n",estado_2);
printf ("Código: %s\n", codigo_2);
printf ("Cidade: %s\n", cidade_2);
printf ("População: %d\n", populacao_2);
printf ("Aréa em km²: %2.f\n", area_2);
printf ("PIB: %f\n", pib_2);
printf ("Quantidade de Pontos turísticos: %d", turistas_2); 











  return 0;
 










}
