package 기초정리.문자열;

import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.Collections;

public class String_Reverse {
    public static void main(String[] args) {
        String str = "Hello World is Best String Test Word";
        System.out.print("Original Word : ");
        System.out.println(str);

        // StringBuffer 선언 !!
        StringBuffer stringBuffer = new StringBuffer(str);
        System.out.println("StringBuffer : " + stringBuffer);

        // Capacity()
        System.out.println("\nStringBuffer -> Capacity : 버퍼의 크기를 의미 ");
        System.out.println(stringBuffer.capacity());

        // reverse()
        System.out.println("\nStringBuffer -> reverse : 문자열 쉽게 뒤집기");
        System.out.println(stringBuffer.reverse());
        stringBuffer.reverse();

        // delete()
        System.out.println("\nStringBuffer -> delete : 문자열 삭제");
        System.out.println(stringBuffer.delete(2,4));
        System.out.println(stringBuffer.deleteCharAt(6));

        // append() & insert()
        System.out.println("\nStringBuffer -> append : 문자열 추가");
        System.out.println(stringBuffer.append(" show me the money"));

        System.out.println("\nStringBuffer -> insert : 문자열 추가");
        System.out.println(stringBuffer.insert(1,"BHIHIHIHIHIHI"));

    }
}
