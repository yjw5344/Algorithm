package 기초정리.자료형.Vector사용법;

import java.util.Collections;
import java.util.Comparator;
import java.util.Vector;

public class Vector_Sort {

    public static void main(String[] args) {
        Vector<Integer> vector = new Vector<Integer>();
        vector.add(8);
        vector.add(2);
        vector.add(1);
        vector.add(4);
        vector.add(9);

        System.out.println("vector 정렬 전 !!!");
        for(int i : vector){
            System.out.println(i);
        }

        System.out.println();

        //========================================
        // Collections의 Sort를 이용한 정렬방법!!
        Collections.sort(vector);   // 오름차순 정렬
        //========================================

        System.out.println("vector 정렬 후 !!!");
        for(int i : vector){
            System.out.println(i);
        }

        System.out.println("vector의 정렬 !! (내림차순 - 정렬함수 커스텀)");

        //========================================
        // Comparator의 정렬을 이용한 방법!!!!
        Collections.sort(vector, new Comparator<Integer>() {
            @Override
            public int compare(Integer o1, Integer o2) {
                if(o1 < o2){
                    return 1;
                }else{
                    return -1;
                }
            }
        });
        //========================================

        for(int i : vector){
            System.out.println(i);
        }

    }
}
