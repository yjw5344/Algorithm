package 프로그래머스.Level2;

class Solution_조이스틱 {
    public int solution(String name) {

        int answer = 0;
        int pivot = 0;
        int LMove = leftMove(pivot, name);
        int RMove = rightMove(pivot, name);

        StringBuffer targetName = new StringBuffer();   // 변환해야하는 문자 : "JAN" -> "AAA"

        for(int i = 0 ; i < name.length(); i++){
            targetName.append("A");
        }

        while(true){
            // 현재 인덱스 변경
            targetName.setCharAt(pivot,name.charAt(pivot));
            answer += checkConvert(name.charAt(pivot));

            if(name.equals(targetName.toString())){
                break;
            }

            if(RMove <= LMove){
                pivot += RMove;
                answer += RMove;
                if(pivot >= name.length()){
                    pivot -= name.length();
                }
                LMove += RMove;
                RMove = rightMove(pivot,name);
            }else{
                pivot -= LMove;
                answer += LMove;
                if(pivot < 0){
                    pivot += name.length();
                }
                RMove += LMove;
                LMove = leftMove(pivot, name);
            }
        }
        return answer;
    }

    public int leftMove(int pivot, String name){
        int leftMove = 0;
        for(int i = 0 ; i < name.length(); i++){
            if(pivot == 0 ){
                pivot = name.length()-1;
            }else{
                pivot--;
            }

            if(name.charAt(pivot) != 'A'){
                leftMove++;
                break;
            }else{
                leftMove++;
            }
        }

        return leftMove;
    }

    public int rightMove(int pivot, String name){
        int rightMove = 0;
        for(int i = 0 ; i < name.length(); i++){
            if(pivot == name.length()-1) {
                pivot = 0;
            }else{
                pivot++;
            }

            if(name.charAt(pivot) != 'A'){
                rightMove++;
                break;
            }else{
                rightMove++;
            }
        }
        return rightMove;
    }

    public int checkConvert(char ch){
        int upMove = ch - 65;
        int downMove = 91 - ch;
        if(upMove <= downMove){
            return upMove;
        }else{
            return downMove;
        }
    }
}


public class 조이스틱 {
    public static void main(String[] args) {

        String str1 = "JEROEN";
        String str2 = "JAN";
        String str3 = "ABAAAAAAAAABB";

        Solution_조이스틱 s = new Solution_조이스틱();

        System.out.println(s.solution(str1));
        System.out.println(s.solution((str2)));
        System.out.println(s.solution((str3)));
    }
}
