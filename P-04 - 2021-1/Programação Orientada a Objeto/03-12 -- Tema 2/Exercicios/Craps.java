import java.util.Random;

public class Craps
{
   private static final Random randomNumbers = new Random();

   private enum Status { CONTINUE, GANHOU, PERDEU };

   private static final int SNAKE_EYES = 2;
   private static final int TREY = 3;
   private static final int SEVEN = 7;
   private static final int YO_LEVEN = 11;
   private static final int BOX_CARS = 12;

   public void play()
   {
      int meusPontos = 0; 
      Status statusDoJogo; 

      int somaDePontos = jogaOsDados(); 

      switch ( somaDePontos )
      {
         case SEVEN: 
         case YO_LEVEN: 
            statusDoJogo = Status.GANHOU;
            break;
         case SNAKE_EYES: 
         case TREY: 
         case BOX_CARS: 
            statusDoJogo = Status.PERDEU;
            break;
         default: 
            statusDoJogo = Status.CONTINUE; 
            meusPontos = somaDePontos; 
            System.out.printf( "Seus pontos são %d\n", meusPontos );
            break; 
      } 

      while ( statusDoJogo == Status.CONTINUE ) 
      {
         somaDePontos = jogaOsDados();

         if ( somaDePontos == meusPontos ) 
            statusDoJogo = Status.GANHOU;
         else
            if ( somaDePontos == SEVEN ) 
               statusDoJogo = Status.PERDEU;
      } 

      if ( statusDoJogo == Status.GANHOU )
         System.out.println( "Você Ganhou!!" );
      else
         System.out.println( "Você Perdeu!!" );
   } 

   public int jogaOsDados()
   {
      int dado1 = 1 + randomNumbers.nextInt( 6 ); 
      int dado2 = 1 + randomNumbers.nextInt( 6 ); 

      int soma = dado1 + dado2; 

      System.out.printf( "Sua jogada: %d + %d = %d\n",
         dado1, dado2, soma );

      return soma; 
   } 
} 

