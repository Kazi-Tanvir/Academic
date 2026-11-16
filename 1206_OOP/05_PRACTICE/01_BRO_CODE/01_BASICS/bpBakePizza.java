public class bpBakePizza {
    public static void main(String[] args){
        bakePizza("Thin crust");
        bakePizza("Thick crust", "Pepperoni");
    }

    static void bakePizza(String bread){
        System.out.println(bread + " pizza!");
    }
    static void bakePizza(String bread, String topping){
        System.out.println(bread + " pizza with " + topping + "!");
    }
}
