package main.car;

public class Car {
    private String model;
    private double weight;

    public Car(String model, double weight) {
        this.model = model;
        this.weight = weight;
    }
    public String showDetails() {
        return this.model + " " + this.weight;
    }
}