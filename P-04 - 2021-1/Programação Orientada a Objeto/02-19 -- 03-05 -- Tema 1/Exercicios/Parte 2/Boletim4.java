
public class Boletim4
{
   private String nomeDoCurso; 

   public Boletim4( String nome )
   {
      nomeDoCurso = nome; 
   } 

   public void setNomeDoCurso( String nome )
   {
      nomeDoCurso = nome; 
   } 

   public String getNomeDoCurso()
   {
      return nomeDoCurso;
   } 

   public void displayMessage()
   {
      
      System.out.printf( "Bem-vindo ao seu boletim do curso de %s!\n",
         getNomeDoCurso() );
   } 
} 


