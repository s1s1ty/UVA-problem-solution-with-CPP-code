// hasmat the breave
import java.util.Scanner;
class Main{
    public static void main(String[] args)
    {
        
        Scanner input = new Scanner(System.in);
        while(input.hasNextLong())
        {
            long a,b;
            a=input.nextLong();
            b=input.nextLong();
            if(a>b) 
            {
                System.out.println(a-b);
            }
            else System.out.println(b-a);
        }
    }
    
}
