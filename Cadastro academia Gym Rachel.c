#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

typedef struct {
    char cpf[12];
    char nome[50];
    int idade;
    char sexo;
    char email[70];
    int telefone;
	char planos[10];
} Cliente;

#define MAX_CLIENTES 5
Cliente lista[MAX_CLIENTES];
int quant = 0;

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Declaração das funções.
void pesquisarCliente();
void editarCliente();
void excluirCliente();
void informacoes();
void treino();
void medida();
void salvarinfor();
void carregarDados();

int main() {

setlocale(LC_ALL, "");


    carregarDados();

    int op;
    do {
        printf("\n");
        printf("=============================================\n");
        printf("||          BEM-VINDO AO GYM RACHEL        ||\n");
        printf("=============================================\n");
        printf("1. Cadastro de Cliente\n");
        printf("2. Medidas\n");
        printf("3. Treino\n");
        printf("4. Pesquisar Cliente\n");
        printf("5. Editar Cliente\n");
        printf("6. Excluir Cliente \n");
        printf("0. Sair\n");
        printf("=============================================\n");
        printf("Selecione uma opção acima: ");
        scanf("%d", &op);
        printf("\n \n");

        switch (op) {
            case 0:
                printf("Terminamos, muito obrigado por fazer parte do GYM RACHEL. \n");
                break;
            case 1:
                informacoes();
                break;
            case 2:
                medida();
                break;
            case 3:
                treino();
                break;
            case 4:
                pesquisarCliente();
                break;
            case 5:
                editarCliente();
                break;
            case 6:
                excluirCliente();
                break;
            default:
                printf("[ERRO] Você digitou um número inválido. \n");
                break;
        }
    } while (op != 0);

    return 0;
}

void informacoes() {
    if (quant < MAX_CLIENTES) {
        Cliente novo;

        scanf("%*c");

        printf("-Digite o nome: ");
        fgets(novo.nome, sizeof(novo.nome), stdin);

        printf("-Digite a idade: ");
        scanf("%d", &novo.idade);
        while (getchar() != '\n');

        printf("-Digite M para masculino e F para feminino: ");
        scanf(" %c", &novo.sexo);
        while (getchar() != '\n');

        printf("-Digite o cpf: ");
        fgets(novo.cpf, sizeof(novo.cpf), stdin);

        printf("-Digite o telefone: ");
        scanf("%d", &novo.telefone);
        while (getchar() != '\n');

        printf("-Digite o email: ");
        fgets(novo.email, sizeof(novo.email), stdin);

		printf("Para os planos:\n");
		printf("Digite Prata.\n");
		printf("Digite Ouro.\n");
		printf("Digite Diamante.\n");
		fgets(novo.planos, sizeof(novo.planos), stdin);

        lista[quant] = novo;
        quant++;

        salvarinfor();

    } else {
        printf("[ERRO] A academia está lotada. \n");
    }
}

