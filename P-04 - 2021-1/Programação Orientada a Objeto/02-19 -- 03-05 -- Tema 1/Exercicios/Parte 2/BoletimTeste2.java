
import java.util.Scanner; 

public class GradeBookTest2
{
  
   public static void main( String[] args )
   {
      
      Scanner input = new Scanner( System.in );

      Boletim2 boletim = new Boletim2();

      System.out.print( "Por favor, digite o nome de seu curso: " );
      String nome = input.nextLine(); 
      System.out.println(); 
      
      boletim.displayMessage( nome );
   } 
} 


