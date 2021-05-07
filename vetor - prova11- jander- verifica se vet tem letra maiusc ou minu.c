/* Escreva uma função em C para verificar se um vetor contém
tanto letras minúsculas quanto maiúsculas (e não somente uma categoria).

Sua função deve:

Ter nome verifica_caso;
Ter como único parâmetro um vetor de char;
Ter como valor de retorno da função o valor 1 (ou true) caso o teste seja bem sucedido
ou 0 (ou false) caso falhe.*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool verifica_caso(char s[]){
    int i = 0;
    bool tem_m = false;
    bool tem_M = false;
    while(s[i] != '$' && (!tem_M || !tem_m)){
        if(caso(s[i]) == 'm')
            tem_m = true;
        else
            tem_M = true;
        i++;
    }
    return tem_m && tem_M;
}