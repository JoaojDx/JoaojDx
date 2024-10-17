#include <stdio.h>

int main(){
char res[30];
    int i, tam, cont = 0;
    char *pr = NULL;
    pr = res;

    printf("Insira uma frase: ");
    gets(pr);
    fflush(stdin);

    tam = strlen(pr);

    for(i=0;i<tam;i++){
            if(*(pr+i) == 'a' || *(pr+i) == 'A'){
            cont++;
            }
    }

    if(cont > 0)
        printf("\nCaractere 'a'/'A' detectado");
    else
        printf("\nCaractere 'a'/'A' nao foi detectado");

    printf("\n\nA frase e: \n\n%s\n\nA letra 'a'/'A' aperece %i vez(es)\n", res, cont);

        return 0;

}//main