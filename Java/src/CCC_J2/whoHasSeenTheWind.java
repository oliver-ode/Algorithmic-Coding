package CCC_J2;
import java.util.Scanner;
public class whoHasSeenTheWind {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int humidity = scan.nextInt();
        int maxHours = scan.nextInt();
        int altitude = 0;
        for (int t = 1; t < maxHours+1; t++){
            altitude = -6*t*t*t*t + humidity*t*t*t + 2*t*t + t;
            if(altitude <= 0){
                System.out.println("The balloon first touches ground at hour:");
                System.out.println(t);
                break;
            }
            else{
                if(t == maxHours){
                    System.out.println("The balloon does not touch ground in the given time.");
                    break;
                }
            }
        }
    }
}
