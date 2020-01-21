import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class WhereToBuildMyHouse {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringTokenizer st;

    public static void main(String[] args) throws IOException{
        int L = readInt(), N = readInt(), ans = 0, st = 0;
        pair seg[] = new pair[N];
        for(int i = 0; i < N; i++) {
            seg[i] = new pair(readInt(), readInt());
        }
        Arrays.sort(seg);
        for (pair e : seg) {
            if (e.s > st) ans = Math.max(ans, e.s - st);
            st = Math.max(st, e.t);
        }
        System.out.println(Math.max(ans, L-st));
    }

    public static class pair implements Comparable<pair>{
        int s, t;
        pair(int s0, int t0){s=s0;t=t0;}
        public int compareTo(pair x){
            if(s!=x.s) return Integer.compare(s, x.s);
            else return Integer.compare(t, x.t);
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