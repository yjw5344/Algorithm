package 기초정리.문자열;

import java.util.Arrays;

public class String_Basic {
    public static void main(String[] args) {

        // 문자열 선언 방법
        String testString1 = "Hello World";
        String testString2 = new String("My name is Jungwon");
        String testString3 = "";

        System.out.println(testString1);
        System.out.println(testString2);
        System.out.println(testString3);

        // length() -> 문자열의 길이를 반환한다.
        System.out.println(testString1.length());

        // isEmpty() -> 문자열이 비어있는지 아닌지 확인한다.
        if( testString1.isEmpty() ){
            System.out.println("TestString1");
        }
        if( testString3.isEmpty() ){
            System.out.println("TestString3");
        }

        // indexOf(String s) -> "s"가 위치하는 index를 찾아서 반환한다.
        System.out.println(testString1.indexOf("World"));

        // substring(int begin, int end) -> begin ~ end-1 까지를 자른다.
        // substring(int index) -> index부터 끝까지 문자열을 자른다.
        System.out.println(testString1.substring(2,4));
        System.out.println(testString1.substring(7));

        // replace(String before, String after) -> before문자열을 after문자열로 변경한다.
        testString1 = testString1.replace("World", "world is Best");
        System.out.println(testString1);

        // charAt(int index) -> index의 원소를 가져온다.
        System.out.println("charAt()");
        System.out.println(testString1.charAt(0));

        // toUpperCase() -> 대문자 변경
        System.out.println(testString1.toLowerCase());

        // toLowerCase() -> 소문자 변경
        System.out.println(testString1.toUpperCase());

        // replaceFirst() -> 첫 문자만 변경
        String s1 = "AbA";
        s1 = s1.replaceFirst("A" ,"CCCCC");
        System.out.println(s1);

        // trim() -> 문자열 앞뒤의 공백을 제거해 준다.
        String s2 = "  a aa aa aa  ";
        System.out.println(s2);
        System.out.println(s2.trim());

        // split(string pivot) -> pivot을 기준으로 string 배열을 만들어준다.
        String s3 = "a,b,c,d,e,d";
        System.out.println(s3);
        String[] stringArray = s3.split(",");
        System.out.println(Arrays.toString(stringArray));

        // toCharArray() -> 문자열을 char배열로 변환
        String s4 = "show me the money";
        char[] charArray = s4.toCharArray();
        System.out.println(Arrays.toString(charArray));

        // contains(String s) -> "s" 문자를 가지고 있는지 유무를 반환한다.
        String s5 = "show me the moeny";
        System.out.println(s5.contains("me"));


        // 그외 startWith, endWith... 찾아보시오...

    }

}
