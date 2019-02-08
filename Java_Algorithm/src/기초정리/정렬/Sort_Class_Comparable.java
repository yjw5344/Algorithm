package 기초정리.정렬;

import java.util.ArrayList;
import java.util.Collections;

class Person implements Comparable<Person>{

    int num;

    public Person(int num) {
        this.num = num;
    }

    public int getNum() {
        return num;
    }

    public void setNum(int num) {
        this.num = num;
    }

    @Override
    public int compareTo(Person person) {
        if(num < person.getNum()){
            return 1;
        }else{
            return -1;
        }
    }
}


public class Sort_Class_Comparable {
    public static void main(String[] args) {
        ArrayList<Person> arrayList = new ArrayList<Person>();

        arrayList.add(new Person(9));
        arrayList.add(new Person(2));
        arrayList.add(new Person(4));
        arrayList.add(new Person(1));
        arrayList.add(new Person(6));
        arrayList.add(new Person(5));

        // todo : 정렬 방법
        Collections.sort(arrayList);

        System.out.println("\n==== Class 정렬 ====");
        for(Person i : arrayList){
            System.out.print(i.getNum() + " ");
        }
    }
}
