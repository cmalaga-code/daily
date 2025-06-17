package main;

import main.car.Car;

public class Main {
    public static void main(String[] args) {
        Car myCar = new Car("Hyundai", 2200);
        System.out.println(myCar.showDetails());
    }
}