package 기초정리.자료형;

import java.util.LinkedList;
import java.util.Queue;

public class DataStructure_Queue {

    // Queue의 주요 메서드
    // peek()       -> Queue에 front 원소를 반환
    // offer()      -> Queue에 원소를 추가
    // poll()       -> Queue의 front 원소를 반환
    // element()    -> Queue의 front 원소를 반환
    // remove()     -> Queue의 front 값을 제거
    // add()        -> Queue에 원소를 추가

    public static void main(String[] args) {
        // Quque를 선언하는 방법이 여러 종류가 있음,, But LinkedList로 선언하는 것이 제일 보편적이다.
        Queue<Integer> qu = new LinkedList<Integer>();
        //LinkedList<Integer> queue = new LinkedList<Integer>();

        qu.offer(10);
        qu.offer(13);
        qu.offer(12);
        qu.offer(21);
        qu.offer(51);
        qu.offer(11);
        qu.offer(71);
        qu.offer(81);


        System.out.println("Queue : " + qu);
        System.out.println("[0] Index : " + qu.peek());


        System.out.println("Element : " + qu.element());


        System.out.println(qu.poll());
        System.out.println(qu);

        // Queue의 다른 메서드는 위의 주석을 참고해서 구현
    }
}
