
import javax.swing.JOptionPane;

public class Janela2
{
   public static void main( String[] args )
   {
      
      String nome =
         JOptionPane.showInputDialog( "Qual o seu nome?" );

      String mensagem =
         String.format( "Bom dia, %s, seja bem-vindo!", nome );

      JOptionPane.showMessageDialog( null, mensagem );
   } 
} 

