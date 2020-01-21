import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.StringTokenizer;

public class Boxes {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringTokenizer st;
    public static void main(String[] args) throws IOException{
        int boxes = readInt();
        int[][] box = new int[boxes][3];
        for(int i = 0; i < boxes; i++){
            box[i][0] = readInt();
            box[i][1] = readInt();
            box[i][2] = readInt();
            Arrays.sort(box[i]);
        }
        int packages = readInt();
        int[][] pakage = new int[packages][3];
        for(int i = 0; i < packages; i++){
            pakage[i][0] = readInt();
            pakage[i][1] = readInt();
            pakage[i][2] = readInt();
            Arrays.sort(pakage[i]);
        }

        ArrayList<Integer> possible = new ArrayList<>();
        for(int i = 0; i < packages; i++){
            for(int k = 0; k < boxes; k++){
                if(pakage[i][0] <= box[k][0] && pakage[i][1] <= box[k][1] && pakage[i][2] <= box[k][2]) possible.add(box[k][0] * box[k][1] * box[k][2]);
            }
            Collections.sort(possible);
            if(possible.size() != 0) System.out.println(possible.get(0));
            else System.out.println("Item does not fit.");
            possible.clear();
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