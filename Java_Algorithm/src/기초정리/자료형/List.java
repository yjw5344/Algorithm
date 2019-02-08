package 기초정리.자료형;

import java.util.ArrayList;
import java.util.LinkedList;

// List - 종류
// * ArrayList -> 조회를 주로 사용할 때 사용 ex) stack
// * LinkedList -> 추가/삭제를 할 때 주로 사용  ex) queue, dequeue

// (1) ArrayList
// add()
// get()
// size()
// contains()
// remove(object) - object를 찾아서 삭제한다.
// remove(index) - index의 원소를 삭제한다.
// isEmpty() - ArrayList가 비어있는지 확인한다.
// clear() - ArrayList를 초기화한다.
// toArray() - ArrayList를 배열로 변환한다.

// (2) LinkedList
// add() -> 원소를 추가
// add(int index, object ob) -> index의 위치에 ob를 추가
// clear() -> 모든 요소를 삭제
// contains(Object ob) -> object가 있는지 유무를 반환한다.
// get(int index) -> index의 원소를 반환한다.
// isEmpty() -> 리스트가 비었는지 확인한다.
// peek() -> 가장 첫번째 원소를 반환
// poll() -> 가장 첫번째 원소를 반환한 후 삭제한다.
// indexOf(Object ob) -> ob 객체가 저장된 위치를 반환한다.
// remove(int index) -> index 위치의 원소를 삭제한다.
// set(int index, Object object) -> index 위치의 원소를 object로 변경한다.
// toArray() -> 리스트를 배열로 변환한다.

public class List {
    public static void main(String[] args) {

        // 1차원 배열
        ArrayList<Integer> arr1 = new ArrayList<Integer>();
        arr1.add(1);
        arr1.add(3);
        arr1.add(5);
        arr1.add(2);
        arr1.add(9);

        for(int i : arr1){
            System.out.println(i);
        }

        // 2차원 배열
        ArrayList<ArrayList<Integer>> arr2 = new ArrayList<ArrayList<Integer>>();
        ArrayList<Integer> tmp = new ArrayList<Integer>();
        tmp.add(1);
        tmp.add(2);
        tmp.add(4);
        tmp.add(3);
        tmp.add(6);
        tmp.add(7);
        tmp.add(10);
        arr2.add(tmp);

        System.out.println(arr2);
        System.out.println(arr2.get(0));


        // ArrayList -> int[]
        int[] a = arr1.stream().mapToInt(Integer::intValue).toArray();


        // ========================================================================

        LinkedList<Integer> linkedList = new LinkedList<Integer>();
        linkedList.add(45);
        linkedList.add(4);
        linkedList.add(5);
        linkedList.add(1);
        linkedList.add(2);
        linkedList.add(7);
        linkedList.add(9);
        linkedList.add(15);
        linkedList.add(65);

        System.out.print("LinkedList : ");
        for(int i : linkedList){
            System.out.print(i + " ");
        }

        System.out.println(linkedList.remove(0));
        System.out.println(linkedList.peek());


    }
}
