#include<stdio.h>
int main()
{
    int boy;
    printf("ka� cm?");
    scanf("%d",&boy);
    if(boy>16)
    {
        printf("dostum ger�ekten ka� cm? (??)");
        scanf("%d",&boy);
    }
    printf("          ?????????\n");
    printf("        ???????????\n");
    printf("       ??????????????\n");
    printf("      ????????????????\n");
    printf("      ????????????????\n");
    printf("       ???????????????\n");
    printf("        ????????????\n");
    while(boy>=0)
    {
        printf("???   ??????????????\n");
        printf("???   ??????????????\n");
        printf("???  ? ?????????????\n");
boy-=1;
    }
    printf("     ?????        ????????\n");
    printf("   ?????????????? ???????\n");
    printf("  ???????????????????????\n");
    printf("  ???????????????????????\n");
    printf("  ??????????????????????? \n");
    printf("  ???????????????????????\n");
    printf("  ???????????????????????\n");
    printf("??  ????????????????????\n");

����return�0;
}