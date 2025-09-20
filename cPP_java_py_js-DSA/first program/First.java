
import java.util.Scanner;// library for taking the user input 

public class First {
  // function find nth fibonacci number
  public static int fibonacci(int n) {
    // base case
    if (n <= 1) {
      return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
  }

  // function to find the factorial of a number
  public static int factorial(int n) {
    // base case
    if (n <= 1) {
      return 1;
    }
    return n * factorial(n - 1);
  }

  // function to count vowel consonants and white space character
  public static void countVowelConsonant(String s) {
    int n = s.length();
    int vowel = 0, consonants = 0, whiteSpace = 0;
    for (int i = 0; i < n; i++) {
      char ch = s.charAt(i);
      if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I'
          || ch == 'O' || ch == 'U') {
        vowel++;
      } else if (ch == ' ') {
        whiteSpace++;
      } else {
        consonants++;
      }
    }
    System.out.println("Vowels : " + vowel);
    System.out.println("Consonant : " + consonants);
    System.out.println("white space characters : " + whiteSpace);
  }

  // function for reversing a string
  public static String stringReverse(String s, int n) {
    // strings are immutable in java

    char[] charArray = s.toCharArray();
    int left = 0;
    int right = charArray.length - 1;

    while (left < right) {
      // Swap characters at left and right indices
      char temp = charArray[left];
      charArray[left] = charArray[right];
      charArray[right] = temp;

      // Move pointers towards the center
      left++;
      right--;
    }

    return new String(charArray);
  }

  // function for finding the minimum and maximum element in the array
  public static int[] minMax(int[] arr, int n) {
    // no inbuilt pair exist in the java
    int[] ans = new int[2];
    int mini = Integer.MAX_VALUE;
    int maxi = Integer.MIN_VALUE;
    for (int i = 0; i < n; i++) {
      int value = arr[i];
      if (value > maxi)
        maxi = value;
      if (value < mini)
        mini = value;
    }
    ans[0] = maxi;
    ans[1] = mini;
    return ans;

  }

  // Non returning function
  public static void greet() {
    System.out.println("\nGood Morning Mitrron \n");
  }

  // Returning function with parameters
  public static double add(int a, double b) {
    return (10 + 201.121);
  }

  public static void main(String[] args) {
    System.out.println("Hello World");
    // printnig
    System.out.println("\nLearning the basics of Java");

    // data type in java
    int a;
    float b;
    double c;
    char d;
    boolean e;

    // printing variable without intialization is not allowed
    a = 10;
    b = 10.1f;
    c = 131093190.310310;
    d = 'E';
    e = true;
    System.out.println(e);
    System.out.println(b);

    /* User Input in Java */
    // Important scanner class for taking : create object of it and take input from
    // the user
    System.out.println("Enter values: ");
    Scanner sc = new Scanner(System.in);
    a = sc.nextInt();
    // b = sc.nextFloat();
    // c = sc.nextDouble();
    // d = sc.next().charAt(0);
    // e=sc.nextBoolean();

    System.out.println("Printing the values after user input ");
    System.out.println(a);
    System.out.println(b);
    System.out.println(c);
    System.out.println(d);
    System.out.println(e);

    /* FUNCTION DECLARATION AND PARAMETER PASSING */

    // function calling
    greet();

    // IF-ELSE STATEMENT
    if (a >= 18) {
      System.out.println("Your are Adult ");
    } else {
      System.out.println("Your are a Minor");
    }

    /* LOOPS CONCEPT */

    // for loops

    System.out.println("Table of 2");
    for (int i = 1; i <= 10; i++) {
      System.out.println(2 * i);

    }
    // while loop
    int i = 2;
    System.out.println("even NO");
    while (i <= 10) {

      System.out.println(i);
      i += 2;
    }

    // do while
    do {
      System.out.println("TAsk done ");
    } while (false);

    /* ARRAY DECLARATION IN JAVA */
    int[] arr = { 2, 4, 5, 10, 12 };

    // size finding of array
    int n = arr.length;

    // we can use + operator for concatenating string and int
    // maximum minimum element in the array
    int[] ans = minMax(arr, n);
    System.out.println("Maximum element in the array is : " + ans[0]);
    System.out.println("Minimum element in the array is : " + ans[1]);

    /* STRING CONCEPT */
    String str = "Yash Munde";
    System.out.println(str);
    // size finding
    int N = str.length();
    System.out.println("Size of the string is : " + N);

    // passing string as function paramter
    String rev = stringReverse(str, N);
    System.out.println(rev);
    countVowelConsonant(str);

    /* RECURSION CONCEPT */
    System.out.println("The factorial value is : " + factorial(5));

    // Printing fibonacci series
    for (i = 0; i < 5; i++) {
      System.out.println(fibonacci(i));
    }
  }
};
