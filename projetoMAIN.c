#include <stdio.h>
#include <locale.h>

// ASSINATURAS DAS FUNÇÕES

void menuPrincipal(void);
void cadastroAluno(void);
void cadastroSerie(void);
void desenvolvimentoAluno(void);
void financeiro(void);

// ESSA FUNÇÃO IRÁ CHAMAR A OUTRAS FUNÇÕES APENAS

int main(void){
	setlocale(LC_ALL, "portuguse");
	
	menuPrincipal();
	return 0;
}

// FUNÇÕES

void menuPrincipal(void){
	int escolha;
	while (escolha != 0){
	printf("###################################\n");
	printf("#   1 - CADASTRO DE ALUNO         #\n");
	printf("#   2 - CADASTRO DE SÉRIE         #\n");
	printf("#   3 - DESENVOLVIMENTO DE ALUNO  #\n");
	printf("#   4 - FINANCEIRO                #\n");
	printf("#                                 #\n");
	printf("#   0 - SAIR                      #\n");
	printf("###################################\n");
	printf("\n");
	printf(">>> Escolha sua opção: ");
	scanf("%d", &escolha);
	if (escolha == 1)
		cadastroAluno();
	if (escolha == 2)
		cadastroSerie();
	else if (escolha == 3)
		desenvolvimentoAluno();
	else if (escolha == 4)
		financeiro();
	else{
		printf("Escolha as opções que estão no menu acima!\n");
	}
	}
}

void cadastroAluno(void){
	printf("CADASTRO DE ALUNO!\n");
	}
void cadastroSerie(void){
	printf("CADASTRO DE SÉRIES!\n");
	}
void desenvolvimentoAluno(void){
	printf("DESENVOLVIMENTO DE ALUNO!\n");
	}
void financeiro(void){
	printf("FINANCEIRO!\n");
	}
