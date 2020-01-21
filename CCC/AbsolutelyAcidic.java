import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.StringTokenizer;

public class AbsolutelyAcidic {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringTokenizer st;
    public static void main(String[] args) throws IOException{
        int sensors = readInt();
        int[] readings = new int[1001];
        for(int i = 0; i < sensors; i++){
            readings[readInt()] ++;
        }

        int max = 0;
        for(int i = 0; i < readings.length; i++){
            if(readings[i] > max) max = readings[i];
        }
        ArrayList<Integer> maxs = new ArrayList<>();
        for(int i = 0; i < readings.length; i++){
            if(readings[i] == max) maxs.add(i);
        }

        if(maxs.size() > 1){
            Collections.sort(maxs);
            System.out.println(maxs.get(maxs.size()-1) - maxs.get(0));
        }
        else{
            int max2 = 0;
            ArrayList<Integer> maxs2 = new ArrayList<>();
            for(int i = 0; i < readings.length; i++){
                if(readings[i] > max2 && readings[i] < max){
                    maxs2.clear();
                    maxs2.add(i);
                    max2 = readings[i];
                }
                else if(readings[i] == max2){
                    maxs2.add(i);
                }
            }
            Collections.sort(maxs2);
            if(Math.abs(maxs2.get(0) - maxs.get(0)) > Math.abs(maxs2.get(maxs2.size()-1) - maxs.get(0))){
                System.out.println(Math.abs(maxs2.get(0) - maxs.get(0)));
            }
            else{
                System.out.println(Math.abs(maxs2.get(maxs2.size()-1) - maxs.get(0)));
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