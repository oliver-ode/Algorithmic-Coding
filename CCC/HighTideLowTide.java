import java.util.*;

public class HighTideLowTide {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int numOfMeasurements;
        numOfMeasurements = scan.nextInt();
        int[] measurements = new int[numOfMeasurements];
        for(int i = 0; i < numOfMeasurements; i++){
            measurements[i] = scan.nextInt();
        }
        Arrays.sort(measurements);
        if(numOfMeasurements % 2 == 0) {
            int middle = numOfMeasurements / 2;
            for(int i = middle - 1; i >= 0; i--) {
                System.out.print(measurements[i] + " ");
                System.out.print(measurements[numOfMeasurements - 1 - i] + " ");
            }
        } else {
            int middle = (numOfMeasurements-1) / 2;
            System.out.print(measurements[middle] + " ");
            for(int i = middle - 1; i >= 0; i--) {
                System.out.print(measurements[numOfMeasurements - 1 - i] + " ");
                System.out.print(measurements[i] + " ");
            }
        }
    }
}