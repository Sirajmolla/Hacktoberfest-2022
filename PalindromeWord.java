import java.util.*;
public class PalindromeWord
{
    static Scanner sc=new Scanner (System.in);
    String Rev(String s)//default constructor
    {
        if((s==null)||s.length()<=1)//condition is checked
            return(s);
        return Rev(s.substring(1))+s.charAt(0);
    }

    void Pal()
    {
        System.out.println("Enter a word");
        String ns=sc.nextLine();//takes input from user
        String x=Rev(ns);//reversed word is stored
        System.out.println("Reversed word: "+x);
        if(ns.equalsIgnoreCase(x))//condition is checked
        {
            System.out.println("Palindrome Word");
        }
        else
        {
            System.out.println("Not a palindrome Word");
        }
    }

    public static void main()
    {
        PalindromeWord ob=new PalindromeWord();
        ob.Pal();
    }
}