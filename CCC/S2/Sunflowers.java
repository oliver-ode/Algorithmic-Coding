import java.util.Scanner;

public class Sunflowers {
    public static int[][] rotateCW90(int[][] grid){
        int[][] rotated = new int[grid.length][grid.length];
        for (int i = 0; i < grid.length; i++){
            for(int k = 0; k < grid.length; k++){
                rotated[i][k] = grid[k][grid.length-1-i];
            }
        }
        return(rotated);
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int size = scan.nextInt();
        int[][] grid = new int[size][size];
        for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                grid[i][j] = scan.nextInt();
            }
        }
        /**
         * 0,0 --> Top left (CW0)
         * 0,s --> Top right (CW1)
         * s,0 --> Bottom left (CW3)
         * s,s --> Bottom right (CW2)
         */
        int s = size-1;
        if(grid[0][0] < grid[s][0] && grid[0][0] < grid[0][s] && grid[0][0] < grid[s][s]){
            //All good
            //System.out.println(1);
        }
        else if(grid[0][s] < grid[s][0] && grid[0][s] < grid[0][0] && grid[0][s] < grid[s][s]){
            //CW1
            grid = rotateCW90(grid);
            //System.out.println(4);
        }
        else if(grid[s][s] < grid[s][0] && grid[s][s] < grid[0][s] && grid[s][s] < grid[0][0]){
            //CW2
            grid = rotateCW90(grid);
            grid = rotateCW90(grid);
            //System.out.println(3);
        }
        else if(grid[s][0] < grid[0][0] && grid[s][0] < grid[0][s] && grid[s][0] < grid[s][s]){
            //CW3
            grid = rotateCW90(grid);
            grid = rotateCW90(grid);
            grid = rotateCW90(grid);
            //System.out.println(2);
        }
        for(int i = 0; i < size; i++){
            for(int k = 0; k < size; k++){
                if(k != 0) System.out.print(" " + grid[i][k]);
                else System.out.print(grid[i][k]);
            }
            System.out.println();
        }
    }
}