
public class IniciarArray3 {
    public static void main( String[] args )
	{
	   final int COMPRIMENTO_DO_ARRAY = 10; // declara constante
	   int[] arranjo = new int[COMPRIMENTO_DO_ARRAY];

	   for ( int contador = 0; contador < arranjo.length; contador++ )
		arranjo[ contador ] = 2 + 2 * contador;

	   System.out.printf( "%s%8s\n", "ìndice", "Valor" ); // nomes das colunas
	   
           for ( int contador = 0; contador < arranjo.length; contador++ )
	         System.out.printf( "%5d%8d\n", contador, arranjo[ contador ] );
	} 
}

