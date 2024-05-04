public class Evaluate {

    int a = 21;
    double q = 3.5;
    int b = 25;
    int c = 3;

    public static void main(String[] args) {

        Evaluate evaluate_A= new Evaluate();
        evaluate_A.evalauteA();
        Evaluate evaluate_B = new Evaluate();
        evaluate_B.evaluateB();
        Evaluate evaluate_C = new Evaluate();
        evaluate_C.evaluateC();
    }
    void evalauteA() {
        a++;
        b += a;
        System.out.println(b);
    }

    void evaluateB(){
        b--;
        b %= c;
        System.out.println(b);
    }
    void evaluateC() {
        double a = q + b;
        a -= 10;
        System.out.println(a);
        
    }

}
