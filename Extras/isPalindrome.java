public class isPalindrome {
    public static boolean main(String s) {
        s = s.replaceAll("[^a-zA-Z0-9]", "");

        s = s.toLowerCase();
        int i = 0, j = s.length()-1;

        while(i<j){
            if (s.charAt(i) != s.charAt(j)){
                return false;
            }
            i++;
            j--;
        }

        return true;
    }
}
