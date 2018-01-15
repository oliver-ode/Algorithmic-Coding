import java.util.Arrays;
import java.util.Scanner;
import java.util.stream.IntStream;
import java.util.stream.LongStream;

public class cellPhoneMessaging {

    public static void main(String[] args) {
        Scanner sword = new Scanner(System.in);

        char[] press1 = {'a', 'd', 'g', 'j', 'm', 'p', 't', 'w'};
        char[] press2 = {'b', 'e', 'h', 'k', 'n', 'q', 'u', 'x'};
        char[] press3 = {'c', 'f', 'i', 'l', 'o', 'r', 'v', 'y'};
        char[] press4 = {'s', 'z'};


        0
        char[] group1 = {'a', 'b', 'c'};
        char[] group2 = {'d', 'e', 'f'};
        char[] group3 = {'g','h','i'};
        char[] group4 = {'j','k','l'};
        char[] group5 = {'m','n','o'};
        char[] group6 = {'p','q','r','s'};
        char[] group7 = {'t','u','v'};
        char[] group8 = {'w','x','y','z'};




        int time = 0;
        int check1 = 0;
        int check2 = 0;


        String inputted = sword.nextLine();

        char[] inputarr = new char[inputted.length()];
000
        for (int i = 0; i < inputarr.length; i += 1) {

            inputarr[i] = inputted.charAt(i);


        }


        for (int i = 0; i < inputarr.length; i += 1) {
            for (int j = 0; j < press1.length; j += 1) {

                if (press1[j] == inputarr[i]) {
                    time += 1;
                }
                if (press2[j] == inputarr[i]) {
                    time += 2;
                }

                if (press3[j] == inputarr[i]) {
                    time += 3;
                }

                if (press4[0] == inputarr[i] || press4[1] == inputarr[i]) {
                    time += 4;
                }


            }



        }


        for (int i = 0; i < inputarr.length-1; i += 1) {
            for (int k = 0; k < group1.length; k += 1) {
                check1 = 0;
                check2 = 0;
                if (inputarr[i] == group1[0] || inputarr[i] == group1[1] || inputarr[i] == group1[2]) {
                    check1 = 1;
                }
                if (inputarr[i] == group2[0] || inputarr[i] == group2[1] || inputarr[i] == group2[2]) {
                    check1 = 1;
                }
                if (inputarr[i] == group3[0] || inputarr[i] == group3[1] || inputarr[i] == group3[2]) {
                    check1 = 1;
                }
                if (inputarr[i] == group4[0] || inputarr[i] == group4[1] || inputarr[i] == group4[2]) {
                    check1 = 1;
                }
                if (inputarr[i] == group5[0] || inputarr[i] == group5[1] || inputarr[i] == group5[2]) {
                    check1 = 1;
                }
                if (inputarr[i] == group6[0] || inputarr[i] == group6[1] || inputarr[i] == group6[2]) {
                    check1 = 1;
                }
                if (inputarr[i] == group7[0] || inputarr[i] == group7[1] || inputarr[i] == group7[2]) {
                    check1 = 1;
                }
                if (inputarr[i] == group8[0] || inputarr[i] == group8[1] || inputarr[i] == group8[2]) {
                    check1 = 1;
                }

            }


    }

}

}
