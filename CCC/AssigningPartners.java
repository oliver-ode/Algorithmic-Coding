import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class AssigningPartners {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringTokenizer st;
    public static int find(String[] s, String _s){
        for(int i = 0; i < s.length; i++){
            if(s[i].equals(_s)) return(i);
        }
        return(-1);
    }
    public static void main(String[] args) throws IOException{
        int N = readInt();
        String[] A = readLine().split(" ");
        String[] B = readLine().split(" ");
        if(N%2==1){
            System.out.println("bad");
            System.exit(0);
        }
        for(int i = 0; i < N; i++){
            if(find(A, B[i]) != find(B, A[i])){
                System.out.println("bad");
                System.exit(0);
            }
        }
        System.out.println("good");
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
