int main()
{
   //strcmp(strq1, strq2)==0
   //Pedra,papel ou tesoura!
   char player[256];
   char player2[256];

   printf("Player 1, Sua vez...");
   scanf("%s",&player);

   printf("\nPlayer2, Sua vez...");
   scanf("%s",&player2);

   printf("\nAguarde, estamos calculando o resultado...\n");

           if(strcmp(player,"papel")== 0){

                   if(strcmp(player2,"papel")== 0){
                       printf("Empate!");
                   }else if(strcmp(player2,"tesoura")== 0){
                       printf("Player 2 ganha, por que corta papel!");
                   }else if(strcmp(player2,"pedra")==0){
                       printf("Player 2 perde, por que papel embrulha pedra!");
                   }else{
                       printf("Player 2 jogou uma informação invalida");
                   }

           }else if(strcmp(player,"tesoura")== 0){

                   if(strcmp(player2,"papel")== 0){
                       printf("Player 2 perdeu, porque tesoura corta papel!");
                   }else if(strcmp(player2,"tesoura")== 0){
                       printf("Empate!");
                   }else if(strcmp(player2,"pedra")==0){
                       printf("Player 2 ganha, por que pedra quebra tesoura");
                   }else{
                       printf("Player 2 jogou uma informação invalida");
                   }

           }else if(strcmp(player,"pedra")==0){

                   if(strcmp(player2,"papel")== 0){
                       printf("Player 2 ganhou, porque papel embrulha pedra!");
                   }else if(strcmp(player2,"tesoura")== 0){
                       printf("Player 2 perdeu, porque tesoura perde para pedra!");
                   }else if(strcmp(player2,"pedra")==0){
                       printf("Empate!");
                   }else{
                       printf("Player 2 jogou uma informação invalida");
                   }
            }else{
            printf("Voce jogou uma informação invalida");
           }


    return 0;
}
