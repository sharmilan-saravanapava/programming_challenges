package String_Reverser;

public class StringReverser {
    public static String reverser(String str){
        String reversed = "";
        for(int i=str.length()-1; i>=0; i--){
            reversed += str.charAt(i);
        }
        return reversed;
    }
}
