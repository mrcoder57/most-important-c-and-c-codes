import java.util.Scanner;
public class ifelese{

    public static void main(String args[]){
        Scanner sc= new Scanner(System.in);
int y= sc.nextInt();
if(y%4==0){
System.out.println("the year is leap");
}
else{
    System.out.print("the year is not leap");
}
    }
}
