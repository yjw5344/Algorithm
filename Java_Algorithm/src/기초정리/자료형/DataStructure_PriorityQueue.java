package 기초정리.자료형;

import java.util.PriorityQueue;

public class DataStructure_PriorityQueue {
    public static void main(String[] args) {
        PriorityQueue<Integer> pq = new PriorityQueue<Integer>();

        pq.offer(6);
        pq.add(5);
        pq.offer(11);
        pq.offer(10);
        pq.offer(1);
        pq.offer(3);
        pq.offer(19);
        pq.offer(25);

        System.out.println("Priority Queue : " + pq);
        System.out.println("Priority Queue Size : " + pq.size());

        int size = pq.size();

        //System.out.print("Index Print : ");
        for(int i = 0 ; i < size ; i++){
            System.out.println("pull() : " + pq.peek());
            System.out.println();
        }




    }
}
