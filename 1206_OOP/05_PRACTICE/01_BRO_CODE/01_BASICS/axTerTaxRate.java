public class axTerTaxRate {
    public static void main(String[] args) {
        double income = 75000; 
        double taxRate = (income >= 50000) ? 0.3 : 0.1;
        System.out.println("The tax rate is: " + (taxRate * 100) + "%");
    }
}
