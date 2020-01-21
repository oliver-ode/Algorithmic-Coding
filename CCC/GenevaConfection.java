import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;
import java.util.StringTokenizer;

public class GenevaConfection {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringTokenizer st;
    public static void main(String[] args) throws IOException{
        int testCases = readInt();
        for(int j = 0; j < testCases; j++){
            int numOfCars = readInt();
            Stack<Integer> cars = new Stack<>();
            for(int i = 0; i < numOfCars; i++){
                cars.add(readInt());
            }
            //Input done
            Stack<Integer> side = new Stack<>();
            int curNum = 1;
            while(!cars.empty()){
                if(cars.peek() == curNum){
                    cars.pop();
                    curNum++;
                }
                else if(!side.empty() && side.peek() == curNum){
                    side.pop();
                    curNum++;
                }
                else{
                    side.add(cars.pop());
                }
            }
            boolean possible = true;
            while(!side.empty()){
                if(side.peek() == curNum){
                    curNum++;
                    side.pop();
                }
                else{
                    possible = false;
                    break;
                }
            }
            if(possible) System.out.println("Y");
            else System.out.println("N");
        }
    }
    static String next () throws IOException {
        while (st == null || !st.hasMoreTokens())
            st = new StringTokenizer(br.readLine().trim());
        return st.nextToken();
    }
    static long readLong () throws IOException {
        return Long.parseLong(next());
    }
    static int readInt () throws IOException {
        return Integer.parseInt(next());
    }
    static double readDouble () throws IOException {
        return Double.parseDouble(next());
    }
    static char readCharacter () throws IOException {
        return next().charAt(0);
    }
    static String readLine () throws IOException {
        return br.readLine().trim();
    }
}