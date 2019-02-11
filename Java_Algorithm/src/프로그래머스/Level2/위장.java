package 프로그래머스.Level2;

import java.util.HashMap;

class Solution {
    public int solution(String[][] clothes) {
        int answer = 1;
        HashMap<String, Integer> clothsMap = new HashMap<String, Integer>();

        for(int i = 0; i < clothes.length ; i++){
            if(clothsMap.containsKey(clothes[i][1])){
                clothsMap.put(clothes[i][1], clothsMap.get(clothes[i][1])+1);

            }else{
                clothsMap.put(clothes[i][1], 2);
            }
        }

        for(String i : clothsMap.keySet()){
            answer *= clothsMap.get(i);
        }

        return answer-1;
    }
}

public class 위장 {
    public static void main(String[] args) {
        String[][] str1 = { { "yellow_hat", "headgear" }, { "blue_sunglasses", "eyewear" }, { "green_turban", "headgear" } };
        String[][] str2 = {{ "crow_mask", "face" }, { "blue_sunglasses", "face" }, { "smoky_makeup", "face"} };


        Solution s= new Solution();
        System.out.println("str1 : " + s.solution(str1));
        System.out.println("str2 : " + s.solution(str2));
    }
}
