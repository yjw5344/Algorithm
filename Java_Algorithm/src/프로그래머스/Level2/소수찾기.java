package 프로그래머스.Level2;

import java.util.ArrayList;

class Solution_소수찾기 {
    ArrayList<Integer> numberList = new ArrayList<Integer>();

    public int solution(String numbers) {
        int numberMaxLength = numbers.length();
        int depth = 0;
        int answer = 0;
        String[] stringNumberList = numbers.split("");

        for(int r = 1 ; r <= numberMaxLength; r++){
            String[] tempList = new String[r];
            perm(stringNumberList, depth, numberMaxLength, r, tempList);
        }

        for(int i : numberList){
            boolean primeCheck = true;
            for(int j = 2 ; j < i ; j++){
                if( i % j == 0){
                    primeCheck = false;
                    break;
                }
            }
            if(primeCheck){
                answer++;
            }
        }
        return answer;
    }

    public void perm(String[] stringNumberList, int depth, int length,int r, String[] tempList){

        if (depth == r) {
            makeNumber(tempList);
            return;
        }

        for (int i = depth; i < length; i++) {
            swap(stringNumberList, i, depth);
            tempList[depth] = stringNumberList[depth];
            perm(stringNumberList, depth + 1, length, r,tempList);
            swap(stringNumberList, i, depth);
        }

    }

    public void swap(String[] stringNumberList, int i, int depth){
        String temp = stringNumberList[i];
        stringNumberList[i] = stringNumberList[depth];
        stringNumberList[depth] = temp;
    }

    public void makeNumber(String[] tempList){
        String number = "";
        for(int i = 0 ; i < tempList.length ; i++){
            number += tempList[i];
        }
        addNumber(number);
    }

    public void addNumber(String number){
        int num = Integer.parseInt(number);
        if(num == 0 || num == 1){
            return;
        }

        if(!(numberList.contains(num))){
            numberList.add(num);
        }
    }
}


public class 소수찾기 {
    public static void main(String[] args) {
        Solution_소수찾기 s = new Solution_소수찾기();
        String number1 = "17";
        String number2 = "011";

        //System.out.println(number1 + " : " + s.solution(number1));
        System.out.println(number2 + " : " + s.solution(number2));

    }
}
