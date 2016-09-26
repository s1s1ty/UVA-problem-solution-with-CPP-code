import java.util.*;
class Main{
    public static void main(String[] ar)
    {
        int a,b,c;
        int t,ans=0,j,low=0,count;
        Scanner input=new Scanner(System.in);
        t=input.nextInt();
        for(int i=1;i<=t;i++)
        {
            a=input.nextInt(); b=input.nextInt(); c=input.nextInt();
            if((a<b && c>b) || (c<b&&a>b))
            System.out.println("Case " +i+": " + b);
            if((a>b && a<c) || (c<a && a<b))
            System.out.println("Case " +i+": " + a);
            if((c>a && b>c) || (c<a && c>b))
            System.out.println("Case " +i+": " + c);
        }
    }
}