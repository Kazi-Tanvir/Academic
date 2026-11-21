import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;

public class Main {
    public static void main(String[] args) {
        LocalDateTime dateTime = LocalDateTime.now();
        System.out.println(dateTime);

        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("dd/MM/yyyy HH:ss::mm");
        String newDateTime = dateTime.format(formatter);

        System.out.println(newDateTime);

        LocalDateTime date = LocalDateTime.of(2026 , 12 , 25, 12 , 0 ,0);
        LocalDateTime equalDate = LocalDateTime.of(2026 , 12 , 25, 12 , 0 ,0);
        LocalDateTime afterDate = LocalDateTime.of(2027 , 12 , 25, 12 , 0 ,0);
        LocalDateTime beforeDate = LocalDateTime.of(2025 , 12 , 25, 12 , 0 ,0);

        System.out.println(date.isEqual(equalDate));
        System.out.println(date.isAfter(afterDate));
        System.out.println(date.isBefore(beforeDate));

    }
    

} 
