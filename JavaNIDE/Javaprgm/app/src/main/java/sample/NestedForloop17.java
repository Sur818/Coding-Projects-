package sample;
import java.util.*;
 class NestedForloop17
 {
 public static void main (String[] ar)
 {
  int i,j,n,k,t;
  System.out.println("enter no of row");
  Scanner m=new Scanner (System.in);
  n=m.nextInt();
  for(i=1;i<=n;i++)
  {
   for(j=1;j<=n-i;j++)
   {
    System.out.print(" ");
   }
   for(k=1;k<=i;k++)
   {
     System.out.print("*");
     }
     for(t=i-1;t>=1;t--)
     {
      System.out.print("*");
     }
   System.out.print("\n");
  }
  for(i=n-1;i>=1;i--)
  {
   
   for(j=n-1;j>=i;j--)
   {
     System.out.print(" ");
   }
   for(k=1;k<=i;k++)
   {
    System.out.print("*");
   }
   for(t=i-1;t>=1;t--)
   {
     System.out.print("*");
   }
   System.out.print("\n");
  }
 }
}


