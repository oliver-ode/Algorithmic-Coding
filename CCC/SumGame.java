import java.util.Scanner;

public class SumGame {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int numOfDays = scan.nextInt();
        int[] swiftLst = new int[numOfDays];
        for(int i = 0; i < numOfDays; i++){
            swiftLst[i] = scan.nextInt();
        }
        int[] semaLst = new int[numOfDays];
        for(int i = 0; i < numOfDays; i++){
            semaLst[i] = scan.nextInt();
        }
        int maxAmount = 0;
        int sw = 0;
        int sem = 0;
        for(int i = 0; i < numOfDays; i++){
            sw += swiftLst[i];
            sem += semaLst[i];
            if(sw == sem){
                maxAmount = i+1;
            }
        }
        System.out.println(maxAmount);
    }
}