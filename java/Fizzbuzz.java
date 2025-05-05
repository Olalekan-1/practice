// package olalekan;
import olalekan.Evaluate;
public class Fizzbuzz {
    public static void main(String[] args) {
        for (byte i = 1; i <= 100; i++)
        {
            
            if ((i % 15) == 0)
            System.out.print(" FizzBuzz");
            else if ((i % 5) == 0)
                System.out.print(" Buzz");
            else if ((i % 3) == 0)
            System.out.print(" Fizz");
            else
            System.out.print(" " + i);

        }

        System.out.println('\n');

        Evaluate evaluation = new Evaluate();
        int evalutionResult = evaluation.evalauteA();
        System.out.println(evalutionResult);

        System.out.println('\n');

        System.out.println();
    }
}
