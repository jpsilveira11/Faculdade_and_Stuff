
import java.util.Arrays;

public class Manipulacao_De_Arrays 
{
   public static void main( String[] args )
   {
      // ordenação
      double[] arranjoDouble = { 8.4, 9.3, 0.2, 7.9, 3.4 };
      Arrays.sort( arranjoDouble ); 
      System.out.printf( "\nArray de doubles: " );

      for ( double valor : arranjoDouble )
         System.out.printf( "%.1f ", valor );

      // preenchendo um array com o valor 7
      int[] arrayDeInteirosPreenchido = new int[ 10 ]; 
      Arrays.fill( arrayDeInteirosPreenchido, 7 ); 
      displayArray( arrayDeInteirosPreenchido, "arrayDeInteiroPreenchido" );

      // Copiando arrays
      int[] arrayInt = { 1, 2, 3, 4, 5, 6 };
      int[] arrayIntCopia = new int[ arrayInt.length ];
      System.arraycopy( arrayInt, 0, arrayIntCopia, 0, arrayInt.length );
      displayArray( arrayInt, "arrayInt" );
      displayArray( arrayIntCopia, "arrayIntCopia" );

      // comparando arrays
      boolean b = Arrays.equals( arrayInt, arrayIntCopia );
      System.out.printf( "\n\narrayInt %s arrayIntCopia\n",
         ( b ? "==" : "!=" ) );

      // outra comparação
      b = Arrays.equals( arrayIntCopia, arrayDeInteirosPreenchido );
      System.out.printf( "intArray %s filledIntArray\n", 
         ( b ? "==" : "!=" ) );

      // buscando elemento de valor 5
      int localizacao = Arrays.binarySearch( arrayInt, 5 ); 
      
      if ( localizacao >= 0 )
         System.out.printf( 
            "O elemento 5 foi encontrado na posição %d do arrayInt\n", localizacao ); 
      else
         System.out.println( "O valor 5 não foi encontrado em intArray" ); 

      // buscando o elemento 8763
      localizacao = Arrays.binarySearch( arrayInt, 8763 );

      if ( localizacao >= 0 )
         System.out.printf( 
            "O elemento 8763 foi encontrado na posição %d do arrayInt\n", localizacao ); 
      else
         System.out.println( "O valor 8763 não foi encontrado em intArray" ); 
   } 

   public static void displayArray( int[] array, String descricao )
   {     
      System.out.printf( "\n%s: ", descricao );

      for ( int valor : array )
         System.out.printf( "%d ", valor );
   } 
} 

