import java.util.*;

public class area{ 
    public static void main(String[] arg)
    {
        System.out.println("enter the length of circle: ");
        Scanner sc =new Scanner(System.in);
        int radius=sc.nextInt();
        final float pie =3.14F;
        float area =pie*radius*radius;
        System.out.println("Area is: "+area);

    }
}