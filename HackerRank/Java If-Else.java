//https://www.hackerrank.com/challenges/java-if-else/submissions/code/302901581
import java.util.*;
public class Main {
    public static void main (String [] args) {
        Scanner sin = new Scanner(System.in);
        int n = sin.nextInt();
        if (n%2 != 0){
            System.out.println("Weird");
        } else if (n%2 == 0) {
            if(n>=2 && n<=5){
                System.out.println("Not Weird");
            } else if (n >=6 && n <= 20){
                System.out.println("Weird");
            } else if (n>20){
                System.out.println("Not Weird");
            }
        }
        
    }
}
