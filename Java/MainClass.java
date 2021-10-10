import  java.util.Scanner;



class Cat{
     
        boolean hasFur;
        String color,breed;
        int legs,eyes;
        Cat(){
            Scanner sc=new Scanner(System.in);
            int legs=sc.nextInt();
            int eyes=sc.nextInt();
        }
        public void walk(){
            System.out.println("cat has"+  legs +" and "+eyes+ "and is walking:");
        }
        public void eat(){
            System.out.println("cat is eating.");
        }
       
}

public class MainClass{
    public static void main(String[] args) {
            // Cat objcat = new Cat();
            // objcat.walk();
            // Scanner sc=new Scanner(System.in);
            // String name=sc.nextLine();
            Dog objdog=new Dog(name);
            objdog.jump();
            


    }
}