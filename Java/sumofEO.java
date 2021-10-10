import java.util.*;
 
public class sumofEO{ 
    public static void main(String[] arg)
    {
        System.out.println("enter the number you want to enter: ");
        Scanner sc=new Scanner(System.in);
        int n= sc.nextInt();
        int[] arr= new int[n];
        int evenSum=0;
        int oddSum=0;
        for (int i = 0; i < n; i++) {
            arr[i]=sc.nextInt();
            if(arr[i]%2==0){
                // System.out.println("sum of even: "+evenSum);
                evenSum = evenSum+ arr[i];
            }
            else{
                // System.out.println("sum od odd: "+oddSum);
                oddSum=oddSum + arr[i];
            }
        }
        System.out.println("sum of even: "+evenSum);
        System.out.println("sum od odd: "+oddSum);

       
        
    }
}
