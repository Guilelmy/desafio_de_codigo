#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct nldli
{
    int valor;
    struct nldli *anterior;
    struct nldli *proximo;
} NoLDLi;

typedef struct ldli
{
    int tamanho;
    NoLDLi *inicio;
    NoLDLi *fim;
} LDLi;

LDLi *criarLDLi();

NoLDLi *criarNoLDLi(int valor, NoLDLi *anterior, NoLDLi *proximo);

void inserirInicio(LDLi *lista, int valor);
void mostrarLista(LDLi *lista);
void destruirLista(LDLi *lista);
int removerInicio(LDLi *lista);
void inserirFinal(LDLi *lista, int valor);
void removezeros(LDLi *lista)
{
    while (lista->tamanho > 0 && lista->inicio->valor == 0)
    {
        removerInicio(lista);
    }

    if (lista->tamanho == 0)
    {
        inserirInicio(lista, 0);
    }
}

int main()
{
    while(1){
         int digitoFalho;
        char numeroOriginal[10100]; 
         scanf("%d %s", &digitoFalho, numeroOriginal);
        
        if (digitoFalho == 0 && strcmp(numeroOriginal, "0") == 0) {
            break;
        }
        LDLi *lista = criarLDLi();
        for (int i = 0; numeroOriginal[i] != '\0'; i++)
        {
            if (numeroOriginal[i] != digitoFalho + '0')
            {
                inserirFinal(lista, numeroOriginal[i] - '0');
            }
        }
        removezeros(lista);
        mostrarLista(lista);
        destruirLista(lista);
        printf("\n");
    }


    return 0;
}

// Cria uma nova lista de inteiros
LDLi *criarLDLi()
{
    LDLi *lista = (LDLi *)malloc(sizeof(LDLi));
    lista->tamanho = 0;
    lista->inicio = lista->fim = NULL;
    return lista;
}

// Cria um novo no de uma lista de inteiros
NoLDLi *criarNoLDLi(int valor, NoLDLi *anterior, NoLDLi *proximo)
{
    NoLDLi *novo = (NoLDLi *)malloc(sizeof(NoLDLi));
    novo->valor = valor;
    novo->proximo = proximo;
    novo->anterior = anterior;
    return novo;
}


void inserirInicio(LDLi *lista, int valor)
{
    if (lista->tamanho == 0) 
    {
        NoLDLi *novo = criarNoLDLi(valor, NULL, NULL);
        lista->inicio = lista->fim = novo;
    }
    else  
    {
        NoLDLi *novo = criarNoLDLi(valor, NULL, lista->inicio);
        lista->inicio->anterior = novo;
        lista->inicio = novo;
    }
    lista->tamanho++;
}

void inserirFinal(LDLi *lista, int valor)
{
    if (lista->tamanho == 0) // lista->inicio == NULL  lista->fim == NULL
    {
        NoLDLi *novo = criarNoLDLi(valor, NULL, NULL);
        lista->inicio = lista->fim = novo;
    }
    else  // 1 ou mais elementos
    {
        NoLDLi *novo = criarNoLDLi(valor, lista->fim, NULL);
        lista->fim->proximo = novo;
        lista->fim = novo;
    }
    lista->tamanho++;
}

void mostrarLista(LDLi *lista)
{
    if (lista->tamanho == 0)
    {
        printf("NULL\n");
    }
    else
    {
        NoLDLi *aux = lista->inicio;
        while (aux != NULL) 
        {
            printf("%d", aux->valor);
            aux = aux->proximo;
        }
    }
}

void destruirLista(LDLi *lista)
{
    if (lista->tamanho != 0)
    {
        NoLDLi *aux1 = lista->inicio;
        NoLDLi *aux2;
        while (aux1 != NULL)
        {
            aux2 = aux1->proximo;
            free(aux1);
            aux1 = aux2;
        }
    }
    free(lista);
}

int removerInicio(LDLi *lista)
{
    int valor;
    if (lista->tamanho == 0)
    {
        printf("Lista vazia");
        valor = -1;
    }
    else
    {
        valor = lista->inicio->valor;
        if (lista->tamanho == 1)  // lista->inicio->proximo == NULL  // lista->inicio == lista->fim
        {
            free(lista->inicio);
            lista->inicio = lista->fim = NULL;
        }
        else
        {
            NoLDLi * aux = lista->inicio->proximo;
            free(lista->inicio);
            lista->inicio = aux;
            lista->inicio->anterior = NULL;  // aux->anterior = NULL;
        }
        lista->tamanho--;
    }
    return valor;
}

