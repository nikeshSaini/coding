
import java.util.*;
public class factorial{ 
    public static void main(String[] arg)
    {
    System.out.println("enter the number: ");
    Scanner sc =new Scanner(System.in);
    int n=sc.nextInt();
    int temp =n;
    int f=1;
    while(temp>1){
        f=f*temp;
        temp--;
    }
    System.out.println("the factorial  of "+n+ " is "+f);

    }
}