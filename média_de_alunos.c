#include <stdio.h>

int main (void){
    char nome[2] [30];
    float n1[2] , n2[2] , media_aluno[2] , media_total , somatoria_dos_alunos = 0;
    int cont = 0 , qtd_alunos;

    printf("Informe A quantidade de alunos : ");
        scanf("%d" , &qtd_alunos);

    for(int i = 0 ; i < qtd_alunos ; i++){
        printf("\n Digite o nome do aluno  %d: " , i + 1 );
            scanf("%s" , nome[i]);
        printf("Digite a nota 1 do aluno %s\n : ", nome[i]);
            scanf("%f" , &n1[i]);
        printf("Digite a nota 2 do aluno %s\n :  " , nome[i]);
            scanf("%f" , &n2[i]);

        media_aluno[i] = (n1[i] + n2[i]) / 2;

        printf("A media do aluno %s e %.1f \n", nome[i] , media_aluno[i]);

        if(media_aluno[i] > 6) {
            printf("%s esta aprovado \n" , nome[i]);
        }else {
            printf("%s esta reprovado \n" , nome[i]);
        }

        cont++;
        somatoria_dos_alunos += media_aluno[i];
    }

    media_total =  somatoria_dos_alunos / cont ;

    printf("\nA media da turma e %.1f" , media_total);
}