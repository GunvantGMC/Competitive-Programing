package com.stackroute.exercises;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;
import org.mockito;

public class CatalogSortedListSearch {
    private List<String> catalogList;

    public CatalogSortedListSearch() {
        catalogList = new ArrayList<>();
    }

    // write here logic to get sorted Array List which is a global class variable
    public Object catalogListSorter(List<String> unSortedCatalogList) {
        if (unSortedCatalogList == null || unSortedCatalogList.isEmpty()) {
            return "The catalog list is empty";
        }

        for (String value : unSortedCatalogList) {
            if (value == null || value.isEmpty()) {
                return "The catalog List contains empty or null or blank space as a value";
            }
        }

        Collections.sort(unSortedCatalogList);
        return unSortedCatalogList;
    }

    // write here logic to search the input value in sorted Array List
    public String catalogListSearcher(String Value) {
        if (Value == null || Value.isEmpty()) {

            return "Input is not accepted";
        }

        Collections.sort(catalogList);
        int index = Collections.binarySearch(catalogList, Value, String.CASE_INSENSITIVE_ORDER);
        if (index >= 0) {
            return "Found: " + catalogList.get(index);
        } else {
            return "Not Found";
        }
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        CatalogSortedListSearch catalogSortedListSearch;

        catalogSortedListSearch = new CatalogSortedListSearch();

        // List<String> catalogList = new ArrayList<>();

        catalogSortedListSearch.catalogList.add("Nike");
        catalogSortedListSearch.catalogList.add("Puma");
        catalogSortedListSearch.catalogList.add("Adidas");
        catalogSortedListSearch.catalogList.add("Reebok");
        catalogSortedListSearch.catalogList.add("UnderArmour");
        catalogSortedListSearch.catalogList.add("NBalance");
        catalogSortedListSearch.catalogList.add("SuperDry");

        Object sortedCatalogListObj = catalogSortedListSearch
                .catalogListSorter(catalogSortedListSearch.catalogList);
        if (sortedCatalogListObj instanceof List<?>) {

            String value;
            try {
                value = sc.nextLine();
                if (value == null || value.isEmpty()) {
                    System.out.println(sortedCatalogListObj);
                } else {
                    String searchResult = catalogSortedListSearch.catalogListSearcher(value);
                    System.out.println(searchResult);
                }
            } catch (Exception e) {
                System.out.println(sortedCatalogListObj);
            }

        } else {
            System.out.println(sortedCatalogListObj);
        }

    }
}