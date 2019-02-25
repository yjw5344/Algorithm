package 기초정리.순열;

import java.util.Arrays;

/*
 *   <설명>
 *   4개의 숫자   : 1,2,3,4
 *   r          : 뽑는 숫자의 갯수
 *
 *   총 4개의 숫자 중에서 r 개를 뽑아서 순열을 만든다.
 *
 *   복합 순열의 경우, 무조건 2번의 swap함수와 재귀함수를 이용해야한다.
 *   depth를 기준으로 반복문(for문)을 통해서 depth 보다 후위에 있는 index를 바꿔준다.
 *
 *   단순 순열과 다른점은 순열조합을 임시로 저장할 배열을 하나 만들어줘야된다는 것이다.
 *
 */


class 복합순열_Permutation_Solution{
    int cnt = 1;
    public void permutation_main(int[] arr,int r){
        int length = arr.length;
        int depth = 0;
        int[] targetList = new int[r];
        perm(arr, depth, length, r, targetList);
    }

    public void perm(int[] arr, int depth, int length,int r, int[] targetList){

        if (depth == r) {
            print(arr);
            print(targetList);
            cnt++;
            return;
        }

        for (int i = depth; i < length; i++) {
            swap(arr, i, depth);    // index 자리 교체
            targetList[depth] = arr[depth];
            perm(arr, depth + 1, length, r,targetList);
            swap(arr, i, depth);    // index 자리 원상 복귀
        }

    }

    public void swap(int[] arr, int i, int depth){
        int temp = arr[i];
        arr[i] = arr[depth];
        arr[depth] = temp;
    }

    public void print(int[] arr){
        System.out.println(Arrays.toString(arr) + "   cnt : " + cnt);
    }
}

public class 복합순열_Permutation {
    public static void main(String[] args) {
        int[] arr = {1,2,3,4};
        int r = 2;
        복합순열_Permutation_Solution permutation_solution = new 복합순열_Permutation_Solution();
        permutation_solution.permutation_main(arr,r);
    }
}
