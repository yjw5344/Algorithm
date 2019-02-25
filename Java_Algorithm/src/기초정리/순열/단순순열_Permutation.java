package 기초정리.순열;

import java.util.Arrays;


/*
*   <설명>
*   4개의 숫자 : 1,2,3,4
*   이떄 4개의 숫자 중 4개를 골라 순서를 정하는 단순한 순열
*
*   순열의 경우, 무조건 2번의 swap함수와 재귀함수를 이용해야한다.
*   depth를 기준으로 반복문(for문)을 통해서 depth 보다 후위에 있는 index를 바꿔준다.
*
*/

class 단순순열_Permutation_Solution{

    public void permutation_main(int[] arr){
        int length = arr.length;
        int depth = 0;
        perm(arr, depth, length);
    }

    public void perm(int[] arr, int depth, int length){

        if (depth == length) {
            print(arr);
            return;
        }

        for (int i = depth; i < length; i++) {
            swap(arr, i, depth);    // index 자리 교체
            perm(arr, depth + 1, length);
            swap(arr, i, depth);    // index 자리 원상 복귀
        }

    }

    public void swap(int[] arr, int i, int depth){
        int temp = arr[i];
        arr[i] = arr[depth];
        arr[depth] = temp;
    }

    public void print(int[] arr){
        System.out.println(Arrays.toString(arr));
    }
}

public class 단순순열_Permutation {
    public static void main(String[] args) {
        int[] arr = {1,2,3,4};
        단순순열_Permutation_Solution permutation_solution = new 단순순열_Permutation_Solution();
        permutation_solution.permutation_main(arr);
    }
}
