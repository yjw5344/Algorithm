package 프로그래머스.Level2;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;

class Solution_카펫 {
    public int[] solution(int brown, int red) {

        int[] answer = new int[2];

        // Red의 약수를 구한다.
        ArrayList<Integer> redNumber = new ArrayList<Integer>();
        for(int i = 1 ; i <= red ; i++){
            if(red % i ==0){
                redNumber.add(i);
            }
        }
        Collections.reverse(redNumber);

        int[][] square;
        int redSquareCount;
        if(redNumber.size() % 2 == 0 ){
            redSquareCount = redNumber.size()/2;
            square = new int[redSquareCount][2];
            for(int i = 0; i < redSquareCount;i++){
                square[i][0] = redNumber.get(i);
                square[i][1] = redNumber.get(redNumber.size()-1-i);
            }
        }else {
            redSquareCount = redNumber.size()/2+1;
            square = new int[redSquareCount][2];
            for(int i = 0; i < redSquareCount;i++){
                if(i == redSquareCount-1){
                    square[i][0] = redNumber.get(i);
                    square[i][1] = redNumber.get(i);
                }else{
                    square[i][0] = redNumber.get(i);
                    square[i][1] = redNumber.get(redNumber.size()-1-i);
                }
            }
        }

        for(int i = 0 ; i < redSquareCount ; i++){
            int brownValue = (square[i][0]+2)*2 + (square[i][1]+2)*2 - 4;
            if(brown == brownValue){
                answer[0] = square[i][0]+2;
                answer[1] = square[i][1]+2;
                break;
            }
        }
        return answer;
    }
}

public class 카펫 {
    public static void main(String[] args) {
        int brown1 = 10;
        int red1 = 2;
        int brown2 = 8;
        int red2 = 1;
        int brown3 = 24;
        int red3 = 24;

        Solution_카펫 s = new Solution_카펫();
        System.out.println(Arrays.toString(s.solution(brown1, red1)));
        System.out.println(Arrays.toString(s.solution(brown2, red2)));
        System.out.println(Arrays.toString(s.solution(brown3, red3)));

    }
}