void treino() {
	
float imc;
printf("digite o seu IMC de acordo com o calcúlo das medidas, podendo ser feito na área 'Medidas' apenas os 3 primeiros numeros:");
scanf("%f", &imc);
printf("Treinos de acordo com sua necessidade:\n");
if(imc<18.9){
    printf("Subpeso\nObjetivo Principal: Ganho de peso saudável e aumento da massa muscular\nEstrutura do Treino:\n");
    printf("\n1. Treinamento de Força\n");
    printf("O foco principal deve ser o treinamento de força, utilizando pesos livres, máquinas e exercícios de resistência corporal\n");
    printf("- Frequência: 3-4 vezes por semana\n- Exercícios: Priorize exercícios compostos que trabalham grandes grupos musculares. Exemplos:\n- Parte Inferior do Corpo: Agachamentos, leg press, levantamento terra. \n- Parte Superior do Corpo: Supino, desenvolvimento de ombros, remada, puxada na barra.\n");
    printf("- Core: Pranchas, abdominais, levantamento de pernas.\n- Séries e Repetições: 3-4 séries de 8-12 repetições para cada exercício.\n- Carga: Utilize um peso que permita completar as repetições com esforço, mas com boa forma.\n- Descanso entre Séries: 60-90 segundos.\n");
    printf("\n2. Treinamento Cardiovascular\n");
    printf("Embora o foco seja o ganho de massa, o cardio leve pode ser incluído para melhorar a saúde cardiovascular e resistência.\n- Frequência: 2-3 vezes por semana\n- Duração: 20-30 minutos por sessão\n- Intensidade: Baixa a moderada (caminhada rápida, ciclismo leve, natação).\n");
    printf("\n3. Treinamento de Flexibilidade\n");
    printf("A flexibilidade ajuda a prevenir lesões e melhora a mobilidade geral.\n- Frequência: Após cada sessão de treino de força.\n- Duração: 10-15 minutos de alongamentos estáticos e dinâmicos.\n- Foco: Alongue todos os grupos musculares principais.\n");
    printf("\nPlano de Treino Exemplo:\n \nSegunda-feira: Parte Superior do Corpo\n- Supino (barra ou halteres): 3x10\n-Desenvolvimento de Ombros: 3x10\n- Remada Curvada: 3x12\n-Puxada na Barra: 3x12\n- Prancha: 3x30 segundos\n Quarta-feira: Parte Inferior do Corpo\n- Agachamento: 4x8\n-Leg Press: 3x10\n- Passada (com halteres): 3x12 (cada perna)\n");
    printf(" Sexta-feira: Treino Misto\n- Supino Inclinado: 3x10\n- Desenvolvimento de Ombros com Halteres: 3x12\n- Levantamento Terra Romeno: 3x10\n- Prancha Lateral: 3x30 segundos (cada lado)\n");
    printf("\nDicas Adicionais:\n");
    printf("Hidratação:Beba bastante água ao longo do dia para manter-se hidratado");
	}
if(imc>=18.5 && imc<=24.9){
    printf("Peso normal\nObjetivo Principal: Manutenção da saúde geral e condicionamento físico.\nEstrutura do Treino:\n");
    printf("\n1. Treinamento de Força\n");
    printf("O foco deve ser manter ou aumentar a massa muscular, melhorando a força e a definição.\n- Frequência: 3-4 vezes por semana\n- Exercícios: Combine exercícios compostos (que trabalham grandes grupos musculares) e exercícios isolados (que focam músculos específicos). Exemplos:\n- Parte Inferior do Corpo: Agachamentos, levantamento terra, leg press, passadas.\n");
    printf("- Parte Superior do Corpo: Supino, desenvolvimento de ombros, remada, puxada na barra, elevação lateral.\n- Core:Pranchas, abdominais, elevação de pernas, Russian twists\n- Volume e Intensidade:\n- Séries e Repetições: 3-4 séries de 8-15 repetições para cada exercício.\n- Carga: Utilize um peso que permita completar as repetições com esforço, mas com boa forma.\n- Descanso entre Séries: 60-90 segundos.\n");
    printf("\n2. Treinamento Cardiovascular\n");
    printf("Inclua cardio para melhorar a resistência cardiovascular e auxiliar na manutenção do peso.\n- Frequência: 3-5 vezes por semana\n- Duração: 20-45 minutos por sessão\n- Intensidade: Variada (corrida, ciclismo, natação, HIIT).\n");
    printf("\n3. Treinamento de Flexibilidade\n");
    printf("A flexibilidade é crucial para a prevenção de lesões e melhoria da mobilidade.\n- Frequência: Diariamente ou após cada sessão de treino de força.\n- Duração: 10-15 minutos de alongamentos estáticos e dinâmicos.\n- Foco: Alongue todos os grupos musculares principais.\n");
    printf("\nPlano de Treino Exemplo:\n");
    printf("Segunda-feira: Parte Superior do Corpo\n- Supino (barra ou halteres): 3x10\n- Desenvolvimento de Ombros: 3x12\n- Remada Curvada: 3x10\n- Puxada na Barra: 3x12\nTerça-feira: Parte Inferior do Corpo e Cardio\n- Agachamento: 4x8\n- Leg Press: 3x12\n- Levantamento Terra: 3x10\n- Passada (com halteres): 3x12 (cada perna)\n- Cardio: 20 minutos de corrida ou ciclismo\nQuinta-feira: Treino Misto e Core\n- Supino Inclinado: 3x10\n- Desenvolvimento de Ombros com Halteres: 3x12\n- Agachamento: 4x8\n");
    printf("- Prancha Lateral: 3x45 segundos (cada lado)\nSexta-feira: Cardio e Flexibilidade\n- Cardio: 30-45 minutos de corrida, natação ou ciclismo\n- Alongamento: 15-20 minutos de alongamentos estáticos e dinâmicos\n");
    printf("\nDicas Adicionais:\n");
    printf("Sono: Garanta 7-9 horas de sono por noite.\n");
	}
if(imc>=25 && imc<=29.9){
    printf("Sobrepeso\nObjetivo Principal: Redução de gordura corporal e melhoria da saúde cardiovascular\nEstrutura do Treino\n");
    printf("\n1. Treinamento de Força\n");
    printf("Fortalecer os músculos ajuda a aumentar o metabolismo basal, auxiliando na perda de peso e na melhoria da composição corporal.\n- Frequência: 3-4 vezes por semana\n- Exercícios: Foco em exercícios compostos que trabalham grandes grupos musculares. Exemplos:\n- Parte Inferior do Corpo: Agachamentos, levantamento terra, leg press, passadas.\n- Parte Superior do Corpo: Supino, desenvolvimento de ombros, remada, puxada na barra, flexões.\n- Core: Pranchas, abdominais, elevação de pernas.\n- Séries e Repetições: 3-4 séries de 10-15 repetições para cada exercício.\n");
    printf("- Carga: Utilize um peso moderado que permita completar as repetições com boa forma.\n- Descanso entre Séries: 60-90 segundos.\n");
    printf("\n2. Treinamento Cardiovascular\n");
    printf("Cardio é essencial para queimar calorias, melhorar a saúde do coração e aumentar a resistência.\n- Frequência: 4-6 vezes por semana\n- Duração: 30-60 minutos por sessão\n- Intensidade: Moderada a alta (corrida, ciclismo, natação, aulas de aeróbica).\n- HIIT (Treino Intervalado de Alta Intensidade): Inclua 1-2 sessões de HIIT por semana para aumentar a queima de gordura.\n- Exemplo: 30 segundos de corrida intensa seguidos de 1-2 minutos de caminhada, repetido por 20-30 minutos.\n");
    printf("\n3. Treinamento de Flexibilidade\n");
    printf("Alongamentos ajudam a melhorar a mobilidade, prevenir lesões e promover a recuperação muscular.\n- Frequência: Diariamente ou após cada sessão de treino de força\n- Duração: 10-15 minutos de alongamentos estáticos e dinâmicos.\n- Foco: Alongue todos os grupos musculares principais.\n");
    printf("\nPlano de Treino Exemplo:\n");
    printf("Segunda-feira: Treinamento de Força e Cardio Moderado\n- Agachamento: 3x12\n- Supino (barra ou halteres): 3x12\n- Remada Curvada: 3x15\n- Passada (com halteres): 3x12 (cada perna)\n- Prancha: 3x30 segundos\n- Cardio Moderado: 30 minutos de caminhada rápida ou bicicleta\nTerça-feira: Cardio e Flexibilidade\n- Cardio: 45 minutos de corrida leve, natação ou aula de aeróbica\n- Alongamento: 15 minutos de alongamentos estáticos e dinâmicos\nQuarta-feira: Treinamento de Força e HIIT\n");
    printf("- Levantamento Terra: 3x10\n- Desenvolvimento de Ombros: 3x12\n- Puxada na Barra: 3x15\n- Flexões: 3x15\n- Abdominais: 3x20\n- HIIT: 20-30 minutos de intervalos (30 segundos de alta intensidade seguidos de 1-2 minutos de descanso)\nSexta-feira: Treinamento de Força e Cardio Moderado\n- Leg Press: 3x15\n- Supino Inclinado: 3x12\n- Desenvolvimento de Ombros com Halteres: 3x15\n- Levantamento Terra Romeno: 3x12\n- Cardio Moderado: 30 minutos de caminhada rápida ou bicicleta\nSábado: Cardio e Flexibilidade\n- Cardio: 45-60 minutos de corrida, ciclismo ou aula de aeróbica\n- Alongamento: 15 minutos de alongamentos estáticos e dinâmicos\n");
    printf("\nDicas adicionais:\n");
    printf("Monitoramento e Ajustes - acompanhe seu progresso e ajuste o plano conforme necessário. ");
}
if(imc>=30){
    printf("Obesidade\nObjetivo Principal: Perda de peso saudável e melhoria da saúde geral.\nEstrutura do Treino:\n");
    printf("\n1. Treinamento de Força\n");
    printf("O treinamento de força ajuda a aumentar a massa muscular, o que pode melhorar o metabolismo e apoiar a perda de peso.\n- Frequência: 2-3 vezes por semana\n- Exercícios: Priorize exercícios que sejam seguros e eficazes para grandes grupos musculares. Exemplos:\n- Parte Inferior do Corpo: Agachamentos (com suporte, se necessário), leg press, levantamento terra com halteres leves.\n- Parte Superior do Corpo: Supino com halteres, desenvolvimento de ombros, remada com halteres, flexões modificadas (joelhos no chão).\n- Core: Pranchas (modificadas, se necessário), abdominais (parciais).\n- Séries e Repetições: 2-3 séries de 10-15 repetições para cada exercício.\n");
    printf("- Carga: Use pesos leves a moderados que permitam completar as repetições com boa forma.\n- Descanso entre Séries: 60-90 segundos.\n");
    printf("\n2. Treinamento Cardiovascular\n");
    printf("O cardio é essencial para a queima de calorias, melhoria da saúde do coração e aumento da resistência.\n- Frequência: 4-5 vezes por semana\n- Duração: 30-60 minutos por sessão\n- Intensidade: Baixa a moderada (caminhada, natação, ciclismo em intensidade leve).\n- Exercícios de Baixo Impacto: Caminhada, bicicleta ergométrica, natação, elíptico. Estes exercícios são gentis para as articulações e eficazes na queima de calorias.\n");
    printf("\n3. Treinamento de Flexibilidade\n");
    printf("Alongamentos ajudam a melhorar a mobilidade, prevenir lesões e promover a recuperação muscular.\n- Frequência: Diariamente ou após cada sessão de treino de força.\n- Duração: 10-15 minutos de alongamentos estáticos e dinâmicos.\n- Foco: Alongue todos os grupos musculares principais.\n");
    printf("\nPlano de Treino Exemplo:\n");
    printf("Segunda-feira: Treinamento de Força e Cardio Leve\n- Agachamento com Suporte: 3x10\n- Supino com Halteres: 3x12\n- Remada com Halteres: 3x12\n- Flexões Modificadas: 3x15\n- Prancha Modificada: 3x20 segundos\n- Cardio Leve: 30 minutos de caminhada\nTerça-feira: Cardio e Flexibilidade\n- Cardio: 45 minutos de bicicleta ergométrica ou natação\n- Alongamento: 15 minutos de alongamentos estáticos e dinâmicos\nQuarta-feira: Treinamento de Força e Cardio Leve\n- Leg Press: 3x12\n- Desenvolvimento de Ombros com Halteres: 3x12\n- Levantamento Terra com Halteres Leves: 3x10\n- Abdominais Parciais: 3x15\n- Cardio Leve: 30 minutos de caminhada\n");
    printf("Sexta-feira: Treinamento de Força e Cardio Leve\n- Agachamento com Suporte: 3x12\n- Supino com Halteres: 3x12\n- Remada com Halteres: 3x15\n- Flexões Modificadas: 3x12\n- Prancha Modificada: 3x20 segundos\n- Cardio Leve: 30 minutos de bicicleta ergométrica\nSábado: Cardio e Flexibilidade\n- Cardio: 45-60 minutos de natação ou caminhada\n- Alongamento: 15 minutos de alongamentos estáticos e dinâmicos\n");
    printf("\nDicas Adicionais:\n");
    printf("Acompanhamento Profissional: Considere consultar um dos nossos personal trainers para orientação personalizada e monitoramento adequado.");
	}
}

