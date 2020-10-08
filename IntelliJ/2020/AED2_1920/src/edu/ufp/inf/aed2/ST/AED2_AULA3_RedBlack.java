package edu.ufp.inf.aed2.ST;

public class AED2_AULA3_RedBlack {
    public static void main (String[] args) {
        clientRedBlack();
    }
    private static void clientRedBlack() {
        RedBlackBST_AED2 < String, Integer > st = new RedBlackBST_AED2<>();
        String[] keys = {"E","A","S","Y","Q","U","T","I","O","N"};
        for (int i = 0; i < keys.length; i++) {
            st.put(keys[i], i+1);
        }
       System.out.println(st.keys());
        System.out.println("Number of red nodes is: " + st.nodeRedCount());
    }
}
