package edu.ufp.inf.aed2.ST;

public class AED2_Aula2_BST {
    public static void main(String[] args) {
        client_ST();

    }

    private static void client_ST(){
        BST_AED2 <Integer, Integer> st = new BST_AED2<>();
        int[] keys = {28,16,63,12,18,37,76,34,93,84,98};
        for (int i = 0; i < keys.length; i++){
            st.put(keys[i], i+1);
        }
        System.out.println("Level Order:");
        for (Integer key: st.levelOrder())
            System.out.print(key + " ");
        System.out.println("In the order:");
        for(Integer key: st.preOrder()){
            System.out.print(key + " ");
        }
        //preOrder
        //inOrder
        //System.out.println("Leaf count: " + st.leafcount());
    }
}