void medida() {
	float peso ;
	float altura;
	float imc;
	int resp;

	printf("Informe seu peso (kg): ");
	scanf("%f", &peso);
	printf("Informe sua altura (M): ");
	scanf("%f", &altura);

	imc = peso / (altura*altura);
	printf("Seu imc é: %f\n", imc);



	if (imc < 18.5){
		printf("O aluno está abaixo do peso indicado, verifique o treino ideal na área de 'Treinos'");
	}

	else if (imc >= 18.5 && imc <= 24.9){
		printf("O aluno está com peso normal, verifique o treino ideal na área de 'Treinos'");

	}
	else if (imc >=25 && imc <=29.9){
		printf("O aluno está pré-obeso, verifique o treino ideal na área de 'Treinos'");
	}
	else if (imc >=30 && imc <=34.9 ){
		printf("O aluno está com obesidade no grau 1, verifique o treino ideal na área de 'Treinos'");
	}
	else if (imc >=35 && imc <=39.9){
		printf("O aluno está com obesidade no grau 2, verifique o treino ideal na área de 'Treinos'");
	}
	else if (imc >=40){
		printf("O aluno está com obsidade no grau 3, verifique o treino ideal na área de 'Treinos'");
	}
	
}

void salvarinfor() {
    FILE *arq = fopen("informacoes.txt", "w");
    int i;
    if (arq) {
        for (i = 0; i < quant; i++) {
            fprintf(arq, "%s | %d |%c | %s | %s | %d | %s \n", lista[i].nome, lista[i].idade, lista[i].sexo, lista[i].cpf, lista[i].email, lista[i].telefone, lista[i].planos);
        }
        fclose(arq);
        printf("Informações foram salvadas\n");
    } else {
        printf("ERRO: Não foi possível abrir o arquivo para salvar as informações.\n");
    }
}

