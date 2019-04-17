import java.util.ArrayList;
import java.util.Collections;
import java.util.PriorityQueue;

public class Test {

    public static void main(String[] args) {

        ArrayList<Integer> testList = new ArrayList<Integer>();

        testList.add(1);
        testList.add(2);
        testList.add(3);
        testList.add(4);
        testList.add(5);
        testList.add(6);
        testList.add(7);
        testList.add(8);

        PriorityQueue<Integer> pq1 = new PriorityQueue<Integer>(Collections.reverseOrder());
        PriorityQueue<Integer> pq2 = new PriorityQueue<Integer>();

        pq1.offer(5);
        pq2.offer(5);
        pq1.offer(1);
        pq2.offer(1);
        pq1.offer(2);
        pq2.offer(2);
        pq1.offer(7);
        pq2.offer(7);
        pq1.offer(3);
        pq2.offer(3);
        pq1.offer(4);
        pq2.offer(4);
        pq1.offer(10);
        pq2.offer(10);

        System.out.println(pq1);
        System.out.println(pq2);







    }
}