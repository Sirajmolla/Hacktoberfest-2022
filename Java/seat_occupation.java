import java.util.*;  
import java.io.*;

public class Main
    {  
      public static void main(String[] args)  
        {  

            int n, r, per, fact1, fact2;  

            Scanner sc =  new Scanner(System.in);  

            System.out.println("Enter the Value of n: ");  
            n = sc.nextInt();

            System.out.println("Enter the Value of r: ");
            r = sc.nextInt();  

            fact1 = 1;  

            for (int i = n; i > 1; i=i-1)  
            {  
                fact1 = fact1 * i;  //calculating factorial (n!)
            }  

            int number;  

            number = n - r;  

            fact2 = 1;  

            for (int i = number; i > 1; i=i-1)  
            {  
                fact2 = fact2 * i;  //calculating factorial ((n-r)!)
            }  

            per = fact1 / fact2;  //calculating  nPr

            System.out.println(per+" ways");  
    }  
}
