#include <stdio.h>
#include <locale.h>

// ASSINATURAS DAS FUN��ES

void menuPrincipal(void);
void cadastroAluno(void);
void cadastroSerie(void);
void desenvolvimentoAluno(void);
void financeiro(void);

// ESSA FUN��O IR� CHAMAR A OUTRAS FUN��ES APENAS

int main(void){
	setlocale(LC_ALL, "portuguse");
	
	menuPrincipal();
	return 0;
}

// FUN��ES

void menuPrincipal(void){
	int escolha;
	while (escolha != 0){
	printf("###################################\n");
	printf("#   1 - CADASTRO DE ALUNO         #\n");
	printf("#   2 - CADASTRO DE S�RIE         #\n");
	printf("#   3 - DESENVOLVIMENTO DE ALUNO  #\n");
	printf("#   4 - FINANCEIRO                #\n");
	printf("#                                 #\n");
	printf("#   0 - SAIR                      #\n");
	printf("###################################\n");
	printf("\n");
	printf(">>> Escolha sua op��o: ");
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
		printf("Escolha as op��es que est�o no menu acima!\n");
	}
	}
}

void cadastroAluno(void){
	printf("CADASTRO DE ALUNO!\n");
	}
void cadastroSerie(void){
	printf("CADASTRO DE S�RIES!\n");
	}
void desenvolvimentoAluno(void){
	printf("DESENVOLVIMENTO DE ALUNO!\n");
	}
void financeiro(void){
	printf("FINANCEIRO!\n");
	}
