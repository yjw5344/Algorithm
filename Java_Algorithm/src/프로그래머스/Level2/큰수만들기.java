package 프로그래머스.Level2;

class Solution_큰수만들기 {
    public String solution(String number, int k) {
        int index = 0;
        char max;
        StringBuilder answer = new StringBuilder();

        for(int i = 0; i < number.length() - k; i++) {  // number.leng() - k 개의 숫자를 뽑아야 한다.
            max = '0';
            for(int j = index ; j <= k + i; j++) {  // index는 시작점, k+i는 끝나는 지점
                if(max < number.charAt(j)) {
                    max = number.charAt(j);
                    index = j + 1;
                }
            }
            answer.append(max);
        }

        return answer.toString();
    }
}

public class 큰수만들기 {
    public static void main(String[] args) {
        Solution_큰수만들기 s = new Solution_큰수만들기();

        String number1 = "1924";
        String number2 = "1231234";
        String number3 = "4177252841";
        int k1 = 2;
        int k2 = 3;
        int k3 = 4;

        System.out.println(s.solution(number1, k1));
        System.out.println(s.solution(number2, k2));
        System.out.println(s.solution(number3, k3));

    }
}
