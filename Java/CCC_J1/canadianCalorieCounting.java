import java.util.Scanner;
public class canadianCalorieCounting {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Welcome to Chip's Fast Food Emporium\n");
        System.out.print("Please enter a burger choice: ");
        int burger = scan.nextInt();
        System.out.print("Please enter a side order choice: ");
        int side = scan.nextInt();
        System.out.print("Please enter a drink choice: ");
        int drink = scan.nextInt();
        System.out.print("Please enter a dessert choice: ");
        int dessert = scan.nextInt();

        int total = 0;
        if(burger == 1){
            total += 461;
        }
        else if(burger == 2){
            total += 431;
        }
        else if(burger == 3){
            total += 420;
        }
        if(side == 1){
            total += 100;
        }
        else if(side == 2){
            total += 57;
        }
        else if(side == 3){
            total += 70;
        }
        if(drink == 1){
            total += 130;
        }
        else if(drink == 2){
            total += 160;
        }
        else if(drink == 3){
            total += 118;
        }
        if(dessert == 1){
            total += 167;
        }
        else if(dessert == 2){
            total += 266;
        }
        else if(dessert == 3){
            total += 75;
        }
        System.out.println("Your total Calorie count is " + String.valueOf(total) + ".");
    }
}
