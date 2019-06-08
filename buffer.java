import java.io.*;

public class myfirstprogram

{

  public static void main(String args[])

  {

      int num1,num2,sum;

      BufferedReader br=new BufferedReader(new InputStreamReader(System.in));

      System.out.println("Ener the first number");
     
      num1=Integer.parseInt(br.readLine(System.in));
  
      System.out.println("Enter the second number");
    
      num2=Integer.parseInt(br.readLine(System.in));
     
      sum=num1+num2;
   
      System.out.println("The sum of two numbers:"+sum);
 
  }

}