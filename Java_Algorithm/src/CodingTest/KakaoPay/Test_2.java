package CodingTest.KakaoPay;

import java.util.ArrayList;
import java.util.List;

class Solution2{
    public int solution(String[] moves){

        if(moves.length < 4){
            return 0;
        }
        int count = 0;
        int flag = 0;
        List<String> restMoves = new ArrayList<String>();
        for(int i = 0 ; i < (moves.length - 3); i++){
            if(moves[i] == "U"){
                if(moves[i+1] == "R" && moves[i+2] == "D" && moves[i+3] == "L" && flag != 1){
                    count++;
                    flag = 1;
                    i = i+3;
                }else if(moves[i+1] == "L" && moves[i+2] == "D" && moves[i+3] == "R" && flag != 2){
                    count++;
                    flag = 2;
                    i = i+3;
                }else{
                    restMoves.add("U");
                    continue;
                }
            }else if(moves[i] == "R"){
                if(moves[i+1] == "U" && moves[i+2] == "L" && moves[i+3] == "D" && flag != 3){
                    count++;
                    flag = 3;
                    i = i+3;
                }else if(moves[i+1] == "D" && moves[i+2] == "L" && moves[i+3] == "U" && flag != 4){
                    count++;
                    flag = 4;
                    i = i+3;
                }else{
                    restMoves.add("R");
                    continue;
                }
            }else if(moves[i] == "L"){
                if(moves[i+1] == "U" && moves[i+2] == "R" && moves[i+3] == "D" && flag != 5){
                    count++;
                    flag = 5;
                    i = i+3;
                }else if(moves[i+1] == "D" && moves[i+2] == "R" && moves[i+3] == "U" && flag != 6){
                    count++;
                    flag = 6;
                    i = i+3;
                }else{
                    restMoves.add("L");
                    continue;
                }
            }else if(moves[i] == "D"){
                if(moves[i+1] == "R" && moves[i+2] == "U" && moves[i+3] == "L" && flag != 7){
                    count++;
                    flag = 7;
                    i = i+3;
                }else if(moves[i+1] == "L" && moves[i+2] == "U" && moves[i+3] == "R" && flag != 8){
                    count++;
                    flag = 8;
                    i = i+3;
                }else{
                    restMoves.add("D");
                    continue;
                }
            }
        }
        count += solution(restMoves.toArray(new String[restMoves.size()]));
        return count;
    }
}

class Test_2 {
    public static void main(String[] args) {
        Solution2 solutionClass = new Solution2();
        String[] m1 = {"U", "R", "D", "L", "U", "R", "D", "L"};
        String[] m2 = {"U", "U", "R", "D", "L", "L", "L", "U", "R", "D", "D", "D", "L", "U", "R", "R", "R", "D", "L", "U"};
        String[] m3 = {"U", "L", "D", "R", "R", "D", "D", "L", "U", "U"};
        String[] m4 = {"U", "R", "D", "L", "L", "U", "R"};
        System.out.println(solutionClass.solution(m4));
    }
}
