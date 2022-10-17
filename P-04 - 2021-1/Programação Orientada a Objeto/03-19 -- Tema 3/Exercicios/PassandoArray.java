
public class PassandoArray 
{
   public static void main( String[] args )
   {
      int[] arranjo = { 1, 2, 3, 4, 5 };
      
      System.out.println( 
         "Efeitos de se passar por referência todo o array:\n" +
         "Os valores originais do array são: " );

      for ( int valor : arranjo )
         System.out.printf( "   %d", valor );
   
      modificandoArray( arranjo ); // array passado por referência!
      System.out.println( "\n\nOs valores do array modificado são: " );

      for ( int valor : arranjo )
         System.out.printf( "   %d", valor );
   
      System.out.printf( 
         "\n\nEfeitos da passagem de um elemento do array:\n" +
         "arranjo[3] antes de chamar modificarElemento(): %d\n", arranjo[ 3 ] );
   
      modificarElemento( arranjo[ 3 ] ); // tentativa de modificar arranjo[ 3 ]
      System.out.printf( 
         "arranjo[3] depois da chamada a modificarElemento(): %d\n", arranjo[ 3 ] );
   } 
   
   public static void modificandoArray( int algum_array[] )
   {
      for ( int contador = 0; contador < algum_array.length; contador++ )
         algum_array[ contador ] *= 2; // multiplica os elementos por 2
   }
   
   public static void modificarElemento( int elemento )
   {
      elemento *= 3; //  multiplica o elemento por 3
      System.out.printf( 
         "Valor do elemento em modificarElemento(): %d\n", elemento );
   } 
} 

