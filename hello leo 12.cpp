#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> // biblioteca de aloca��o de espa�o de mem�ria
#include <locale.h> // biblioteca de aloca��o de texto por regi�o
#include <string.h> // biblioteca respons�vel por cuidar das string

int registro()
{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a ser cadastrado: ");
	scanf("%s", cpf);
	
	strcpy(arquivo ,cpf);
	
	FILE *file;
	file = fopen(arquivo, "w");
	fprintf(file,cpf);
fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s", nome);

	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s", cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	system("pause");
}

int consulta()
{
	setlocale(LC_ALL, "portuguese");
	
    char cpf[40];
    char conteudo[200];

    printf("Digite o CPF a ser consultado: ");
    scanf("%s",cpf);
    
    FILE *file;
    file = fopen(cpf,"r");
    
    if(file == NULL)
    {
    	printf("N�o foi possiv�l abrir o arquivo, N�o localizado!.\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas s�o as informa��es do usu�rio: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
		system("pause");
}

int deletar()
{
		char cpf[40];
	
	printf("Digite o CPF a ser deletado: ");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("O usu�rio n�o se encontra nno sistema!.\n");
	    system("pause");
	}
}



int main()
{
int opcao=0;
	int x=1;
	
	for(x=1;x=1;)
	{
	
	system("cls");
	
	setlocale(LC_ALL, "portuguese");
	
	printf("### cart�rio do leo ###\n\n");
	printf("escolha a op��o do menu: \n\n");
	printf("\t1 - registrar nomes\n");
	printf("\t2 - consultar nomes\n");
	printf("\t3 - deletar nomes\n\n");
	printf("\t4 - sair do sistema\n\n");
	printf("op��o: ");
	
    scanf("%d" , &opcao);
	
	system("cls");

    switch(opcao)
    {
    	case 1:
    	registro();
		break;
    	
    	case 2:
        consulta();
    	break;
    	
    	case 3:
        deletar();
    	break;
    	
    	case 4:
    	printf("Obrigado por utilizar o sistema!\n");
    	return 0;
    	break;
    	
        default:
        printf("Essa op��o n�o est� disponivel!\n");
    	system("pause");
    	break;
	}
   
	}
}	

     

	

