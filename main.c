#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fp;
    int id=0, resp;
    char nome[10], tel[21];
    fp=fopen("dado.xml", "w");
    if(fp==NULL){
        printf("Não foi possivel criar o arquivo");
        exit(1);
    }
    fprintf(fp,"<Banco name=\"Lista Alunos\">");
    do{
        id++;
        printf("Nome:");
        scanf("%s", nome);
        printf("Telefone:");
        scanf("%s", tel);
        fprintf(fp, "\n<registro id=\"%03d\">", id);
        fprintf(fp, "\n\t<nomes>%s</nome>", nome);
        fprintf(fp, "\n\t<fone>%s</fone>", tel);
        fprintf(fp, "\n</registro>");
        printf("\n\n0-sair\n1-inserir");
        scanf("%d", &resp);
    } while(resp!=0);
    fprintf(fp, "\n</Banco>");
    return 0;
    fclose(fp);
}
