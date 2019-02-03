package 문자열;

import java.util.Arrays;

public class 문자열_기본 {
    public static void main(String[] args) {

        // 문자열 선언
        String string1 = "Hello World";                     // 방법 1
        String string2 = new String("Hello Wolrd"); // 방법 2
        String string3 = "";

        System.out.println(string3);    //  공백 출력!

        // isEmpty()
        if(string3.isEmpty()){
            System.out.println("공백입니다");
        }

        // indexOf()
        System.out.println(string1.indexOf("World"));

        // substring()
        System.out.println(string1.substring(1,3));
        System.out.println(string1.substring(3));

        // replaceAll
        System.out.println(string1.replaceAll("Hello","Hi"));


        String s1 = "11";
        String s2 = "13";
        String[] vv = new String[2];
        vv[1] = s1;
        vv[0] = s2;
        Arrays.sort(vv);

        for(String i :vv){
            System.out.println(i);
        }











//        String str = "Hello World";
//        for(int i = 0 ; i < str.length() ; i++){
//            System.out.println(str.charAt(i));
//        }
    }
}

// String 클래스 메서드 정리
// equals()
// length()
// isEmpty() -> 공백유무 확인
// indexOf() -> 해당 문자가 시작되는 인덱스를 반환한다. 해당 문자가 존재하지 않으면 -1을 반환한다.

// substring(int a, int b)  -> a번째 인덱스부터 b-1번째 인덱스까지 출력
// substring(int c)         -> c번째 인덱스까부터 끝까지 출력

// replaceAll(char oldChar, char newChar) -> 문자열 교체


