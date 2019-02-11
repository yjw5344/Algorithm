package 기초정리.정렬;

import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;

public class Sort_Array_Basic {
    public static void main(String[] args) {

        // 행렬의 정렬
        int[] integerArr = {5,43,1,6,2,7,5,2,1};
        String[] stringArr = {"a", "z", "c", "b", "n"};

        System.out.println("============ 행렬의 정렬 전 ============");
        for(int i : integerArr){
            System.out.print(i + " ");
        }
        System.out.println();
        for(String s : stringArr){
            System.out.print(s + " ");
        }

        Arrays.sort(integerArr);
        Arrays.sort(stringArr);

        System.out.println("\n============ 행렬의 정렬 후 ============");

        for(int i : integerArr){
            System.out.print(i + " ");
        }
        System.out.println();
        for(String s : stringArr){
            System.out.print(s + " ");
        }

        // todo: 주의 점 - 내림차순!!
        // 내림차순 정렬의 경우 : 오름차순 정렬한 것을 뒤집어 준다.
        // 배열의 경우 reverse 함수의 사용이 불가능 -> list로 변경 후 뒤집에서 사용해야된다.

        // int[] -> Integer[] 변환 : Arrays.stream(integerArr).boxed().toArray(Integer[]::new)
        // List<Integer> -> int[] : intList.stream().mapToInt(Integer::intValue).toArray()

        List<Integer> intList = Arrays.asList(Arrays.stream(integerArr).boxed().toArray(Integer[]::new));

        Collections.reverse(intList);
        integerArr = intList.stream().mapToInt(Integer::intValue).toArray();


        System.out.println("\n============ 내림차순 정렬 ============");
        for(int i : integerArr){
            System.out.print(i + " ");
        }

        List<String> stringList = Arrays.asList(stringArr);
        ArrayList<String> stringList2 = new ArrayList<String>(Arrays.asList(stringArr));

        Collections.reverse(stringList);
        stringArr = stringList.toArray(new String[stringList.size()]);

        Collections.reverse(stringList2);
        String[] str = stringList2.toArray(new String[stringList2.size()]);

        System.out.print("\n(string)List : ");
        for(String s : stringArr){
            System.out.print(s + " ");
        }
        System.out.println("\n====");
        for(String s : str){
            System.out.print(s + " ");
        }

        //=====================

        // 단일 문자열 쪼개는 방법
        String s123 = "Hello";
        String[] arr123 = s123.split("");
        System.out.println(Arrays.toString(arr123));

    }
}
