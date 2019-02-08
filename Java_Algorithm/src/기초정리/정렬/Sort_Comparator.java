package 기초정리.정렬;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

public class Sort_Comparator {
    public static void main(String[] args) {
        ArrayList<Integer> arrayList = new ArrayList<Integer>();
        ArrayList<Integer> arrayList2 = new ArrayList<Integer>();

        arrayList.add(9);
        arrayList.add(2);
        arrayList.add(4);
        arrayList.add(1);
        arrayList.add(6);

        arrayList2.add(9);
        arrayList2.add(2);
        arrayList2.add(4);
        arrayList2.add(1);
        arrayList2.add(6);


        // todo : 정렬 방법 1
        Collections.sort(arrayList, new Comparator<Integer>() {
            @Override
            public int compare(Integer o1, Integer o2) {
                if(o1 < o2){    // 양수면 숫자를 바꿔준다.
                    return 1;   // 음수 or 0 이면 숫자가 그대로이다.
                }else{
                    return -1;
                }

            }
        });

        System.out.println("\n==== 정렬 ====");
        for(int i : arrayList){
            System.out.print(i + " ");
        }

        // todo : 정렬 방법 2
        Sort sort = new Sort();
        Collections.sort(arrayList2, sort);

        System.out.println("\n==== 정렬 ====");
        for(int i : arrayList2){
            System.out.print(i + " ");
        }
    }
}

class Sort implements Comparator<Integer> {

    @Override
    public int compare(Integer o1, Integer o2) {
        if(o1 < o2){
            return 1;
        }else{
            return -1;
        }
    }
}




