#include <stdio.h>
#include <string.h>

int main()
{
    char szDest[36]="gm`fzVdmb1ld^u1^Fhojf1^bug|";
    char szInput[104]={0};
    for ( int j = 0; j < 27; ++j )
    {
        szInput[j] = szDest[j] ^ 1;
    }
    
    printf("-------------------------------------\n");
    printf("%s\n",szInput);
    printf("-------------------------------------\n");   
}