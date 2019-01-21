import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Frog1 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringTokenizer st;
    public static void main(String[] args) throws IOException{
        int N = readInt();
        int[] dp = new int[N];
        int V0 = 0;
        int V1 = 0;
        int V2 = 0;
        for(int i = 0; i < N; i++){
            V0 = readInt();
            if(i>=2) dp[i] = Math.min(dp[i-1]+Math.abs(V0-V1), dp[i-2]+Math.abs(V0-V2));
            else if(i==1) dp[i] = dp[i-1]+Math.abs(V0-V1);
            else dp[i] = 0;

            V2 = V1;
            V1 = V0;
        }
        System.out.println(dp[N-1]);
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