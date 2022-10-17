
public class GradeBookTest4
{
   public static void main( String[] args )
   {
      Boletim4 boletim1 = new Boletim4(
         "CS101 Introduction to Java Programming" );
      Boletim4 boletim2 = new Boletim4(
         "CS102 Data Structures in Java" );

      System.out.printf( "Primeiro boletim: curso %s\n",
         boletim1.getNomeDoCurso() );
      System.out.printf( "Segundo boletim: curso %s\n",
         boletim2.getNomeDoCurso() );
   } 
} 


