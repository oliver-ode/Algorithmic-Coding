import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Fix {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringTokenizer st;
    public static void main(String[] args) throws IOException{
        int N = readInt();
        String s[] = new String[3];
        for(int i = 0; i < N; i++){
            s[0] = readLine();
            s[1] = readLine();
            s[2] = readLine();
            if(s[0].startsWith(s[1])||s[1].startsWith(s[0])||s[1].startsWith(s[2])||s[2].startsWith(s[1])||s[2].startsWith(s[0])||s[0].startsWith(s[2])||s[0].endsWith(s[1])||s[1].endsWith(s[0])||s[1].endsWith(s[2])||s[2].endsWith(s[1])||s[2].endsWith(s[0])||s[0].endsWith(s[2])){
                System.out.println("No");
            }
            else{
                System.out.println("Yes");
            }
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
