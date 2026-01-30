#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <tchar.h>

int _tmain(int argc, _TCHAR* argv[]) 
{
    char szLine1[256],szLine2[256];
    int nLen;
    system("chcp 1251 >nul");
    printf("Input a string\r\n");
    fgets(szLine1, 256, stdin);
    nLen = strlen(szLine1);
    memcpy(szLine2, szLine1, nLen);
    szLine2[nLen - 1] = 0;
    szLine2[0] = szLine1[nLen - 2];
    szLine2[nLen - 2] = szLine1[0];
    printf("Exchange the first and the last symbol in the string\r\n");
    printf("Source string:%s", szLine1);
    printf("Destination string:%s\r\n", szLine2);
    getc(stdin);
    return 0;
}
