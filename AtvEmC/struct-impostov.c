#include <stdio.h>
typedef struct IMOVEL
   {
      int nreg;
	  float impt;
	  int atraso;
   } imovel;

typedef struct TABELAIMPOSTO
   {
      float ini;
      float fim;
	  float perc;
   } impost;

void insercao (int tam, imovel *vetor)
{
    int i,j, y;
	imovel aux;
    j=1;
    while (j<=tam-1)
	{
		 aux = vetor[j];

		 i = j - 1;
         while (  i >= 0 &&  vetor[i].atraso > aux.atraso )
         {
		   vetor[i+1] = vetor[i];
	       i = i - 1;
		 }
        vetor[i+1] = aux;
        j = j + 1;

   }
}

int main (){
    impost tabela[4];
    imovel tabImo[5];
    float valfinal;

    tabela[0].ini = 0;
    tabela[0].fim = 1000;
    tabela[0].perc = 0.05;

    tabela[1].ini = 1000.01;
    tabela[1].fim = 2000;
    tabela[1].perc = 0.1;

    tabela[2].ini = 2000.01;
    tabela[2].fim = 5000;
    tabela[2].perc = 0.20;

    tabela[3].ini = 5000.01;
    tabela[3].fim = 999999.99;
    tabela[3].perc = 0.25;

    for(int i=0; i<=4;i++)
    {
        printf("Digite o numero do registro: ");
        scanf("%i",&tabImo[i].nreg);

        printf("\nDigite o valor do imposto: ");
        scanf("%f",&tabImo[i].impt);

        printf("\nDigite a quantidade de meses em atraso: ");
        scanf("%i",&tabImo[i].atraso);

        for(int j=0; j<=3;j++)
        {
            if(tabImo[i].impt>tabela[j].ini && tabImo[i].impt<=tabela[j].fim){
                valfinal = (tabela[j].perc * tabImo[i].impt) * tabImo[i].atraso;
                break;
            }
        }

        printf("\nO valor da multa do imovel %d e: %.2f \n\n\n", tabImo[i].nreg, valfinal);
    }

    insercao(5,tabImo);

    for(int i=0; i<=4; i++)
        printf("\nA ordem de acordo com o mes de atraso, do menor para o maior e:\n registro: %i \t mes: %i \n"
            , tabImo[i].nreg, tabImo[i].atraso);

    return 0;
}
