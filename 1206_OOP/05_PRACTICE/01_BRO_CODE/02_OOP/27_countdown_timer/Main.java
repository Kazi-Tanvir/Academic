import java.util.Scanner;
import java.util.Timer;
import java.util.TimerTask;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Timer timer = new Timer();
        TimerTask timerTask = new TimerTask() {

            int count  = scanner.nextInt();

            @Override 
            public void run(){
                System.out.println("Hello!");
                count--;
                if (count <= 0) {
                    System.out.println("TASK COMPLETE!");
                    timer.cancel();
                }
            }
        };
        timer.schedule(timerTask, 0,1000);
    }
    
}
