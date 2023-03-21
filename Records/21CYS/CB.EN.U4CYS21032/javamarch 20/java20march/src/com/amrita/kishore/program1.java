package com.amrita.kishore;

import java.util.*;
public class program1 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter 1st number: ");
        int a=sc.nextInt();
        if(a>=0){
            System.out.println("Enter 2nd number: ");
            int b=sc.nextInt();
            if(b>=0){
                System.out.println("Enter the required operation: ");
                String c=sc.next();
                if(c.equals("+")){
                    int t=a+b;
                    System.out.println("Sum of the given two numbers: "+t);
                }
                else if(c.equals("-")){
                    int t=a-b;
                    System.out.println("Difference of the two numbers: "+t);
                }
                else if(c.equals("*")){
                    int t=a*b;
                    System.out.println("Product of the two numbers: "+t);
                }
                else if(c.equals("/")){
                    int t=a/b;
                    System.out.println("Divisor of the number: "+t);
                }
                else{
                    System.out.println("Enter operator symbol");
                }
            }else{
                System.out.println("Enter the number");
            }
        }else{
            System.out.println("Enter the number");
        }
    }
}