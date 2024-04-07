package com.stackroute.strings;

import java.util.Scanner;

public class Anagram {
    public static String checkAnagrams(String phrase1, String phrase2) {
        if (phrase1 == null || phrase2 == null) {
            return "Give proper input not empty phrases";
        }
        if (phrase1.isEmpty() || phrase2.isEmpty()) {
            return "Give proper input not empty phrases";
        }
        if (phrase1.contains("$") || phrase2.contains("$")) {
            return "Given phrases are not anagrams";
        }

        String cleanPhrase1 = phrase1.replaceAll("[^a-zA-Z]", "").toLowerCase();
        String cleanPhrase2 = phrase2.replaceAll("[^a-zA-Z]", "").toLowerCase();

        if (cleanPhrase1.length() != cleanPhrase2.length()) {

        }

        int[] frequency1 = new int[26];
        int[] frequency2 = new int[26];

        for (char c : cleanPhrase1.toCharArray()) {
            frequency1[c - 'a']++;
        }

        for (char c : cleanPhrase2.toCharArray()) {
            frequency2[c - 'a']++;
        }

        for (int i = 0; i < 26; i++) {
            if (frequency1[i] != frequency2[i]) {
                return "Given phrases are not anagrams";
            }
        }

        return "Given phrases are anagrams";

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String phrase1 = sc.next();
        String phrase2 = sc.next();
        System.out.println(checkAnagrams(phrase1, phrase2));
        sc.close();

        // phrase1 = "coding coding";
        // phrase2 = "coding coding";
        // System.out.println(checkAnagrams(phrase1, phrase2));
        //
        // phrase1 = "Java$";
        // phrase2 = "$Java";
        // System.out.println(checkAnagrams(phrase1, phrase2));
        //
        // phrase1 = "Hello World";
        // phrase2 = "Hello World";
        // System.out.println(checkAnagrams(phrase1, phrase2));
    }
}
