import java.util.Collections;
import java.util.Comparator;
import java.util.Vector;

public class Test {

    public static void main(String[] argss) {
        Vector<Integer> vec = new Vector<Integer>();

        vec.add(9);
        vec.add(4);
        vec.add(7);
        vec.add(8);
        vec.add(2);
        vec.add(1);
        vec.add(2);


        for(int i : vec){
            System.out.println(i);
        }

        System.out.println("============");


        Collections.sort(vec,new Comparator<Integer>() {
            @Override
            public int compare(Integer o1, Integer o2) {
                if(o1 < o2){
                    return 1;
                }else{
                    return -1;
                }
            }
        });

        for(int i : vec){
            System.out.println(i);
        }
    }
}
