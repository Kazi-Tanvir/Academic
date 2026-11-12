public class aoPrintf {
    public static void main(String[] args) {
        // %[flags][width][.precision][specifier=character]
        System.out.printf("This is an precision : %.2f\n", 42.43);
        System.out.printf("This is an width : %10d\n", 42);
        System.out.printf("This is an width and precision : %10.2f\n", 42.43);
        System.out.printf("This is an flag : %+.2f\n", 42.43);
    }
}
