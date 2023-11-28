#include <stdio.h>
#define N 5

struct TipoNodo
{
    int codigo;
};

typedef struct TipoNodo TipoNodo;

int menu();
int inserirInicio(TipoNodo LL[], int *IL, int *FL, TipoNodo infoNodo);
int remover(TipoNodo LL[], int *IL, int *FL);
int quantidadeelementos(int IL, int FL);
int mostrartopo(TipoNodo LL[], int IL);
int mostrar(TipoNodo LL[], int IL, int FL);

int main()
{
    TipoNodo LL[N], infoNodo;
    int opcao, IL = -1, FL = -1;
    do
    {
        opcao = menu();
        switch (opcao)
        {
        case 1:
            printf("\n>>>>>> Inserir um nó <<<<<\n");
            printf("\nCódigo...: ");
            scanf("%d", &infoNodo.codigo);
            if (inserirInicio(LL, &IL, &FL, infoNodo))
                printf("Lista cheia, não foi possível inserir\n");
            else
                printf("Inserido com sucesso!!!\n");
            break;
        case 2:
            if (remover(LL, &IL, &FL))
                printf("Lista vazia, não foi possível remover\n");
            else
                printf("Removido com sucesso!!!\n");
            break;
        case 3:
            printf("\nQuantidade de elementos: %d\n", quantidadeelementos(IL, FL));
            break;
        case 4:
            printf("\nMostrar Topo da Pilha\n");
            mostrartopo(LL, IL);
            break;
        case 5:
            printf("\nMostrar Pilha\n");
            mostrar(LL, IL, FL);
            break;
        case 0:
            printf("Encerrando...\n");
            break;
        default:
            printf("Invalido\n");
            break;
        }
    } while (opcao != 0);

    return 0;
}

int menu()
{
    int opcao;
    printf("_________ M E N U _________\n");
    printf("[1] Inserir no início\n");
    printf("[2] Remover no início\n");
    printf("[3] Quantidade de elementos\n");
    printf("[4] Mostrar topo\n");
    printf("[5] Mostrar pilha\n");
    printf("[0] Sair\n");
    printf("___________________________\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    return opcao;
}

int inserirInicio(TipoNodo LL[], int *IL, int *FL, TipoNodo infoNodo)
{
    if (*IL == 0 && *FL == N - 1)
        return 1;
    else
    {
        if (*IL == -1)
            *IL = *FL = 0;
        else if (*IL > 0)
            *IL = *IL - 1;
        else
        {
            for (int i = *FL; i >= *IL; i--)
                LL[i + 1] = LL[i];
            *FL = *FL + 1;
        }
        LL[*IL] = infoNodo;
        return 0;
    }
}

int remover(TipoNodo LL[], int *IL, int *FL)
{
    if (*IL == -1)
        return 1;
    else
    {
        for (int i = *IL; i < *FL; i++)
            LL[i] = LL[i + 1];
        *FL = *FL - 1;
        if (*FL < *IL)
            *IL = *FL = -1;
        return 0;
    }
}

int quantidadeelementos(int IL, int FL)
{
    if (IL == -1)
        return 0;
    return FL - IL + 1;
}

int mostrartopo(TipoNodo LL[], int IL)
{
    if (IL == -1)
    {
        printf("Pilha vazia\n");
    }
    else
    {
        printf("%4d\n", LL[IL].codigo);
    }
}

int mostrar(TipoNodo LL[], int IL, int FL)
{
    if (IL == -1)
    {
        printf("Pilha vazia\n");
    }
    else
    {
        for (int i = IL; i <= FL; i++)
        {
            printf("%4d\n", LL[i].codigo);
        }
    }
}
