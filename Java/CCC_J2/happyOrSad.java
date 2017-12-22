import java.util.Scanner;
public class happyOrSad {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String msg = scan.nextLine();
        int happy = 0;
        int sad = 0;
        for (int i = 0; i < msg.length()-2; i++){
            if(msg.substring(i, i+3).equals(":-)")){
                happy ++;
            }
            else if(msg.substring(i, i+3).equals(":-(")){
                sad ++;
            }
        }
        if (happy > sad){
            System.out.println("happy");
        }
        else if(happy < sad){
            System.out.println("sad");
        }
        else if(happy == sad && happy != 0){
            System.out.println("unsure");
        }
        else{
            System.out.println("none");
        }
    }
}
