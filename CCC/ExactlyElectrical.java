import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class ExactlyElectrical {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringTokenizer st;
    public static void main(String[] args) throws IOException{
        int x1, y1;
        x1 = readInt();
        y1 = readInt();
        int x2, y2;
        x2 = readInt();
        y2 = readInt();
        int charges;
        charges = readInt();
        int xDist = Math.abs(x2-x1);
        int yDist = Math.abs(y2-y1);
        if(xDist + yDist <= charges && (charges - (xDist+yDist)) % 2 == 0){
            System.out.println("Y");
        }
        else{
            System.out.println("N");
        }
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