//incomplete (on it).....
import java.util.Scanner;

class employee{
    public
    int empID;
    String name;
    double salary;
    void Default(){
         empID=0;
         name="";
         salary=0.0;

    }

}
class admin extends employee{
    void input(){
        Scanner sc= new Scanner(System.in);
        int  a =sc.nextInt();
        String b=sc.nextLine();
        int c=sc.nextInt();

    }
    void Print(int a,String b,int c){
        System.out.println("employee id: "+a);
        System.out.println("name: "+b);
        System.out.println("salary: "+c);
    }
}

public class inheritance1{ 
    public static void main(String[] arg)
    {
        admin emp1=new admin();
        emp1.input();
        
    }
}