
public class Boletim3
{
   private String nomeDoCurso; 

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
      
      System.out.printf( "Bem-vindo ao boletim do seu curso de %s!\n",
         getNomeDoCurso() );
   } 
} 


