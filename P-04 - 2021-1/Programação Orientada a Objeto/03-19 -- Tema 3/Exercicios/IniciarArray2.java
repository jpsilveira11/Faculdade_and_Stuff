
public class IniciarArray2 {
    public static void main( String[] args )
	   {
	      int[] arranjo = { 35, 56, 87, 23, -12, 0, 456, 90, -24, 65 };

	      System.out.printf( "%s%8s\n", "ìndice", "Valor" ); // nomes das colunas
	   
	      // mostrando os elementos do array... 
	      for ( int contador = 0; contador < arranjo.length; contador++ )
	         System.out.printf( "%5d%8d\n", contador, arranjo[ contador ] );
	   } 
}

