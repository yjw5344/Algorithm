import java.util.Vector;

public class Test {

    public static void main(String[] args) {
        Vector<String> vec = new Vector<String>();

        vec.add("1");
        vec.add("9");
        vec.add("2");
        vec.add("9");
        vec.add("3");
        vec.add("9");

        for(String i : vec){
            System.out.println(i);
        }

        vec.remove("9");
        System.out.println("============");

        for(String i : vec){
            System.out.println(i);
        }

    }
}
