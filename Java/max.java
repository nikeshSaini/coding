import java.util.*;
// import java.util.Arrays;

public class max{ 
    public static void main(String arg[])
    {
        Scanner sc=new Scanner(System.in);

        System.out.println("enter the limit: ");
        int size =sc.nextInt();
        int[] arr= new int[size];
        int max =-999999;

        for (int i = 0; i <size; i++) {
            arr[i]=sc.nextInt();
            if(arr[i]>max){
                max=arr[i];
            }
        }

        // Arrays.sort(arr);
        System.out.println("The maximun number is: "+max);
        
    }
} 