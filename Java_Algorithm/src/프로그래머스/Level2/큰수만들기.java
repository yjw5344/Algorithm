package 프로그래머스.Level2;

import java.util.Stack;

class Solution_큰수만들기 {

    public String solution1(String number, int k) {
        // for문을 이용하는 방법
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

    public String solution2(String number, int k) {
        // Stack을 이용하는 방법

        int size = number.length()-k;
        StringBuffer str = new StringBuffer();
//        char[] result = new char[number.length()-k];

        Stack<Character> st = new Stack<Character>();
        for(int i = 0 ; i < number.length(); i++){
            char num = number.charAt(i);

            while(!st.isEmpty()){
                if(st.peek() < num && k > 0){
                    st.pop();
                    k--;
                }else{
                    break;
                }
            }
            st.push(num);
        }

//        for(int i = 0 ; i < result.length ; i++){
//            result[i] = st.get(i);
//        }
//        return new String(result);


        for(int i = 0 ; i < size; i++){
            str.append(st.get(i));
        }
        return str.toString();

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

        System.out.println(s.solution1(number1, k1));
        System.out.println(s.solution1(number2, k2));
        System.out.println(s.solution1(number3, k3));
        System.out.println(s.solution2("10000", 2));
        System.out.println(s.solution2(number2, k2));
        System.out.println(s.solution2(number3, k3));

    }
}
