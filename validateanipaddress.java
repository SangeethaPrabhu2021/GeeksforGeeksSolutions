class Solution {

    public boolean isValid(String s) {
        String[] s1 = s.split("\\.");
        if(s1.length != 4) {
            return false;
        }
        java.util.regex.Pattern p = java.util.regex.Pattern.compile("^\\d{0,3}\\.\\d{0,3}\\.\\d{0,3}\\.\\d{0,3}$");
        java.util.regex.Matcher m = p.matcher(s);
        if(!m.find()) {
            return false;
        }
        for(String s2: s1) {
            if(s2.equals("")) {
                return false;
            }
        }
        for(String s2: s1) {
            if(s2.length() != String.valueOf(Integer.valueOf(s2)).length()) {
                return false;
            }
        }
        for(int i = 0; i < 4; i++) {
            if(Integer.valueOf(s1[i]) < 0 || Integer.valueOf(s1[i]) > 255) {
                return false;
            }
        }
        
        return true;
        
    }
}
