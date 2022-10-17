
public class Scope
{
   private int x = 1; // x como variável de instância

   public void inicio()
   {
      int x = 5; // x como variável local

      System.out.printf( "O valor de x local no método inicio  %d\n", x );

      usaVariavelLocal(); // usa a variável local
      usaCampo();         // usa a variável de instância
      usaVariavelLocal(); 
      usaCampo(); 

      System.out.printf( "\nO valor de x local no método início vale agora %d\n", x );
   } 

   public void usaVariavelLocal()
   {
      int x = 25; 

      System.out.printf( 
         "\nO valor da variável local x no início do método usaVariavelLocal é %d\n", x );
      ++x; 
      System.out.printf( 
         "O valor da variável local x no final do método usaVariavelLocal é %d\n", x );
   } 

   public void usaCampo()
   {
      System.out.printf( 
         "\nO valor da variável de instância x no início do método usaCampo é %d\n", x );
      x *= 10; 
      System.out.printf( 
         "O valor da variável de instância x no final do método usaCampo é %d\n", x );
   } 
} 

