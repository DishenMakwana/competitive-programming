import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;

public class Demo {

    public static void main(String[] args) {
        String filePath = "a.txt";

        String contents = null;
        try {
            contents = new String(Files.readAllBytes(Paths.get(filePath)));
        } catch (IOException e) {
            e.printStackTrace();
        }
        System.out.println("##### Before split");
        System.out.println(contents);

        System.out.println("##### split string by new line");
        String[] lines = contents.split("\n");
        for (String line : lines) {
            System.out.println(line);
        }

        System.out.println("##### Split string by multiple spaces");
        String[] fruits = contents.split("\\s+");
        for(String fruit : fruits) {
            System.out.println(fruit);
        }
    }
}