package edu.ufp.inf.aed2.ST;

import edu.princeton.cs.algs4.BinarySearchST;
import edu.princeton.cs.algs4.In;
import edu.princeton.cs.algs4.SequentialSearchST;

/**
 * @author argomes
 */
public class AED2_Aula1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        System.out.println("AED2 - Aula 1");

        //exemplo1_ficheiros(".//data//30ints.txt");
       // ficha1_exercicio3();
        //ficha1_exercicio6();
        clientST_frequency_counter(2, ".//data//large.txt");

    }

    /**
     * Faz a leitura de um ficheiro de texto, soma todos os valores e imprime a média
     *
     * @param path o caminho (relativo) para o ficheiro a abrir
     */
    private static void exemplo1_ficheiros(String path) {
        In in = new In(path); // abertura do ficheiro/stream de entrada
        String linha;
        int contar = 0, soma = 0, valor;
        double media;
        while (in.hasNextLine()) { // Enquanto existe próxima linha no ficheiro
            linha = in.readLine(); // Lê o conteúdo da linha (String)
            System.out.println(linha);
            contar++;
            valor = Integer.valueOf(linha); // Obtém o valor inteiro lido (conversão de String para int)
            soma = soma + valor;
        }
        media = (double) soma / contar;
        System.out.println("Media = " + media);
    }


    /**
     * Ficha 1 ex. 3
     * Inserção das chaves E A S Y Q U E S T I O N numa tabela de símbolos não ordenada,
     * usando a classe SequentialSearchST
     * Imprimir conteúdo da ST
     */
    private static void ficha1_exercicio3() {
        SequentialSearchST<String, Integer> st = new SequentialSearchST<>();
        st.put("E", 1);
        st.put("A", 2);
        st.put("S", 3);
        st.put("Y", 4);
        st.put("Q", 5);
        st.put("U", 6);
        st.put("E", 7);
        st.put("S", 8);
        st.put("T", 9);
        st.put("I", 10);
        st.put("O", 11);
        st.put("N", 12);
        for (String key: st.keys()) {
            System.out.println("(" + key + ", " + st.get(key) + ")");
        }
    }

    /**
     * Inserção das chaves E A S Y Q U E S T I O N numa tabela de símbolos ordenada,
     * usando a classe BinarySearchST
     * Imprimir conteúdo da ST.
     * 6.1. Calcular: rank(“B”), rank(“S”), rank(“U”)
     * 6.2. Calcular qual a chave menor e a chave maior
     * 6.3. Extrair todas as chaves compreendidas entre “B” e “P”
     */
    private static void ficha1_exercicio6() {
        BinarySearchST<String, Integer> st = new BinarySearchST<>();
        st.put("E", 1);
        st.put("A", 2);
        st.put("S", 3);
        st.put("Y", 4);
        st.put("Q", 5);
        st.put("U", 6);
        st.put("E", 7);
        st.put("S", 8);
        st.put("T", 9);
        st.put("I", 10);
        st.put("O", 11);
        st.put("N", 12);
        int val = st.get("E"), r;      //O metódo Get vai percorrer a minha ST e vai retornar o valor da chava pedida
        System.out.println("Value of E: " + val);
        for (String key: st.keys()) {
            System.out.println("(" + key + ", " + st.get(key) + ")");
        }
        r = st.rank("B");
        System.out.println("Rank of: " + r);
        System.out.println("Minimo: " + st.min() + "-" + st.get(st.min()));
        System.out.println("Maximo: " + st.max() + "-" + st.get(st.max()));
        String key_lo = "B", key_hi = "P";
        System.out.println("Keys between " + key_lo + " and " + key_hi + ":");
        for (String key: st.keys(key_lo, key_hi))
        {
            System.out.println("(" + key + ", " + st.get(key) + ")");
        }
    }

    /**
     * Faz a leitura de um ficheiro de texto, e conta o número de vezes que cada palavra com tamanho minimo @code minlen e
     * o número de palavras distintas que surgem no ficheiro.
     * Imprime:
     * - A palavra que surge mais vezes
     * - O número de palavras distintas
     * - O número de palavras total
     * - O número de vezes que surge a palavra "tabela"
     * @param minlen o tamanho minimo das palavras a considerar
     * @param path o caminho (relativo) para o ficheiro a abrir
     */
    private static void clientST_frequency_counter(int minlen, String path) {
        BinarySearchST<String, Integer> st = new BinarySearchST<>();
        In in = new In(path); // abertura do ficheiro/stream de entrada
        int words = 0, distinct = 0;
        while (!in.isEmpty())
        {
            String key = in.readString();
            if ( key.length() < minlen) continue;
            words++;
            if (!st.contains(key))
            {
                st.put(key, 1);
                distinct++;
            }
            else
            {
                st.put(key,st.get(key) +1);
            }
        }
        String max = st.min();
        for ( String word: st.keys())
        {
            if (st.get(word) > st.get(max))
            {
                max = word;
            }
        }
    System.out.println("Max: "+max+ "-" + st.get(max));
    //FALTA: Numero palavras total = 795
    //Numero palavras distintas = 234
    //Numero de ocorrencia palavra "tabela" =10
    }


}
