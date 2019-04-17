package 프로그래머스.Level2;

import java.util.Collections;
import java.util.PriorityQueue;

class Solution_라면공장{
    public int solution(int stock, int[] dates, int[] supplies, int k) {

        PriorityQueue<Integer> pq = new PriorityQueue<Integer>(Collections.reverseOrder());
        int index = 0;
        int answer = 0;

        while(stock < k){
            for(int i = index ; i < dates.length; i++){
                if(dates[i] <= stock){
                    pq.add(supplies[i]);
                    index++;
                }
            }
            stock += pq.poll();
            answer++;
        }

        return answer;
    }
}

public class 라면공장 {
    public static void main(String[] args) {
        Solution_라면공장 s = new Solution_라면공장();
        int stock = 4;
        int[] dates = { 4, 10, 15};
        int[] supplies = {20, 5, 10};
        int k = 30;

        System.out.println(s.solution(stock, dates, supplies, k));
    }
}
