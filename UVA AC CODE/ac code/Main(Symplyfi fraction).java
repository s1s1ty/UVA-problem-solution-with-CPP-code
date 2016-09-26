import java.util.Scanner;
import java.math.BigInteger;
class Main
{
	public static void main(String[] arg)
	{
		Scanner input = new Scanner(System.in);
		int t = input.nextInt();
		while(t-- >0)
		{
			BigInteger a=input.nextBigInteger();
			String s=input.next();
			BigInteger b=input.nextBigInteger();
			BigInteger g=a.gcd(b);
			System.out.println(a.divide(g) + " / " + b.divide(g));
			
		}
	}
}