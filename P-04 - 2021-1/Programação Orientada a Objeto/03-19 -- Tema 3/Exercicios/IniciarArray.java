
public class IniciarArray 
{
   public static void main( String[] args )
   {
      int[] arranjo; // declara um array chamado "arranjo"

      arranjo = new int[ 10 ]; // cria o objeto array
      
      System.out.printf( "%s%8s\n", "ìndice", "Valor" ); // nomes das colunas
   
      // mostrando os elementos do array... 
      for ( int contador = 0; contador < arranjo.length; contador++ )
         System.out.printf( "%5d%8d\n", contador, arranjo[ contador ] );
   } 
} 


