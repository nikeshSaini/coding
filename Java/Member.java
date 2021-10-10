
 class mem{
    String name;
    int age;
    String number;
    String address;
    int salary;

    public void printSalary(){
        System.out.println(salary);
    }
}
class Employee extends mem{
    String specilization   ;
}
class Manager extends mem{
    String department   ;
}

 
public class Member{ 
    public static void main(String[] arg)
    {
        Employee e = new Employee();
        e.name="Nikesh";
        e.age=21;
        e.number="121313****";
        e.address="ieevevee";
        e.salary=12345;
        e.specilization="java";
        System.out.println(e.name);
        System.out.println(e.age);
        System.out.println(e.number);
        System.out.println(e.address);
        System.out.println(e.salary);
        System.out.println(e.specilization+"\n");
        
        
        Manager m= new Manager();
        m.name="Monika maam";
        m.age=26;
        m.number= "1213113****";
        m.address="qweqwq";
        m.salary=645445;
        m.department="java and DSa";
        System.out.println(m.name);
        System.out.println(m.age);
        System.out.println(m.number);
        System.out.println(m.address);
        System.out.println(m.salary);
        System.out.println(m.department);

    }
}