package 프로그래머스.Level2;

import java.util.LinkedList;
import java.util.Queue;

class Solution{
    public int solution(String skill, String[] skill_trees) {
        int answer = 0;
        boolean flag;
        Queue<Character> skillList = new LinkedList<Character>();

        for(int i = 0 ; i < skill.length() ; i++){
            skillList.offer(skill.charAt(i));
        }


        for(int i = 0 ; i < skill_trees.length ; i++){
            Queue<Character> tmp = new LinkedList<Character>(skillList);
            flag = true;
            for(int j = 0 ; j < skill_trees[i].length() ; j++){
                char target = skill_trees[i].charAt(j);
                if(tmp.contains(target)){
                    if(tmp.peek() == target){
                        tmp.poll();
                        if(tmp.isEmpty()){
                            break;
                        }
                    }else{
                        flag = false;
                        break;
                    }
                }
            }
            if(flag){
                answer++;
            }
        }
        return answer;
    }
}

public class 스킬트리 {
    public static void main(String[] args) {
        String skill = "CBD";
        String[] skill_tree = {"BACDE", "CBADF", "AECB", "BDA", "CADFB"};

        Solution s = new Solution();
        System.out.println(s.solution(skill,skill_tree));

    }
}
