package 기초정리.자료형;

import java.util.LinkedList;
import java.util.Queue;

public class List_Queue {

    // Queue의 주요 메서드
    // peek()
    // offer()
    // poll()
    // element()
    // remove()
    // add()

    public static void main(String[] args) {
        Queue<Integer> qu = new LinkedList<Integer>();

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

        System.out.println(qu.poll());
        System.out.println(qu);

    }
}
