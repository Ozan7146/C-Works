#include <stdio.h>
#include <string.h>

int main()
{
    int t=0, v=0, q=0;
    char konu[20];
    char X[20],Y[20],T[20],V[20];
    printf("F�Z�K HESAPLAYICISI\n");
    printf("�nite bigisini giriniz\n");
    scanf("%s",konu);
    if(strcmp(konu, "2")==0||strcmp(konu, "motion")==0||strcmp(konu, "hareket")==0||strcmp(konu, "do�rusal hareket")==0)
    {
        printf("x:");
        scanf(" %c",X);//hatalar: de�eri iki haneli girince ?y de�erini atl�yor.
        printf("y:");
        scanf(" %c",Y);
        printf("t:");
        scanf(" %c",T);
        printf("V:");
        scanf(" %c",V);
        if(strcmp(Y,"-")==0)
        {
            if(strcmp(V,"-")==0)
            {
                t = 'T';// bu de�erleri e�itlemiyor ancak T de�erini printf'e yazd���m�zda outputta do�ru bir �ekilde g�steriyor.
		v = 'V';
                q = v * t;//q='X'/'T'; �eklinde de denedim.Char de�erleri neden �arpm�yor/b�lm�yor?
                //q='X'+'T'; yapt���m�zda �al���yor.
                printf("Vx= %d \n",t);//hesaplama sonu�lar�n� g�stermiyor/hatal� g�steriyor.
            }
          
        }
       
    }
����return�0;
}
