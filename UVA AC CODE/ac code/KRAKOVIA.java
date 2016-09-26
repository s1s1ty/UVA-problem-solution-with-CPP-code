import java.io.*;
import java.util.*;
import java.math.BigInteger;
 
public class KRAKOVIA
{
	public static void main(String[] args) throws IOException
	{
		
		Scanner input = new Scanner( System.in );
		int t=1;
		while(input.hasNext())
		{
			int a,i,j; BigInteger sum=BigInteger.ZERO ; 
 
			a=input.nextInt();
			BigInteger y = input.nextBigInteger();
 
			if(a==0 && y.compareTo(BigInteger.ZERO)==0) break;
			for(i=1;i<=a;i++){
			BigInteger x = input.nextBigInteger();
			 sum=sum.add(x);
			}
			 BigInteger d=sum.divide(y);
			System.out.println("Bill #" + t +" costs " + sum + ": each friend should pay " + d + "\n");
			t++;
		}
 
 
	}
}