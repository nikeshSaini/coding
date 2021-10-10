import java.util.Scanner;
public static void max(int arr[],n){
   int max=-9999999;
   for(int i=0 ; i<n;i++){
      if(arr[i]>max){
         max=arr[i];
      }
   }
    System.out.println("max is: "+ max);  
}

class ex2{

   public static void main(String[] args){
    
      Scanner sc1 =new Scanner(System.in);
      System.out.println( "Enter the value of n: ");

      int size=sc1.nextInt();
     int arr[]=new int[size];
     for (int i = 0; i < size; i++) {
      //   Scanner s[i] =new Scanner(System.in);
        arr[i]=s].nextInt();
     }
}