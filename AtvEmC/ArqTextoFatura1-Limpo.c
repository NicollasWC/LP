
// Criar as seguintes funcionalidades

   // 1-Mostrar todas as faturas ordenadas por nome de produto
   // Criar função que ordene por nome (por inserção)
   // Criar função que mostre as faturas (uma fatura por linha)

   // 2- Realizar pesquisa binária por número de fatura. Criar função
   // que peça ao usuário um número de fatura para pesquisa. Caso encontre,
   // mostrar os dados encontrados, senão emitir mensagem de erro.
   // Criar função para pesquisa binária

   // 3- Pesquisar uma fatura e mostrar todos os seus produtos.
   // Criar função para realizar uma pesquisa sequencial.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "func-sub.c"

typedef struct Fatura
{
	int numFatura;
	int codProduto;
	char nomeProduto[32];
	int qtde;
	double vrunit;
	double vrfrete;
	int codforn;
} fatura;

void insercao (int qtde, fatura *vetor)
{
    int i,j, y;
	fatura aux;
    j=1;
    while (j<=qtde-1)
	{
		 aux = vetor[j];

		 i = j - 1;
         while (  i >= 0 &&  toupper(vetor[i].nomeProduto[0]) > toupper(aux.nomeProduto[0]) )
         {
		   vetor[i+1] = vetor[i];
	       i = i - 1;
		 }
        vetor[i+1] = aux;
        j = j + 1;

   }
}



int LeArquivo(fatura *vetor)
{
  char linha[200];
  char aux[40];
  FILE *arq;
  fatura vfatura;
  int qtde=0;

  arq = fopen("fatura.txt","r");

  if (arq == NULL)
  {
    printf("Erro ao abrir arquivo\n");
    return -1;
  }
  fgets(linha,200,arq);
  while (!feof(arq))
  {
	//printf("\n%s",linha);
	substr(linha,aux,1,5);
	vfatura.numFatura = atoi(aux);
	substr(linha,aux,5,7);
	vfatura.codProduto = atoi(aux);
	substr(linha,aux,8,40);
	strcpy(vfatura.nomeProduto,rtrim(aux));
	substr(linha,aux,41,44);
	vfatura.qtde = atoi(aux);
	substr(linha,aux,45,54);
    vfatura.vrunit = atoi(aux)/100.0;
	substr(linha,aux,55,64);
    vfatura.vrfrete = atoi(aux)/100.0;
	substr(linha,aux,65,68);
	vfatura.codforn = atoi(aux);

	if (vfatura.codforn > 0 && vfatura.qtde > 0)
	{

	  vetor[qtde]=vfatura;
      qtde++;
    }

    fgets(linha,100,arq);
  }

  fclose(arq);
  return qtde;
}


int main()
{
   fatura vetorFatura[20];
   int qtde;
   qtde = LeArquivo(vetorFatura);

    printf("%d", qtde);

    insercao(qtde, vetorFatura);

    for(int i=0; i<=4; i++)
        printf("\n %d \t %d \t %s", vetorFatura[i].numFatura, vetorFatura[i].codProduto, vetorFatura[i].nomeProduto);
}
