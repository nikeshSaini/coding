import java.util.*;
 
public class taxAmnt{ 
    public static void main(String[] arg)
    {
        System.out.println("Enter the salary: ");
        Scanner sc= new Scanner(System.in);
        int salary =sc.nextInt();
        int taxAmnt=0;
        
        if(salary<=50000){
            taxAmnt=0;
        }
        else if(salary>50000 && salary<=60000 ){
            taxAmnt =(salary -50000)*10/100;
        }
        else if(salary>60000 && salary<=150000 ){
            taxAmnt =(salary -50000)*20/100;
        }
        else if(salary>150000  ){
            taxAmnt =(salary -50000)*30/100;
        }
        System.out.println("Tax paid by Employee: "+taxAmnt);
    }

}