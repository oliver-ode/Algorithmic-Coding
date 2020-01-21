import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Stack;
import java.util.StringTokenizer;

public class ZeroThatOut {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringTokenizer st;
    public static void main(String[] args) throws IOException{
        int statements = readInt();
        Stack<Integer> nums = new Stack<>();
        for(int i = 0; i < statements; i++){
            int num = readInt();
            if(num != 0){
                nums.add(num);
            }
            else{
                nums.pop();
            }
        }
        int total = 0;
        int size = nums.size();
        for(int i = 0; i < size; i++){
            total += nums.pop();
        }
        System.out.println(total);
    }
    static String next () throws IOException {
        while (st == null || !st.hasMoreTokens())
            st = new StringTokenizer(br.readLine().trim());
        return st.nextToken();
    }
    static int readInt () throws IOException {
        return Integer.parseInt(next());
    }
}