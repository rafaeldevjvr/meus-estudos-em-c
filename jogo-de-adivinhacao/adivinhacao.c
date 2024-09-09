#include <stdio.h>
#include <stdlib.h>  // Necessário para a função abs()
#include <time.h>

int main(){

    // imprime cabecalho do nosso jogo
   printf("\n\n");
   printf("          ┏━━━┓                                \n");
   printf("          ┃┏━┓┃                                \n");
   printf("          ┗┛┏┛┃             Bem vindo ao       \n");
   printf("          ╋╋┃┏┛          Jogo de Adivinhação!  \n"); 
   printf("          ╋╋┏┓                                 \n");
   printf("          ╋╋┗┛                                 \n");
   printf("                                               \n");
   printf("\n\n");

    int segundos = time(0);
    srand(segundos);


    int numerogrande = rand();

    int numerosecreto = numerogrande % 100;
    int chute;
    int ganhou = 0;
    int tentativas = 1;  // Inicialização da variável para contar as tentativas
    double pontos = 1000;

    int acertou = 0;

    int nivel;
    printf("Qual nível de dificuldade?\n");
    printf("(1) Fácil (2) Médio (3) Difícil\n\n");
    printf("Escolha: ");
    scanf("%d" , &nivel);

    int numerodetentativas; 
   
   switch(nivel) {
   case 1:
        numerodetentativas = 20;
        break;

   case 2:
        numerodetentativas = 15;
        break;

   default:
        numerodetentativas = 6;
        break;          
   }

    for(int i = 1; i <= numerodetentativas; i++) {

        printf("Tentativa %d\n", tentativas);    
        printf("Qual é o seu chute? ");

        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if(chute < 0){
            printf("Você não pode chutar números negativos!\n");
            continue;
        }

        acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;
        
        if(acertou){        
            break;
        }
        else if(maior){
            printf("Seu chute foi maior que o número secreto!\n");
        }
        else {
            printf("Seu chute foi menor que o número secreto!\n");
        }

        tentativas++;  // Incremento da variável de tentativas

        double pontosperdidos = abs(chute - numerosecreto) / (double)2;
        pontos = pontos - pontosperdidos;
    }

        printf("Fim de jogo!\n");

        if(acertou){
   printf("\n\n");                                 
   printf("      ⠀⠀⠀⠀⣠⠤⠤⣄⣠⣤⣤⡤⠤⠤⠤⠤⠤⠤⠤⣤⣤⣤⣠⠤⠤⣄⠀⠀⠀⠀   \n");
   printf("      ⠀⠀⠀⡜⢁⡶⠶⢤⡇⠀⠈⠉⠉⠉⠉⠉⠉⠉⠉⠉⠀⠸⡦⠾⠶⡄⢳⠀⠀⠀   \n");
   printf("      ⠀⠀⠀⡇⢸⠀⠀⠀⡃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⡇⢸⡆⠀⠀   \n");
   printf("      ⠀⠀⠀⢧⠘⣆⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⠇⠀⢠⠇⣸⠀⠀⠀   \n");
   printf("      ⠀⠀⠀⠈⢦⡘⠦⣀⠹⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡞⣀⡴⠋⡰⠃⠀⠀⠀   \n");
   printf("      ⠀⠀⠀⠀⠀⠙⠦⣌⡙⠻⣄⠀⠀⠀⠀⠀⠀⠀⠀⣠⠞⠋⣁⡴⠚⠁⠀⠀⠀⠀   \n");
   printf("      ⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠚⠳⣄⠀⠀⠀⠀⣠⠖⠓⠋⠉⠀⠀⠀⠀⠀⠀⠀⠀   \n");
   printf("      ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢳⡀⠀⡼⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀   \n");
   printf("      ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡇⠸⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀   \n");
   printf("      ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡜⠀⠀⢳⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀   \n");
   printf("      ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣞⣀⣀⣀⣀⣳⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀   \n");
   printf("      ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⠉⠉⠉⠉⠉⠉⢹⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀   \n");
   printf("      ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡷⠤⠤⠤⠤⠤⠤⠼⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀   \n");
   printf("      ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠓⠒⠒⠒⠒⠒⠒⠒⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀   \n");
   printf("      ⠀⢀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⡀⢀⣀⣀⣀⣀⣀⣀⣀⣀   \n");
   printf("      ⣿⣯⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿   \n");  
   printf("\n\n");                                                                                   
             printf("Você ganhou!\n");
             printf("Você acertou em %d tentativas!\n", tentativas);
             printf("Total de pontos: %.1f\n", pontos);
        } else {
   printf("\n\n");
   printf("  ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡀⠀  \n");
   printf("  ⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⠀⠀⠀⣶⡆⠀⣰⣿⠇⣾⡿⠛⠉⠁  \n");
   printf("  ⠀⣠⣴⠾⠿⠿⠀⢀⣾⣿⣆⣀⣸⣿⣷⣾⣿⡿⢸⣿⠟⢓⠀⠀  \n");
   printf("  ⣴⡟⠁⣀⣠⣤⠀⣼⣿⠾⣿⣻⣿⠃⠙⢫⣿⠃⣿⡿⠟⠛⠁⠀  \n");
   printf("  ⢿⣝⣻⣿⡿⠋⠾⠟⠁⠀⠹⠟⠛⠀⠀⠈⠉⠀⠉⠀⠀⠀⠀⠀  \n");
   printf("  ⠀⠉⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⠀⠀⣀⢀⣠⣤⣴⣤⣄⠀  \n");
   printf("  ⠀⠀⠀⠀⣀⣤⣤⢶⣤⠀⠀⢀⣴⢃⣿⠟⠋⢹⣿⣣⣴⡿⠋⠀  \n");
   printf("  ⠀⠀⣰⣾⠟⠉⣿⡜⣿⡆⣴⡿⠁⣼⡿⠛⢃⣾⡿⠋⢻⣇⠀⠀  \n");
   printf("  ⠀⠐⣿⡁⢀⣠⣿⡇⢹⣿⡿⠁⢠⣿⠷⠟⠻⠟⠀⠀⠈⠛⠀⠀  \n");
   printf("  ⠀⠀⠙⠻⠿⠟⠋⠀⠀⠙⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀  \n");
    printf("\n\n");
     printf("Você perdeu! Tente de novo!\n");
        }

   

    return 0;  // Adicionando return 0 para finalizar a função main
}

    

