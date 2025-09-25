#include <stdio.h>
#include "busca_seq_ordenada.h"
#include "busca_binaria.h"
#include "recursao.h"

#define RUN_TEST(name, expr, expected) \
do{ \
    int result=(expr); \
    printf("%-25s : %s\n", name,(result==expected)?"OK":"FAIL"); \
}while(0)

int main(){
    int arr2[] = {5, 7, 5, 9, 7, 10, 5};
    int n2 = 7;
    RUN_TEST("Especialidades distintas", conta_especialidades_distintas(arr2, n2), 4);

    RUN_TEST("Busca binaria", busca_binaria(5),3);
    RUN_TEST("Recursiva", recursao("banana", 'a'), 3);

    return 0;
}
