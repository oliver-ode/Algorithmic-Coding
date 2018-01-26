import java.util.Arrays;
import java.util.Scanner;
public class cccOthello {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String input = scan.nextLine();
        input = input + " ";
        char[][] board = new char[8][8];
        if(input.charAt(0) == 'a'){
            board = new char[][] {{'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e'},
                                  {'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e'},
                                  {'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e'},
                                  {'e', 'e', 'e', 'w', 'b', 'e', 'e', 'e'},
                                  {'e', 'e', 'e', 'b', 'w', 'e', 'e', 'e'},
                                  {'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e'},
                                  {'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e'},
                                  {'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e'}};
        }
        else if(input.charAt(0) == 'b'){
            board = new char[][] {{'b', 'e', 'e', 'e', 'e', 'e', 'e', 'w'},
                                  {'e', 'b', 'e', 'e', 'e', 'e', 'w', 'e'},
                                  {'e', 'e', 'b', 'e', 'e', 'w', 'e', 'e'},
                                  {'e', 'e', 'e', 'b', 'w', 'e', 'e', 'e'},
                                  {'e', 'e', 'e', 'w', 'b', 'e', 'e', 'e'},
                                  {'e', 'e', 'w', 'e', 'e', 'b', 'e', 'e'},
                                  {'e', 'w', 'e', 'e', 'e', 'e', 'b', 'e'},
                                  {'w', 'e', 'e', 'e', 'e', 'e', 'e', 'b'}};
        }
        else if(input.charAt(0) == 'c'){
            board = new char[][] {{'e', 'e', 'b', 'b', 'w', 'w', 'e', 'e'},
                                  {'e', 'e', 'b', 'b', 'w', 'w', 'e', 'e'},
                                  {'e', 'e', 'b', 'b', 'w', 'w', 'e', 'e'},
                                  {'e', 'e', 'b', 'b', 'w', 'w', 'e', 'e'},
                                  {'e', 'e', 'b', 'b', 'w', 'w', 'e', 'e'},
                                  {'e', 'e', 'b', 'b', 'w', 'w', 'e', 'e'},
                                  {'e', 'e', 'b', 'b', 'w', 'w', 'e', 'e'},
                                  {'e', 'e', 'b', 'b', 'w', 'w', 'e', 'e'}};
        }
        input = input.substring(2, input.length());
        int numOfMoves = Integer.parseInt(input.substring(0, 1));
        input = input.substring(2, input.length());
        int[][] moves = new int[numOfMoves][2];
        for(int i = 0; i < numOfMoves; i++){
            moves[i][0] = Integer.valueOf(input.substring(0, 1)); //Row
            moves[i][1] = Integer.valueOf(input.substring(2, 3)); //Column
            input = input.substring(4, input.length());
        }
        System.out.println(Arrays.deepToString(moves));
        for(int i = 0; i < moves.length; i ++){
            int xMove = moves[i][0]-1;
            int yMove = moves[i][1]-1;
            char color, opponent;
            if(i % 2 == 0){
                board[xMove][yMove] = 'b';
                color = 'b';
                opponent = 'w';
            }
            else{
                board[xMove][yMove] = 'w';
                color = 'w';
                opponent = 'b';
            }
        }
    }
    public void verticalMoveCheck(char[][] board, int xMove, int yMove, char playerColor, char opponentColor){
        if(yMove > 0) {
            if(board[xMove][yMove - 1] == opponentColor){ //Checking above y placement

            }
        }
        else if(yMove < 7){
            if(board[xMove][yMove + 1] == opponentColor){ //Checking below y placement

            }
        }
    }
}