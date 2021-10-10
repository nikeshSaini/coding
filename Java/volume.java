class Box{
    double width,height,depth;

    public Box(double w,double h,double d){
        width=w;
        height=h;
        depth=d;
    }
    public double Volume(){
        return width*height*depth;
    }
}
public class volume {
    public static void main(String[] args) {
        Box obj1 = new Box(10, 12 , 13);
        System.out.println("Volume of container is: "+obj1.Volume());
    }
}




