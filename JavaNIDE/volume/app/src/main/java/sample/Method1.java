package sample;
import java.util.*;

class Method1
 { 

public static void main(String[] ar)
{
  int n,i,j,fact=1;
  float sum=0,s;
 System.out.println("enter no of term");
 Scanner m=new Scanner(System.in);
 n=m.nextInt();
 for(i=1;i<=n;i++)
 {
  System.out.print(i+"+"+(2*i)+"!"+"+"+(i+2));
  System.out.print("/"+i);
  System.out.print("  +  ");
  for(j=1;j<=2*i;j++)
  {
    fact=fact*j;
  }
  s=(i+fact+(i+2));
    sum=sum+s/i;
  fact=1;
 }
 System.out.println("sum of seriese is"+sum);
 }
 }
