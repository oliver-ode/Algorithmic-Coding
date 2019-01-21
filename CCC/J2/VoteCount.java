import java.util.Scanner;
public class VoteCount {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int numOfVotes = scan.nextInt();
        String votes = scan.next();
        int aCount = 0;
        int bCount = 0;
        for (int i = 0; i < numOfVotes; i++){
            if (votes.substring(i, i+1).equals("A")){
                aCount ++;
            }
            else if (votes.substring(i, i+1).equals("B")){
                bCount ++;
            }
        }
        if(aCount > bCount){
            System.out.println("A");
        }
        else if(bCount > aCount){
            System.out.println("B");
        }
        else{
            System.out.println("Tie");
        }
    }
}
