import java.util.Scanner;
class ex1{
    static void checkAge(int age){
        if(age<18){
            System.out.println("access denied");
        }
        else{
            System.out.println("access granted");
        }
    }
    public static void main(String[] args) { 
       
        Scanner sc = new Scanner(System.in);
        int age=sc.nextInt();
      checkAge(age);
        
    }
}