void carregarDados() {
    FILE *arq = fopen("informacoes.txt", "r");
    if (arq) {
        while (fscanf(arq, "%[^ | ] | %d | %c | %[^ | ] | %[^ | ] | %d | %[^ | ]\n", lista[quant].nome, &lista[quant].idade, &lista[quant].sexo, lista[quant].cpf, lista[quant].email, &lista[quant].telefone, lista[quant].planos) != EOF) {
            quant++;
            if (quant >= MAX_CLIENTES) {
                break;
            }
        }
        fclose(arq);
    }
}

void pesquisarCliente() {
    char busca[50];
    int i;
    printf("Digite o CPF do cliente: ");
    scanf("%s", busca);
    for (i = 0; i < quant; i++) {
        if (strcmp(busca, lista[i].nome) == 0 || strcmp(busca, lista[i].cpf) == 0) {
            printf("Cliente encontrado:\n");
            printf("Nome: %s\n", lista[i].nome);
            printf("Idade: %d\n", lista[i].idade);
            printf("Sexo: %c\n", lista[i].sexo);
            printf("CPF: %s\n", lista[i].cpf);
            printf("Email: %s\n", lista[i].email);
            printf("Telefone: %d\n", lista[i].telefone);
            printf("Plano: %s \n", lista[i].planos);
            return;
        }
    }
    printf("Cliente não encontrado.\n");
}

