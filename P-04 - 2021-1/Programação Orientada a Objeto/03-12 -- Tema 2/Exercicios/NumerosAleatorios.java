import java.util.Random;

public class NumerosAleatorios
{
   public static void main( String[] args )
   {
      Random numerosAleatorios = new Random(); 
      int valor; //para armazenar os números gerados 

      for ( int cont = 1; cont <= 20; cont++ )
      {
         valor = 1 + numerosAleatorios.nextInt( 6 );

         System.out.printf( "%d  ", valor ); 

	 //para exibir 5 valores por linha
         if ( cont % 5 == 0 )
            System.out.println();
      }
   }
}


