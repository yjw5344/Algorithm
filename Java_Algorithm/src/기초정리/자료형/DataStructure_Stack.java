package 기초정리.자료형;

import java.util.Stack;

public class DataStructure_Stack {
    // Stack 메서드
    // empty()  : stack이 비어있는지 확인
    // peek()   : stack의 top 값을 반환
    // push()   : stack에 원소를 추가
    // pop()    : stack에 원소를 꺼낸다


    public static void main(String[] args) {
        // Stack의 선언 !!
        Stack<Integer> stack = new Stack<Integer>();

        if(stack.isEmpty()){
            System.out.println("Stack is Empty");
        }else{
            System.out.println("Stack is not Empty");
        }

        System.out.println(stack);

        stack.push(1);
        System.out.println(stack);

        stack.push(2);
        System.out.println(stack);

        System.out.println(stack.peek());
        System.out.println(stack);

        System.out.println(stack.pop());
        System.out.println(stack);

    }
}
