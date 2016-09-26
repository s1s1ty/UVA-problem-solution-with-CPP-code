import java.util.Scanner;
import java.math.BigInteger;
import java.math.BigDecimal;

public class Main {
    static BigInteger nCr(long a,long b)
    {
	    long i;
        BigInteger res=BigInteger.ONE;
        for(i=1;i<=b;i++,a--)
        {
          res=res.multiply(BigInteger.valueOf(a));
          res=res.divide(BigInteger.valueOf(i));
        }
        return res;
    }
    public static void main(String[] arg)
    {
         Scanner input=new Scanner(System.in);
		while(input.hasNext())
		{
			long p=input.nextLong();
			long q=input.nextLong();
			long r=input.nextLong();
			long s=input.nextLong();
			BigInteger AA=nCr(p,q);
			BigInteger BB=nCr(r,s);
                        BigDecimal ans1=new BigDecimal(AA);
                        BigDecimal ans2=new BigDecimal(BB);

			System.out.println(ans1.divide(ans2,5,BigDecimal.ROUND_HALF_UP));
		}
    }
    
}
