// package com.stackroute.basics;

import java.util.Scanner;

public class StringFinder {
    // Create Scanner object as instance variable
    Scanner sc = new Scanner(System.in);
    String searchString, firstString, secondString;

    public static void main(String[] args) {
        StringFinder stringFinder = new StringFinder();

        stringFinder.searchString = stringFinder.getInput();
        stringFinder.firstString = stringFinder.getInput();
        stringFinder.secondString = stringFinder.getInput();

        int res = stringFinder.findString(stringFinder.searchString, stringFinder.firstString,
                stringFinder.secondString);

        stringFinder.displayResult(res);
        stringFinder.closeScanner();
        // Get three strings from the user
    }

    public String getInput() {
        try {
            return sc.nextLine();
        } catch (Exception e) {
            return "";
        }

    }

    public void displayResult(int result) {

        String myOutput = "";
        if (result == 0)
            myOutput = "Not found";
        else if (result == 1)
            myOutput = "Found as expected";
        else if (result == -1)
            myOutput = "Empty string or null";

        System.out.print(myOutput);
    }

    public int findString(String searchString, String firstString, String secondString) {
        if (searchString == null || firstString == null || secondString == null) {
            return -1;
        }
        if (searchString.isEmpty() || firstString.isEmpty() || secondString.isEmpty()) {
            return -1;
        }
        int t1 = searchString.indexOf(firstString);
        int t2 = searchString.indexOf(secondString);

        if (t1 < t2 && t1 != -1 && t2 != -1)
            return 1;
        else
            return 0;

    }

    public void closeScanner() {
        sc.close();
    }
}
