package 기초정리.자료형;

import java.util.*;

public class DataStructure_Set {
    // Set이란?
    // 자바에서는 HashSet을 사용한다.
    // 중복, 순서가 존재하지 않는다.
    // Value 값만 존재한다.

    // add()        : Set에 value값을 추가한다.
    // clear()      : Set을 초기화한다.
    // contains()   : Set에 해당 Value가 있는 확인한다.
    // isEmpty()    : Set이 비어있는지 확인한다.
    // remove()     : Set의 Value를 삭제한다.
    // size()       : Set의 Size를 반환한다.
    // toArray()    : Set을 배열로 변환한다.
    // iterator()   : Iterator<E> iterator()

    public static void main(String[] args) {

        HashSet hashSet = new HashSet();
        HashSet<String> hs = new HashSet<String>();

        hashSet.add(1);
        hashSet.add(31);
        hashSet.add(4);
        hashSet.add(2);
        hashSet.add(5);

        Iterator iter = hashSet.iterator();
        while(iter.hasNext()){
            System.out.print(iter.next() + " ");
        }


        hs.add("b");
        hs.add("x");
        hs.add("h");
        hs.add("y");
        hs.add("s");
        hs.add("a");

        System.out.println("\n\nfor문 출력");
        for(String s : hs){
            System.out.print(s + " ");
        }

        // Iterator 출력
        System.out.println("\n\nIterator 출력");
        Iterator<String> iter1 = hs.iterator();
        while(iter1.hasNext()){
            System.out.print(iter1.next() + " ");
        }


        // 번외 Set -> ArrayList로 만들기
        Object[] arr = hs.toArray();
        System.out.println(Arrays.toString(arr));

        ArrayList setList = new ArrayList(hashSet);
        ArrayList<String> arrList = new ArrayList<String>(hs);
        System.out.println();
        System.out.println(arrList);
        System.out.println();
        System.out.println(setList);




    }
}
