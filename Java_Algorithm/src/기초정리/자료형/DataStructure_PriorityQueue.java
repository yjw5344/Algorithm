package 기초정리.자료형;

import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.PriorityQueue;

public class DataStructure_PriorityQueue {
    // 우선순위큐
    // 우선순위에 맞게 끔, 원소를 자동으로 정렬하는 큐이다.
    // Key와 Value 값을 가지는 우선순위큐를 만들어야 할 때는 Comparable<T> 형태의 Class를 만들어서 정렬한다.

    // todo : 중요 정리 !!!!
    // Default : 우선순위 큐는 오름차순 정렬이 기본이다.!!!

    public static void main(String[] args) {

        // todo: PriorityQueue 기본 - 오름차순정렬
        PriorityQueue<Integer> pq = new PriorityQueue<Integer>();

        pq.offer(6);
        pq.add(5);
        pq.offer(11);
        pq.offer(10);
        pq.offer(1);
        pq.offer(3);
        pq.offer(19);
        pq.offer(25);

        // 우선순위 큐를 출력 했을 때 정렬이 되어있지 않지만, poll() 할 경우 정렬된 상태로 나오게 된다.

        System.out.println("Priority Queue : " + pq);
        System.out.println("Priority Queue Size : " + pq.size());

        int size = pq.size();
        System.out.println("\n-- index check --");
        for(int i = 0 ; i < size ; i++){
            System.out.println("poll() : " + pq.poll());
        }
        System.out.println("====================================================");
        System.out.println("\n");

        // todo : PriorityQueue - 내림차순정렬 : 우선순위 큐를 선언할 때, 정렬 형태를 미리 선언하면 된다.
        PriorityQueue<Integer> rePq = new PriorityQueue<Integer>(new Comparator<Integer>() {
            @Override
            public int compare(Integer o1, Integer o2) {
                if(o1 < o2){
                    return 1;
                }else{
                    return -1;
                }
            }
        });

        rePq.offer(6);
        rePq.add(5);
        rePq.offer(11);
        rePq.offer(10);
        rePq.offer(1);
        rePq.offer(3);
        rePq.offer(19);
        rePq.offer(25);

        System.out.println("Priority Queue : " + rePq);
        System.out.println("Priority Queue Size : " + rePq.size());

        int reSize = rePq.size();
        System.out.println("\n-- index check --");
        for(int i = 0 ; i < reSize ; i++){
            System.out.println("poll() : " + rePq.poll());
        }
        System.out.println("====================================================");

        // todo: PriorityQueue - Class 형태 정렬 하기
        PriorityQueue<Student> studentQueue = new PriorityQueue<Student>();
        studentQueue.offer(new Student("n",20));
        studentQueue.offer(new Student("b",40));
        studentQueue.offer(new Student("v",30));
        studentQueue.offer(new Student("a",10));
        studentQueue.offer(new Student("c",70));
        studentQueue.offer(new Student("z",60));
        studentQueue.offer(new Student("z'",50));

        int studentCnt = studentQueue.size();
        for(int i = 0 ; i < studentCnt ; i++){
            Student tmp = studentQueue.poll();
            System.out.println(tmp.str + " : " + tmp.index2);
        }

    }
}


// Class 형태의 PriorityQueue를 정렬하기 위해서 선언 !!
// Comparable<T>를 이용해서 우선순위 큐를 정렬한다.
class Student implements Comparable<Student>{
    String str;
    int index2;

    public Student(String str, int index2) {
        this.str= str;
        this.index2 = index2;
    }

    @Override
    public int compareTo(Student o) {
        if(this.index2 < o.index2){
            return 1;
        }else{
            return -1;
        }
    }

}
