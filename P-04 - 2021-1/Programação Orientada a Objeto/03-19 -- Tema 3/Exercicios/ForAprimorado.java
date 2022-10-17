
public class ForAprimorado {
    public static void main( String[] args )
	{
	   int[] arranjo = { 87, 68, 94, 100, 83, 78, 85, 91, 76, 87 };
	   int total = 0;
 	   
           // somando os elementos do array
	   for ( int numero : arranjo )
		total += numero;

	   System.out.printf( "Soma dos elementos do array: %d", total ); 

	} 
}

