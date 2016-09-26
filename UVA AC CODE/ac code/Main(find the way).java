import java.util.Scanner;
import java.math.BigInteger;

class Main{
	
	static BigInteger nCr(long n,long r)
	{
		long i; BigInteger res=BigInteger.ONE;
		if(n-r<r) r=n-r;
		for(i=1;i<=r;i++,n--)
		{
			res=res.multiply(BigInteger.valueOf(n));
			res=res.divide(BigInteger.valueOf(i));
		}
		return res;
	}
	public static void main(String[] args)
	{
		Scanner input=new Scanner(System.in);
		long a,b;
		while(input.hasNext())
		{
			a=input.nextLong();
			b=input.nextLong();
			BigInteger ans=nCr(a,b);
                        String res= ans.toString();
			System.out.println(res.length());
		}
		
	}
}