void editarCliente() {
    char busca[50];
    int i;
    printf("Digite o CPF do cliente que deseja editar: ");
    scanf("%s", busca);
    limparBuffer();
    for (i = 0; i < quant; i++) {
        if (strcmp(busca, lista[i].nome) == 0 || strcmp(busca, lista[i].cpf) == 0) {
            printf("Cliente encontrado. Insira os novos dados:\n");

            printf("- Digite o nome: ");
            fgets(lista[i].nome, sizeof(lista[i].nome), stdin);

            printf("- Digite a idade: ");
            scanf("%d", &lista[i].idade);
            limparBuffer();

            printf("- Digite M para masculino e F para feminino: ");
            scanf(" %c", &lista[i].sexo);
            limparBuffer();

            printf("- Digite o CPF: ");
            fgets(lista[i].cpf, sizeof(lista[i].cpf), stdin);


            printf("- Digite o telefone: ");
            scanf("%d", &lista[i].telefone);
            limparBuffer();

            printf("- Digite o email: ");
            fgets(lista[i].email, sizeof(lista[i].email), stdin);

            printf("Para os planos:\n");
			printf("Digite Prata.\n");
			printf("Digite Ouro.\n");
			printf("Digite Diamante.\n");
			fgets(lista[i].planos, sizeof(lista[i].planos), stdin);

            printf("Cliente atualizado com sucesso.\n");

            system("pause");
            return;
        }
    }
    printf("Cliente não encontrado.\n");
}

void excluirCliente() {
    char busca[50];
    int i, j;
    printf("Digite o CPF do cliente que deseja excluir: ");
    scanf("%s", busca);
    for (i = 0; i < quant; i++) {
        if (strcmp(busca, lista[i].nome) == 0 || strcmp(busca, lista[i].cpf) == 0) {
            // Remover cliente da lista
            for (j = i; j < quant - 1; j++) {
                lista[j] = lista[j + 1];
            }
            quant--;
            printf("Cliente excluído com sucesso.\n");
            salvarinfor();
            system("pause");
            return;
        }
    }
    printf("Cliente não encontrado.\n");
}