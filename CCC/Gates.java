import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Gates {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringTokenizer st;
    public static void main(String[] args) throws IOException{
        int numOfGates = readInt();
        int[] gates = new int[numOfGates];
        int numOfPlanes = readInt();
        boolean stillCanDock = true;
        int checkingIndex = 0;
        int dockedPlanes = 0;
        int j = 0;
        while(stillCanDock && j < numOfPlanes){
            int curPlane = readInt();
            if(gates[curPlane-1] == 0){
                gates[curPlane-1] += 1;
                dockedPlanes++;
            }
            else if(gates[curPlane-1] > 0){
                checkingIndex = curPlane-1 - gates[curPlane-1];
                while (true){
                    if(checkingIndex < 0){
                        stillCanDock = false;
                        break;
                    }
                    else if(gates[checkingIndex] == 0){
                        gates[checkingIndex] ++;
                        dockedPlanes ++;
                        break;
                    }
                    else{
                        gates[checkingIndex] ++;
                        checkingIndex -= gates[checkingIndex] -1;
                    }
                }
            }
            j++;
        }
        System.out.println(dockedPlanes);
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