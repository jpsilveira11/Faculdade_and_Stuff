
import java.util.Random;

public class EstatisticaDado
{
   public static void main( String[] args )
   {
      Random numerosAleatorios = new Random(); 

      int frequencia_1 = 0; 
      int frequencia_2 = 0; 
      int frequencia_3 = 0; 
      int frequencia_4 = 0; 
      int frequencia_5 = 0;
      int frequencia_6 = 0;

      int valor; 

      for ( int cont = 1; cont <= 10000; cont++ )
      {
         valor = 1 + numerosAleatorios.nextInt( 6 ); 

         switch ( valor )
         {
            case 1:
               ++frequencia_1; 
               break;
            case 2:
               ++frequencia_2; 
               break;
            case 3:
               ++frequencia_3; 
               break;
            case 4:
               ++frequencia_4; 
               break;
            case 5:
               ++frequencia_5; 
               break;
            case 6:
               ++frequencia_6; 
               break; 
         } 
      } 

      System.out.println( "Valor\tFrequencia" ); 
      System.out.printf( "1\t%d\n2\t%d\n3\t%d\n4\t%d\n5\t%d\n6\t%d\n",
         frequencia_1, frequencia_2, frequencia_3, frequencia_4,
         frequencia_5, frequencia_6 );
   } 
} 

