package sample;
import java.util.*;
 class Forloop13 
 {
  public static void main (String[] ar)
  {
     int i,j,sum=0,n,prod=1;
     System.out.println("enter range");
     Scanner m=new Scanner(System.in);
     n=m.nextInt();
     for(i=1;i<=n;i++)
     {
      if(i%2!=0)
      {
        for(j=1;j<=i;j++)
        {
          if(j%2!=0)
          {
            prod=prod*j;
            System.out.print(j);
            if(j<i)
            {
              System.out.print("*");
            }
          }
        }
        sum=sum+prod;
        prod=1;
      
      } 
      else
{
  for(j=1;j<=i;j++)
     {
       
    prod=prod*j;
  System.out.print(j);
     if(j<i)
     {
      System.out.print("*");
     }
  }
  sum=sum+prod;
  prod=1;
 
}  
System.out.print(" + ");
     }
     System.out.print("sum of seriese="+sum);
  }
}

