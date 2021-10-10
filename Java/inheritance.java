class Animal{
    void jump(){
        System.out.print("jumping......");
    }
}
class Dog extends Animal{
    void voice(){
        System.out.print("Barking......\n\n");
    }
}
class Lion extends Animal{
    void voice(){
        System.out.print("Roaring....\n\n");
    }
}

public class inheritance{ 
    public static void main(String[] arg)
    {
        Lion lion=new Lion();
        Dog fluffy=new Dog();
        System.out.print("Lion is ");
        lion.jump(); 
        System.out.print("and ");
        lion.voice();
        System.out.print("Dog is ");
        fluffy.jump(); System.out.print("and ");
       fluffy.voice();

        
    }
}