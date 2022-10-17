
import java.util.ArrayList;

public class Lista
{
   public static void main( String[] args )
   {
      ArrayList< String > cores = new ArrayList< String >(); 

      items.add( "vermelho" );           
      items.add( 0, "amarelo" ); 

      System.out.print( 
         "Mostra a lista de cores:" ); 

      for ( int i = 0; i < cores.size(); i++ )
         System.out.printf( " %s", cores.get( i ) );

      // de outra forma...
      display( cores,
         "\nMostrando a lista com outro comando: " );

      cores.add( "verde" ); // acrescenta no fim da lista
      cores.add( "amarelo" );      
      display( cores, "Lista com dois novos elementos:" ); 

      cores.remove( "amarelo" ); // remove o primeiro amarelo
      display( cores, "Lista com a primeira instância de amarelo removida:" ); 

      cores.remove( 1 ); // remove o item de índice 1
      display( cores, "Removido o segundo elemento da lista (no caso, o verde):" ); 

      // verificando se a lista contém um determinado valor
      System.out.printf( "\"vermelho\" %s na lista\n",
         cores.contains( "vermelho" ) ? "está": "não está" );

      // mostra o número de elementos da lista
      System.out.printf( "Tamanho da lista: %s\n", cores.size() );
   } 

   // método display
   public static void display( ArrayList< String > cores, String inicio )
   {
      System.out.print( inicio ); 
      
      for ( String item : cores )
         System.out.printf( " %s", item );

      System.out.println(); 
   } 
} 

