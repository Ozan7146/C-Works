//
//  main.cpp
//  hesap makinesi1
//
//  Created by Utku Eyerci on 24.10.2022.

#include <string.h>
#include <stdio.h>
int main()
{
    int cevap=0;
    int say1=0;
    int say2=0;
    char isaret[20];
    printf(" HESAP MAKİNESİ\n yapmak istediğiniz işlemi yazınız:\n");
    scanf("%s",isaret);
    if (isaret=='toplama')
    {
        printf("ilk sayı:\n");
        scanf("%d",&say1);
        printf("ikinci sayı:\n");
        scanf("%d",&say2);
        cevap= (say1+say2);
        printf("%.d + %.d =%.d \n",say1,say2,cevap);
    }
    else if (isaret=='cikarma')
    {
        printf("ilk sayı:\n");
        scanf("%d",&say1);
        printf("ikinci sayı:\n");
        scanf("%d",&say2);
        cevap= (say1-say2);
        printf("%.d - %.d =%.d \n",say1,say2,cevap);    }
    
    else if (isaret=='carpma')
    {
        printf("ilk sayı:\n");
        scanf("%d",&say1);
        printf("ikinci sayı:\n");
        scanf("%d",&say2);
        cevap= (say1-say2);
        printf("%.d * %.d =%.d \n",say1,say2,cevap);    }
    else if (isaret=='bolme')
    {
        printf("ilk sayı:\n");
        scanf("%d",&say1);
        printf("ikinci sayı:\n");
        scanf("%d",&say2);
        cevap= (say1-say2);
        printf("%.d / %.d =%.d \n",say1,say2,cevap);    }
    
    
    
    
    return 0;
}
