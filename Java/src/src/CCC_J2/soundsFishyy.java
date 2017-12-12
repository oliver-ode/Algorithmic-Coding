package CCC_J2;

import java.util.Scanner;
public class soundsFishyy {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int height1 = scan.nextInt();
        int height2 = scan.nextInt();
        int height3 = scan.nextInt();
        int height4 = scan.nextInt();
        if (height1 < height2 && height2 < height3 && height3 < height4){
            System.out.println("Fish Rising");
        }
        else if (height1 > height2 && height2 > height3 && height3 > height4){
            System.out.println("Fish Diving");
        }
        else if (height1 == height2 && height2 == height3 && height3 == height4){
            System.out.println("Fish At Constant Depth");
        }
        else{
            System.out.println("No Fish");
        }
    }
}
