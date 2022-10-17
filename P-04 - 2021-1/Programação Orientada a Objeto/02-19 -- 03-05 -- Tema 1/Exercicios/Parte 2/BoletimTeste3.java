
import java.util.Scanner; 

public class GradeBookTest3
{
   
   public static void main( String[] args )
   {
      
      Scanner input = new Scanner( System.in );

      Boletim3 boletim = new Boletim3();

      System.out.printf( "O nome inicial do curso é: %s\n\n",
         boletim.getCourseName() );

      System.out.println( "Digite o nome do curso: " );
      String nome = input.nextLine(); 
      boletim.setCourseName( nome ); 
      System.out.println(); 

      boletim.displayMessage();
   } 
} 


