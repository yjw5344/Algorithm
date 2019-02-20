package 프로그래머스.Level2;

import java.util.ArrayList;

class Solution_숫자야구 {
    public int solution(int[][] baseball) {
        //Stack<String> numberStack = new Stack<String>();
        ArrayList<String> numberList = new ArrayList<String>();
        ArrayList<String> answerList = new ArrayList<String>();

        for(int i = 1 ; i < 10 ; i++){
            for(int j = 1; j < 10 ; j++){
                for(int z = 1 ; z < 10 ; z++){
                    if( i != j && i != z && j != z){
                        int addNumber = i*100 + j*10 + z;
                        //numberStack.add(Integer.toString(addNumber));
                        numberList.add(Integer.toString(addNumber));
                    }
                }
            }
        }


        while(!numberList.isEmpty()){
            boolean flag = true;
            String targetNumber = numberList.get(0);
            numberList.remove(0);

            for(int i = 0 ; i < baseball.length ; i++){
                int strike = checkStrike(targetNumber, baseball[i][0]);
                int ball = checkBall(targetNumber, baseball[i][0]);
                if(baseball[i][1] != strike || baseball[i][2] != ball){
                    flag = false;
                    break;
                }
            }

            if(flag){
                answerList.add(targetNumber);
            }
        }

        return answerList.size();
    }


    public int checkStrike(String number, int num){
        String strNum = Integer.toString(num);
        int check = 0;
        for(int i = 0 ; i < 3 ; i++){
            if(number.charAt(i) == strNum.charAt(i)){
                check++;
            }
        }
        return check;
    }

    public int checkBall(String number, int num){
        String strNum = Integer.toString(num);
        int check = 0;
        for(int i = 0 ; i < 3 ; i++){
            if(strNum.contains(String.valueOf(number.charAt(i)))){
                if(strNum.indexOf(String.valueOf(number.charAt(i))) != i){
                    check++;
                }
            }
        }
        return check;
    }
}

public class 숫자야구 {
    public static void main(String[] args) {

        int[][] baseball = {{123, 1, 1}, {356, 1, 0}, {327, 2, 0}, {489, 0, 1}};

        Solution_숫자야구 s = new Solution_숫자야구();
        System.out.println(s.solution(baseball));
    }
}
