import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Jerseys {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringTokenizer st;

    public static boolean bigger(char a, char b){
        if(a == 'A') return false;
        else if(a == 'L') return true;
        else if(a == 'M' && b != 'L') return(true);
        else if(a == 'S' && b == 'S') return(true);
        return(false);
    }

    public static void main(String[] args) throws IOException{
        int numOfJerseys = readInt();
        int numOfPeople = readInt();
        char[] jerseys = new char[numOfJerseys];
        for(int i = 0; i < numOfJerseys; i++){
            jerseys[i] = readCharacter();
        }
        char[] prefSize = new char[numOfPeople];
        int[] prefNum = new int[numOfPeople];
        for(int i = 0; i < numOfPeople; i++){
            prefSize[i] = readCharacter();
            prefNum[i] = readInt();
        }

        int satisfied = 0;
        for(int i = 0; i < numOfPeople; i++){
            if(bigger(jerseys[prefNum[i]-1], prefSize[i])) {
                satisfied++;
                jerseys[prefNum[i]-1] = 'A';
            }
        }
        System.out.println(satisfied);

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