import java.util.Scanner;

public class Hello {
    public static void main(String[] args) {

        final float PERCENT_MONTH = 12;
        double mortgage, principal, rate;
        int year;

        System.out.print("Principal: ");
        Scanner principalValue = new Scanner(System.in);
        principal = principalValue.nextInt();


        System.out.print("Annual interest rate: ");
        Scanner rateValue = new Scanner(System.in);
        rate = rateValue.nextFloat();


        System.out.print("Period (years): ");
        Scanner yearValue = new Scanner(System.in);
        year = yearValue.nextInt();

        float monthlyInterest = (float) rate / 100 / 12;
        int months = year * 12;
        mortgage = principal * (( monthlyInterest * Math.pow(( 1 + monthlyInterest), months)) /  Math.pow(( 1 +monthlyInterest), months) - 1);

        System.out.print("mortgage: " + mortgage);


    }
}