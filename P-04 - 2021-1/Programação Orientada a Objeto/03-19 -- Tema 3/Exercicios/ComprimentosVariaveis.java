
public class ComprimentosVariaveis 
{
   // calculando a média dos elementos
   public static double media( double... valores )
   {
      double total = 0.0; // inicializando a variável total

      for ( double d : valores )
         total += d;

      return total / valores.length;
   } // end method average

   public static void main( String[] args ) 
   {
      double d1 = 10.0;
      double d2 = 20.0;
      double d3 = 30.0;
      double d4 = 40.0;

      System.out.printf( "d1 = %.1f\nd2 = %.1f\nd3 = %.1f\nd4 = %.1f\n\n",
         d1, d2, d3, d4 );

      System.out.printf( "A média entre d1 e d2 é %.1f\n", 
         media( d1, d2 ) ); 
      System.out.printf( "A média entre d1, d2 e d3 é %.1f\n", 
         media( d1, d2, d3 ) );
      System.out.printf( "A média entre d1, d2, d3 e d4 é %.1f\n", 
         media( d1, d2, d3, d4 ) );
   } 
}


/**************************************************************************
 * (C) Copyright 1992-2010 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
