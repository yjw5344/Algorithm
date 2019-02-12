package 기초정리.문자열;

import java.util.Arrays;
import java.util.StringTokenizer;

public class String_Parsing {
    public static void main(String[] args) {

        //todo : 공백을 제거하기 위한 방법
        // 1. string 클래스의 split 함수를 이용한다.
        // 2. string tokenizer를 이용한다.

        // ========================================================
        // 방법 (1) : String Class의 split

        String s = "show me the money";
        System.out.println(s);
        String[] stringArray = s.split(" ");

        for(String ss : stringArray){
            System.out.println(ss);

        }
        System.out.println(Arrays.toString(stringArray));

        System.out.println("======================================");

        // 방법 (2) : StringTokenizer
        String tokenString = "show me the money and my name is jungwon";
        StringTokenizer st = new StringTokenizer(tokenString, " ");

        // countTokens()
        System.out.print("token의 갯수 : ");
        System.out.println(st.countTokens());

        // hasMoreElements() : 다음 토큰이 존재하는지를 확인한다.
        // nextToken() : 다음 토큰 문자열을 가지고 온다.
        while(st.hasMoreElements()){
            String tmp = st.nextToken();
            System.out.println(tmp);
        }


        // 단일 문자열 나누기
        String tmp = "Hello World";
        String[] tmp_parsing = tmp.split("");
        System.out.println(Arrays.toString(tmp_parsing));


    }
}
