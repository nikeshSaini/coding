class Animals {
    //protected method 
    protected void display() {
    System.out.println("I am an animal");
    }
}

class Dooggy extends Animals {
public static void exp2(String[] args) {


        Dooggy dog = new Dooggy();

        dog.display();
    }
}
    