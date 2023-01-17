#include <stdio.h>
#include <string.h>

int main()
{
    int t=0, v=0, q=0;
    char konu[20];
    char X[20],Y[20],T[20],V[20];
    printf("FÝZÝK HESAPLAYICISI\n");
    printf("ünite bigisini giriniz\n");
    scanf("%s",konu);
    if(strcmp(konu, "2")==0||strcmp(konu, "motion")==0||strcmp(konu, "hareket")==0||strcmp(konu, "doðrusal hareket")==0)
    {
        printf("x:");
        scanf(" %c",X);//hatalar: deðeri iki haneli girince ?y deðerini atlýyor.
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
                t = 'T';// bu deðerleri eþitlemiyor ancak T deðerini printf'e yazdýðýmýzda outputta doðru bir þekilde gösteriyor.
		v = 'V';
                q = v * t;//q='X'/'T'; þeklinde de denedim.Char deðerleri neden çarpmýyor/bölmüyor?
                //q='X'+'T'; yaptýðýmýzda çalýþýyor.
                printf("Vx= %d \n",t);//hesaplama sonuçlarýný göstermiyor/hatalý gösteriyor.
            }
          
        }
       
    }
    return 0;
}
