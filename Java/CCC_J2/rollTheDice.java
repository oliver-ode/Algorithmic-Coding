import java.util.Scanner;

public class rollTheDice {

    public static void main(String[] args) {
        Scanner snum = new Scanner(System.in);

        int val = 0;
        int val1 = snum.nextInt();
        int val2 = snum.nextInt();

        if (val1 <= 10 && val2 <= 10) {

        if (val1 >= val2) {
            val = val1 - 9 + val2;
        }
        else {
            val = val2 - 9 + val1;
        }
        val = Math.min(val, 9);
        if (val <=0) {
            val = 0;
        }

        if (val == 1) {
            System.out.println("There is 1 way to get the sum 10.");
        }
        else {
            System.out.println("There are " + val + " ways to get the sum 10.");
        }

        }

        else if (val1 >= 10 && val2 <= 10) {
            if (val2 == 1) {
                System.out.println("There is 1 way to get the sum 10.");
            } else {
                System.out.println("There are " + val2 + " ways to get the sum 10.");
            }
        }

        else if (val1 <= 10 && val2 >= 10) {
            if (val1 == 1) {
                System.out.println("There is 1 way to get the sum 10.");
            } else {
                System.out.println("There are " + val1 + " ways to get the sum 10.");
            }
        }

        else {
            System.out.println("There are 9 ways to get the sum 10.");
        }


    }






}
