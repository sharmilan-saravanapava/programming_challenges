package FactorialCalculator;

import java.util.Scanner;

public class App {
    public static void main(String[] args){
        System.out.println("Enter number to get factorial of:");
        int num = new Scanner(System.in).nextInt();
        System.out.println(Factorial.factorial(num));
    }
}
