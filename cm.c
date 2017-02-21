#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
void main()
{
    int p=50;
    setlocale(LC_MONETARY,"en_IN");
    struct lconv *lc=localeconv();
    printf("%s%d",lc->currency_symbol,p);
    
}

