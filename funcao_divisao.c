#include <stdio.h>
#include "funcao_divisao.h"

float dividir(float a, float b)
{
    if(b == 0)
    {
        printf("Erro: divisao por zero!\n");
        return 0;
    }

    return a / b;
}
