package CodingTest.KakaoPay;

class Solution1{
    public int solution(String phone_number) {
        if(phone_number.substring(0,7).equals("+82-10-")){
            if(phone_number.substring(7).length() == 9){
                return 3;
            }else{
                return -1;
            }
        }else if( phone_number.substring(0,3).equals("010")){
            if(phone_number.charAt(3) == '-'){
                if(phone_number.substring(4).length() == 9){
                    return 1;
                }else{
                    return -1;
                }
            }else{
                if(phone_number.substring(3).length() == 8){
                    return 2;
                }else{
                    return -1;
                }
            }
        }else {
            return -1;
        }
    }
}

public class Test_1 {
    public static void main(String[] args) {
        Solution1 solutionClass = new Solution1();
        String phone_number1 = "01012345678";
        String phone_number2 = "010-1212-333";
        String phone_number3 = "010-1212-3333";
        String phone_number4 = "+82-010-3434-2323";
        String phone_number5 = "+82-10-3434-2323";

        System.out.println(solutionClass.solution(phone_number1));
    }
}
