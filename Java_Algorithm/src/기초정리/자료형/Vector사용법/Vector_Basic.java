package 기초정리.자료형.Vector사용법;

import java.util.Vector;

public class Vector_Basic {
    public static void main(String[] args) {

        // Vector 사용법 예)
        Vector<String> vector = new Vector<String>(3);  // 3의 용량을 가지는 벡터를 생성

        // ---------------- Vector Size !! ----------------
        System.out.println("vector의 크기 : "+ vector.size());
        System.out.println("vector의 용량 : "+ vector.capacity());

        // ----------------  Vector Add !! ----------------
        // vector.addElement(); // Vector에 원소를 저장한다.
        // vector.add(int index, Object object); // Vector의 index에 원소를 저장, index가 없을 경우 그냥 저장한다. index를 함께 쓰면 void 형태, 생략하면 boolean 반환값을 가진다.
        vector.addElement(new String("트와이스"));
        vector.addElement(new String("아이유"));
        vector.addElement(new String("버스커"));
        vector.addElement(new String("소녀시대"));

        // ----------------  Vector Size !! ----------------
        // vector.setSize() -> vector의 사이즈를 재설정
        // 초기의 vector를 setSize() 실행 후 원소를 추가할 경우, 원소가 설정한 사이즈 다음에 추가됨!
        vector.setSize(3); // 4 크기의 벡터를 3으로 축소, 마지막 인데스가 없어진다.

        // Vector의 초기용량(사이즈)을 넘어서 원소를 저장하게 되면 초기용량 만큼 Vector의 사이즈를 늘린다.
        System.out.println("데이터 삽입 후 vector의 크기 : "+ vector.size());
        System.out.println("데이터 삽입 후 vector의 용량 : "+ vector.capacity());

        // ----------------  Vector 조회 !! ----------------
        // vector.elementAt(int index)  -> index 위치의 객체를 반환한다.
        // vector.get(int index)        -> index 번쨰 요소를 반환한다.
        System.out.println("vector의 첫번째 요소 : "+vector.elementAt(0));
        System.out.println(vector.get(0));

        // ----------------  Vector Empty !! ----------------
        // vector.isEmpty() -> vector가 비어있는지 확인
        // vector.contains(object) -> vector에 object가 있는 확인 boolean값을 반환
        System.out.println(vector.isEmpty());
        System.out.println(vector.contains("소녀시대"));


        // ---------------- Vector 조회 !! ----------------
        // vector.firstElement() -> vector의 첫번째 원소를 반환
        // vector.lastElement() -> vector의 마지막 원소를 반환
        System.out.println(vector.firstElement());
        System.out.println(vector.lastElement());


        // ----------------  Vector 제거 !! ----------------
        // vector.remove(int index) -> vector의 해당 index를 제거
        // vector.remove(object) -> vector의 해당 object를 찾아서 제거, 동일한 객체가 존재하면 먼저 있는 index부터 제거
        // vector.removeAllElements() -> vector의 모든 원소를 제거
        vector.remove(0);
        System.out.println(vector.firstElement());


        // ----------------  Vector 검색 !! ----------------
        // vector.indexOf("Object") -> vector의 object를 찾아서 위치를 반환
        // vector.indexOf(Object object,int index) -> index로 부터 object까지의 위치를 반환
        System.out.println(vector.indexOf("트와이스"));
        System.out.println(vector.indexOf("버스커"));

        vector.removeAllElements();

        System.out.println("데이터 삭제 후 vector의 크기 : "+ vector.size());
        System.out.println("데이터 삭제 후 vector의 용량 : "+ vector.capacity());

        vector.add("에이핑크");
        vector.add("IOI");


        // ----------------  중요!!!!! ----------------
        // Vector to Array : toArray()
        String[] stringList;
        stringList = vector.toArray(new String[vector.size()]);

        for(String s : stringList){
            System.out.println(s);
        }


        // Vector 응용 -> 2차원 벡터
        System.out.println("===================");
        Vector<Vector<Integer>> v1 = new Vector<Vector<Integer>>(3);
        Vector<Integer> v2 = new Vector<Integer>();

        v2.add(1);
        v2.add(2);
        v2.add(3);

        System.out.println(v2.size());

        v1.add(v2);

        System.out.println(v1.size());
        System.out.println(v1.elementAt(0).elementAt(1));

        System.out.println();

    }
}
