# atividadeedb1
Atividade Prática 01: Algoritmos de busca + Recursão
Esse repositório tem as implementações que foram pedidas no trabalho.  


---

# Arquivos principais
- `busca_binaria.c` e `busca_binaria.h`
- `busca_seq_ordenada.c` e `busca_seq_ordenada.h`
- `recursao.c` e `recursao.h`
- `test_algorithms.c` → onde estão os testes
- `Makefile` (não consegui usar ele direito, compilei manualmente)



## Como compilar e rodar
Eu não consegui usar o `make`, então compilei assim no terminal:

gcc test_algorithms.c busca_binaria.c busca_seq_ordenada.c recursao.c -o test_c.exe



E depois rodei o programa:

./test_c.exe



## Funções implementadas

 *Busca Binária*

int busca_binaria(int n);
Procura a primeira versão defeituosa. Eu simulei a função isBadVersion dentro do código.
Retorna o número da primeira versão ruim.

 *Busca Sequencial Ordenada*

int busca_seq_ordenada(int arr[], int n, int alvo);
Percorre o vetor e retorna a posição se achar o elemento, ou -1 se não encontrar.

 *Contar Especialidades Distintas*

int conta_especialidades_distintas(int arr[], int n);
Ordena o vetor (usei bubble sort simples) e depois conta quantos valores diferentes tem.
Exemplo: {4, 2, 1, 4, 2, 1} → depois de ordenar fica {1, 1, 2, 2, 4, 4} → resultado = 3.

*Recursão*

int recursao(const char *str, char alvo);
Conta de forma recursiva quantas vezes um caractere aparece na string.
Exemplo: "banana", 'a' → retorna 3.

## *Exemplos de Testes*

No test_algorithms.c tem chamadas assim:


RUN_TEST("Busca binaria", busca_binaria(5), 3);
RUN_TEST("Especialidades distintas", conta_especialidades_distintas(arr1,6), 3);
RUN_TEST("Recursiva", recursao("banana",'a'), 3);


E no final aparece algo tipo:

Busca binaria             : OK
Especialidades distintas  : OK
Recursiva                 : OK
