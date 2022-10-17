
public class Scope
{
   private int x = 1; // x como vari�vel de inst�ncia

   public void inicio()
   {
      int x = 5; // x como vari�vel local

      System.out.printf( "O valor de x local no m�todo inicio  %d\n", x );

      usaVariavelLocal(); // usa a vari�vel local
      usaCampo();         // usa a vari�vel de inst�ncia
      usaVariavelLocal(); 
      usaCampo(); 

      System.out.printf( "\nO valor de x local no m�todo in�cio vale agora %d\n", x );
   } 

   public void usaVariavelLocal()
   {
      int x = 25; 

      System.out.printf( 
         "\nO valor da vari�vel local x no in�cio do m�todo usaVariavelLocal � %d\n", x );
      ++x; 
      System.out.printf( 
         "O valor da vari�vel local x no final do m�todo usaVariavelLocal � %d\n", x );
   } 

   public void usaCampo()
   {
      System.out.printf( 
         "\nO valor da vari�vel de inst�ncia x no in�cio do m�todo usaCampo � %d\n", x );
      x *= 10; 
      System.out.printf( 
         "O valor da vari�vel de inst�ncia x no final do m�todo usaCampo � %d\n", x );
   } 
} 

