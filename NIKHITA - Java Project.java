import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        String movieName = "Avengers Endgame";
        String showTime = "7:00 PM";

        int[][] seats = new int[4][4];
        int totalCost = 0;

        System.out.println("===== MOVIE TICKET BOOKING SYSTEM =====");
        System.out.println("Movie Name : " + movieName);
        System.out.println("Show Time : " + showTime);

        System.out.println("\nSeat Layout");
        for(int i=0;i<4;i++) {
            for(int j=0;j<4;j++) {
                System.out.print("O ");
            }
            System.out.println();
        }

        System.out.print("\nHow many seats do you want to book? ");
        int n = sc.nextInt();

        for(int k=1;k<=n;k++) {

            System.out.println("\nBooking Seat " + k);

            System.out.print("Enter Row (0-3): ");
            int row = sc.nextInt();

            System.out.print("Enter Column (0-3): ");
            int col = sc.nextInt();

            if(row<0 || row>3 || col<0 || col>3) {
                System.out.println("Invalid Seat!");
                continue;
            }

            if(seats[row][col]==1) {
                System.out.println("Seat Already Booked!");
            }
            else {
                seats[row][col]=1;
                totalCost = totalCost + 200;
                System.out.println("Seat Booked Successfully!");
            }
        }

        System.out.println("\nUpdated Seat Layout");

        for(int i=0;i<4;i++) {
            for(int j=0;j<4;j++) {

                if(seats[i][j]==1)
                    System.out.print("X ");
                else
                    System.out.print("O ");
            }
            System.out.println();
        }

        System.out.println("\n===== BOOKING CONFIRMATION =====");
        System.out.println("Movie : " + movieName);
        System.out.println("Show Time : " + showTime);
        System.out.println("Total Cost : ₹" + totalCost);
        System.out.println("Booking Confirmed!");

        sc.close();
    }
}