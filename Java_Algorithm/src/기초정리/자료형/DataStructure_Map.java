package 기초정리.자료형;

import java.util.HashMap;

public class DataStructure_Map {
    // Java에서의 Map -> HashMap
    // Hash 란?
    // Key - Value 형태로 이루어진 자료구조
    // Key의 중복은 허용하지 않는다. Value의 중복은 허용한다.
    //
    // 예)   호랑이-90
    //      사슴-90   : value의 경우, 중복 허용 O
    //      호랑이-80  : key의 경우, 중복 혀용 X => 최종적으로 호랑이-80으로 저장됨

    // HashMap의 메서드
    // put()            : key-value 값을 HashMap에 추가한다.
    // get()            : 해당 키 값에 해당하는 데이터를 반환한다.
    // remove()         : 해당 키 값에 해당하는 데이터를 삭제한다.
    // containKey()     : 지정한 키 값이 존재하는지 확인한다.
    // containvalue()   : 지정한 값이 존재하는지 확인한다.
    // size()           : HashMap의 크기를 반환한다.
    // isEmpty()        : HashMap이 비어 있는지 유무를 반환한다.
    // clear()          : HashMap을 초기화한다.


    public static void main(String[] args) {

        HashMap<String,Integer> hashMap = new HashMap<String, Integer>();

        // isEmpty()
        if(hashMap.isEmpty()){
            System.out.println("HashMap is Empty");
        }else{
            System.out.println("HashMap is not Empty");
        }

        hashMap.put("c",3);
        hashMap.put("a",1);
        hashMap.put("e",5);
        hashMap.put("b",2);
        hashMap.put("d",4);

        System.out.println("Size : " + hashMap.size());
        System.out.println("b : " + hashMap.get("b"));

        System.out.println(hashMap.containsKey("a"));
        System.out.println(hashMap.containsValue(2));

        System.out.println("remove() 실행");
        hashMap.remove("a");

        System.out.println("b값 변경");
        hashMap.put("b",100);
        System.out.println("b : " + hashMap.get("b"));

        // HashMap   for문 돌리는법
        // keySet() => key값을 모두 가져온다.
        // entrySet => Key와 Value값 모두 가져온다.


        // 참고
//        for ( String key : map.keySet() ) {
//            System.out.println("방법1) key : " + key +" / value : " + map.get(key));
//        }
//        System.out.println("=======================");
//
//
//        for ( Map.Entry<String, String> entry : map.entrySet() ) {
//            System.out.println("방법2) key : " + entry.getKey() +" / value : " + entry.getKey());
//        }
//        System.out.println("=======================");
//
//
//        Iterator<String> keys = map.keySet().iterator();
//        while ( keys.hasNext() ) {
//            String key = keys.next();
//            System.out.println("방법3) key : " + key +" / value : " + map.get(key));
//        }

    }
}
