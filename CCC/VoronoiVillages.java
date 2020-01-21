import java.util.Arrays;
import java.util.Scanner;

public class VoronoiVillages {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int numOfVillages = scan.nextInt();
        int[] villages = new int[numOfVillages];
        for(int i = 0; i < numOfVillages; i++){
            villages[i] = scan.nextInt();
        }
        Arrays.sort(villages);
        double lowest = Integer.MAX_VALUE;
        for(int i = 1; i < villages.length-1; i++){
            double partAShit = Math.abs(villages[i+1]-villages[i]);
            partAShit /= 2;
            double partBShit = Math.abs(villages[i-1]-villages[i]);
            partBShit /= 2;
            if(partAShit + partBShit < lowest){
                lowest = partAShit + partBShit;
            }
        }
        String lowestStr = String.valueOf(lowest);
        int decimal = lowestStr.indexOf(".");
        System.out.printf("%.1f", lowest);
    }
}