import java.io.*;

public static void main(String args[])throws Exception
{  
    InputStreamReader pr=new InputStreamReader(System.in);  
    BufferedReader br=new BufferedReader(pr);  
      
    System.out.println("Enter your name");  
    String name=br.readLine();  
    System.out.println("Welcome "+name);  
}  