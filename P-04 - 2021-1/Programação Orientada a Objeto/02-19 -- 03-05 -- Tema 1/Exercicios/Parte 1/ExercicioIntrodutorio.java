// ExercicioIntrodutorio.java

import java.util.Scanner; 

public class ExercicioIntrodutorio
{
   
   public static void main( String[] args )
   {
      // cria objeto Scanner para obter input da janela de comando
      Scanner input = new Scanner( System.in );

      int n1; // primeiro valor a ser digitado
      int n2; // segundo valor a ser digitado
      
      System.out.print( "Digite o primeiro inteiro: " ); // prompt
      n1 = input.nextInt(); // l� o primeiro valor digitado pelo usu�rio

      System.out.print( "Enter second integer: " ); // prompt
      n2 = input.nextInt(); // l� o segundo valor digitado pelo usu�rio

      if (((n1 % n2) == 0) || ((n2 % n1) == 0))
	  System.out.printf( "%d e %d s�o m�ltiplos entre si", n1, n2 ); // exibe resposta
      else
          System.out.printf( "%d e %d n�o s�o m�ltiplos entre si", n1, n2 ); // exibe resposta
   } // fim do m�todo main
} // fim da classe ExercicioIntrodutorio

