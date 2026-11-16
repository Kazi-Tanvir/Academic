import java.util.Scanner;

public class bzQuizGame {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String[] questions = {
                "What is the capital of France?",
                "What is 2 + 2?",
                "What is the largest planet in our solar system?"
        };
        String[][] options = {
                {"A. Paris", "B. London", "C. Berlin", "D. Madrid"},
                {"A. 3", "B. 4", "C. 5", "D. 6"},
                {"A. Earth", "B. Mars", "C. Jupiter", "D. Saturn"}
        };
        char[] answers = {'A', 'B', 'C'};
        int score = 0;
        System.out.println("Welcome to the Quiz Game!");
        for (int i = 0; i < questions.length; i++) {
            System.out.println(questions[i]);
            for (String option : options[i]) {
                System.out.println(option);
            }
            System.out.print("Enter your answer (A, B, C, D): ");
            char guess = scanner.next().charAt(0);
            if (guess == answers[i]) {
                System.out.println("Correct!");
                score++;
            } else {
                System.out.println("Wrong! The correct answer was " + answers[i]);
            }
        }
        System.out.println("Your final score is: " + score);
        scanner.close();
    }
    // JAVA QUIZ GAME
    // QUESTIONS array[]
    //OPTIONS array[][]
    //DECLARE VARIABLES
    //WELCOME MESSAGE
    //QUESTIONS (LOOP)
    //  OPTIONS
    //  GET GUESS FROM USER
    //  CHECK YOUR GUESS
    // DISPLAY FINAL SCORE
}
