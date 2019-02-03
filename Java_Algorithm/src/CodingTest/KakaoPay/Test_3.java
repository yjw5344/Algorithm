package CodingTest.KakaoPay;

import java.util.ArrayList;

class Coffee {
    int index;
    int time;
    public Coffee(int index, int time)
    {
        index = index;
        time = time;
    }

    public int getIndex() { return index; }
    public void setTime(int mTime) { time = mTime; }
    public int getTime() { return time; }
}

class Solution3{
    public int[] solution(int N, int[] coffee_times) {

        ArrayList<Integer> result = new ArrayList<Integer>();
        ArrayList<Coffee> coffeList = new ArrayList<Coffee>(N);

        for(int i = 0 ; i < coffee_times.length ; i++){
            if(coffeList.size() < 3){
                coffeList.add(new Coffee(i+1, coffee_times[i]));
            }else{
                while(coffeList.size() == 3){
                    coffeList.get(0).setTime(coffeList.get(0).getTime()-1);
                    coffeList.get(1).setTime(coffeList.get(1).getTime()-1);
                    coffeList.get(2).setTime(coffeList.get(2).getTime()-1);
                    if(coffeList.get(0).getTime() == 0){
                        result.add(coffeList.get(0).getIndex());
                        coffeList.remove(0);
                    }
                    if(coffeList.get(1).getTime() == 0){
                        result.add(coffeList.get(1).getIndex());
                        coffeList.remove(1);
                    }
                    if(coffeList.get(2).getTime() == 0){
                        result.add(coffeList.get(2).getIndex());
                        coffeList.remove(2);
                    }
                }
                coffeList.add(new Coffee(i+1, coffee_times[i]));
            }
        }

        int[] answer = new int[result.size()];
        for (int i=0; i < answer.length; i++) {
            answer[i] = result.get(i).intValue();
        }
        return answer;
    }
}

public class Test_3 {
    public static void main(String[] args) {
        Solution3 solutionClass = new Solution3();
        int N = 3;
        int[] arr = {4, 2, 2, 5, 3};
        for(int i : solutionClass.solution(N, arr)){
            System.out.println(i);
        }
    }
}




