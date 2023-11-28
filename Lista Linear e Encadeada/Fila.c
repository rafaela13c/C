#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_FILA 5

struct TipoNodo
{
    int info;
};

typedef struct TipoNodo TipoNodo;

int menu(void);
int enfileirar(TipoNodo fila[], int *inicio, int *fim, int dados);
int desenfileirar(TipoNodo fila[], int *inicio, int *fim);
void quantidadeElementos(int inicio, int fim);
void mostrarInicio(TipoNodo fila[], int inicio);
void mostrarFila(TipoNodo fila[], int inicio, int fim);

int main()
{
    TipoNodo fila[TAMANHO_FILA];
    int inicio = -1, fim = -1;
    int op, dados, sucesso;

    do
    {
        op = menu();
        switch (op)
        {
        case 1:
            printf("Digite um número: \n");
            scanf("%d", &dados);
            sucesso = enfileirar(fila, &inicio, &fim, dados);
            if (sucesso == 0)
                printf("\nDeu certo!!!\n");
            else
                printf("\nErro!!!\n\n");
            break;
        case 2:
            dados = desenfileirar(fila, &inicio, &fim);
            if (dados != -1)
                printf("Removido com sucesso! Dado: %d\n\n", dados);
            else
                printf("A fila está vazia!\n\n");
            break;
        case 3:
            printf("A quantidade de elementos é: \n");
            quantidadeElementos(inicio, fim);
            break;
        case 4:
            printf("O primeiro elemento é: \n");
            mostrarInicio(fila, inicio);
            break;
        case 5:
            printf("A fila é: \n");
            mostrarFila(fila, inicio, fim);
            break;
        default:
            if (op != 0)
            {
                printf("\nOpcao invalida!!!\n");
            }
        }
    } while (op != 0);

    return 0;
}

int menu()
{
    int op;
    printf("\n\nMenu\n");
    printf("[1] Enfileirar\n");
    printf("[2] Desenfileirar\n");
    printf("[3] Quantidade de elementos\n");
    printf("[4] Mostrar quem é o início\n");
    printf("[5] Mostrar fila\n");
    printf("[0] Sair\n");
    printf("______________________\n");
    printf("Escolha a opção:\n");
    scanf("%d", &op);
    return op;
}

int enfileirar(TipoNodo fila[], int *inicio, int *fim, int dados)
{
    if (*fim == TAMANHO_FILA - 1)
    {
        printf("A fila está cheia!\n");
        return 1;
    }
    else
    {
        if (*inicio == -1)
            *inicio = 0;
        *fim = *fim + 1;
        fila[*fim].info = dados;
        return 0;
    }
}

int desenfileirar(TipoNodo fila[], int *inicio, int *fim)
{
    if (*inicio == -1)
        return -1;

    int dados = fila[*inicio].info;

    if (*inicio == *fim)
    {
        *inicio = -1;
        *fim = -1;
    }
    else
    {
        *inicio = *inicio + 1;
    }

    return dados;
}

void quantidadeElementos(int inicio, int fim)
{
    if (inicio == -1)
        printf("0\n");
    else
        printf("%d\n", fim - inicio + 1);
}

void mostrarInicio(TipoNodo fila[], int inicio)
{
    printf("%d\n", fila[inicio].info);
}

void mostrarFila(TipoNodo fila[], int inicio, int fim)
{
    if (inicio == -1)
    {
        printf("A fila está vazia!\n");
    }
    else
    {
        for (int i = inicio; i <= fim; i++)
        {
            printf("%d\t", fila[i].info);
        }
        printf("\n");
    }
}

