package 기초정리.조합;

import java.util.ArrayList;

class Solution_조합 {
    ArrayList<Integer> numberList = new ArrayList<Integer>();
    public ArrayList<Integer> solution(String number, int k) {
        int numLen = number.length();
        char[] splitNumberString = number.toCharArray();
        char[] saveNum = new char[k];

        makeNumber(splitNumberString, saveNum, k, 0);
        return numberList;
    }

    public void makeNumber(char[] numberArr,char[] saveNum, int len , int depth ){
        if(depth == len){
            String num = "";
            for(int i = 0 ; i < len ; i++){
                num += Character.toString(saveNum[i]);
            }
            numberList.add(Integer.parseInt(num));
            return;
        }

        for(int i = depth; i < numberArr.length; i++){
            swap(numberArr,i,depth);    // swap
            saveNum[depth] = numberArr[depth];
            makeNumber(numberArr,saveNum,len,depth+1);
            swap(numberArr,i,depth);    // swap원상복귀
        }
    }

    public void swap(char[] arr, int i, int depth){
        char temp = arr[i];
        arr[i] = arr[depth];
        arr[depth] = temp;
    }
}

public class 조합 {
    public static void main(String[] args) {
        String str = "14235";
        int k =2;

        Solution_조합 s = new Solution_조합();
        System.out.println("문자 -> " + str + "을(를) k개 -> " + k + " 만큼 뽑는 방법");
        System.out.println(s.solution(str,k));
    }
}

//  조합 코드 설명
//  숫자 : 14235 를, k : 2 개의 조합으로 뽑는 방법
//
//  index[0] index[1]을 고정으로 뽑고 배열의 숫자를 바꿔준다.
//
//  depth : 0 -> index[0]번 자리를 재귀함수와 swap 함수를 이용해서 바꿔준다.
//  [1번째] 1 4 2 3 5
//
//  depth : 1 -> index[1]번 자리를 재귀함수와 swap 함수를 이용해서 바꿔준다.
//  [2번째] 1 2 4 3 5
//
//  [3번째] 1 3 2 4 5
//  ...
//
//  재귀함수의 첫번째 swap은 배열의 자리를 바꿔주기 위한 것!
//  재귀함수의 두번째 swap은 변경한 배열의 자리를 다시 바꿔주기 위한 것!
