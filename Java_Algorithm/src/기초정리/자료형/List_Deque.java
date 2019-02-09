package 기초정리.자료형;

import java.util.*;

public class List_Deque {
    // Deque -> 덱의 경우, LinkedList의 형태로 front와 end에서 원소를 push, pop 할 수 있다.

    // Deque의 메서드
    // add()        : deque의 rear에 원소를 추가한다.
    // addFirst()   : deque의 front에 원소를 추가한다.
    // addLast()    : add() 함수와 역할이 동일하다.
    // contains(Object o)   : 객체 o가 있는지 확인하여 true, false 값을 반환한다.

    // iterator()   : ex) Iterator<integer> iterator = queue.iterator(); Queue의 Iterator를 선언한다.
    // descendingIterator() : reverse() Iterator 선언

    // peek()       : Deque의 front 값
    // peekFirst()  : Deque의 front 값
    // peekLast()   : Deque의 last 값

    // pop()        : Deque의 front 값을 제거한 후, 그 값을 반환

    // push()       : Deque의 front에 원소를 추가

    // remove()         : Deque의 front 값을 제거
    // removeFirst()    : Deque의 front 값을 제거
    // removeLast()     : Deque의 Rear 값을 제거

    // removeFirstOccurrence(Object o)  : front부터 o까지 값이 나온 처음 지점을 찾아서 제거
    // removeLastOccurrence(Object o )  : rear부터 o까지 값이 나온 처음 지점을 찾아서 제거

    public static void main(String[] args) {

        // Deque의 선언 방법 !!
        Queue<Integer> deque1 = new ArrayDeque<Integer>();  // Deque를 선언 할 때 가장 보편적으로 선언하는 방법이다.
        Queue<Integer> deque2 = new LinkedList<Integer>();  // Deque를 선언 할 때 LinkedList로도 선언이 가능하다.

        deque1.offer(1);
        deque1.offer(110);
        deque1.offer(11);
        deque1.offer(21);
        deque1.offer(51);
        deque1.offer(167);
        deque1.offer(12);
        deque1.offer(15);

        System.out.println(deque1);
        System.out.println("=================================");

        deque1.add(10000);
        System.out.println("add() : " + deque1);

        ((ArrayDeque<Integer>) deque1).addFirst(1111);
        System.out.println("addFirtst() : " + deque1);

        ((ArrayDeque<Integer>) deque1).addLast(2222);
        System.out.println("addLastß() : " + deque1);

        System.out.println("peek() : " + deque1.peek());
        System.out.println("peekFirst() : " + ((ArrayDeque<Integer>) deque1).peekFirst());
        System.out.println("peekLast() : " + ((ArrayDeque<Integer>) deque1).peekLast());

        System.out.println("pop() : " + ((ArrayDeque<Integer>) deque1).pop());

        // Deque의 나머지 메서드는 참고해서 구현!
    }
}
