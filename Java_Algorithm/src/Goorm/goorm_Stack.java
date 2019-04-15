package Goorm;

import java.io.*;
import java.util.Stack;

public class goorm_Stack {
    public static void main(String[] args) throws IOException {

        Stack<Integer> stack = new Stack<Integer>();
        stack.setSize(10);


        stack.push(1);
        stack.push(2);
        stack.push(3);
        stack.push(4);
        stack.push(5);
        stack.push(6);
        stack.push(7);
        stack.push(8);
        stack.push(9);
        stack.push(10);
        stack.push(11);


        System.out.println(stack.size());


        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String input = br.readLine();


        System.out.println("Hello Goorm! Your input is " + input);

    }
}