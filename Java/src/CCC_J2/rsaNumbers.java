package CCC_J2;
import java.util.Scanner;
public class rsaNumbers {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int lowerBound = scan.nextInt();
        int upperBound = scan.nextInt();
        int divisors = 0;
        int total = 0;
        for (int i = lowerBound; i <= upperBound; i++){
            for (int k = 1; k <= i; k++){
                if (i % k == 0){
                    divisors ++;
                }
            }
            if(divisors == 4){
                total += 1;
            }
            divisors = 0;
        }
        System.out.println("The number of RSA numbers between " + String.valueOf(lowerBound) + " and " + String.valueOf(upperBound) + " is " + String.valueOf(total));
    }
}
