import java.util.ArrayList;

public class Biblioteca {
    public static void main(String[] args) {
        ArrayList<Livro> estante = new ArrayList<>();

        Livro livro1 = new Livro("O Senhor dos Anéis", "J.R.R. Tolkien", 1954);
        Livro livro2 = new Livro("Neuromancer", "William Gibson", 1984);
        Livro livro3 = new Livro("Duna", "Frank Herbert", 1965);

        estante.add(livro1);
        estante.add(livro2);
        estante.add(livro3);

        System.out.println("Livros na estante:");
        for (Livro livro_na_estante : estante) {
            System.out.println( "- " + livro_na_estante);
        }
    }
}
