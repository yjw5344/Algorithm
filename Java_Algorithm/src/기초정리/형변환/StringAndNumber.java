package 기초정리.형변환;

public class StringAndNumber {
    public static void main(String[] args) {
        String str = "123";
        int number = 10;

        // String to int : Integer.parseInt(String s);
        System.out.println(Integer.parseInt(str));

        // int to String : Integer.toString(int i)
        System.out.println(Integer.toString(number));
    }
}
