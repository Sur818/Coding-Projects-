package sample;
import java.util.*;
class Forloop31
 {
   public static void main (String[] ar)
   {
     int i,j,sum=0,prod=1,fact=1,n;
     System.out.print("enter no of term");
     Scanner m=new Scanner (System.in);
     n=m.nextInt();
     for(i=1;i<=n;i++)
     {
       for(j=1;j<=i;j++)
       {
         fact=fact*j;
         prod=prod*fact;
        System.out.print(j+"!");
        if(j<i)
        {
          System.out.print("*");
        }
       }
       System.out.print("+ ");
       sum=sum+prod;
       prod=1;
       fact=1;
     }
     System.out.println("sum of seriese="+sum);
     
   }
  
}
