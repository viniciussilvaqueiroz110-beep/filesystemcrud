#include <stdio.h>
#include <string.h>

int criar_cha(char *cha)
{

    FILE *file;
    file = fopen("chas.txt", "w");
        
        fprintf(file, "Cha:%s", cha);

    fclose(file);
    
    return 0;
    }

char ler_cha(char *chapedido)
{
    char cha[25];
    int encontrado;

    FILE *file;
    file = fopen("chas.txt", "r");

    if (file == NULL)
    {
        printf("ERRO AO ABRIR O ARQUIVO");
        return 1;
    }
    while (!feof(file))
    {
        fgets(cha, 25, file);

        encontrado = strcmp(chapedido, cha);

    }
    fclose(file);
    return encontrado;
}

 int remover_cha(char *chapedido)
{
    char cha[25];
    int excluido;
    char coluna[2];
    char nome[20];
    char linha[25];

    FILE *origem, *destino;
    origem = fopen("chas.txt", "r");
    destino = fopen("temp.txt", "w");
    while (fgets(linha, 25, origem))
    {
        sscanf(linha, "%2[^,],%20[^,]", coluna, nome);
        
        excluido = strcmp(chapedido, cha);
    }
    fclose(origem);
    fclose(destino);
    remove("chas.txt");
    rename("temp.txt", "chas.txt");
    
    return excluido;
}