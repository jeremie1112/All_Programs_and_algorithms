/*
 * Author: DmitriyShum
 * Date: 10/7/22
 * Title: BMICalculator
 * Desc: This calculator can be used to find your body mass index by using a simple calculation which is:
 *  703 * weight(in LBS)/height(in inches) to the second power.
 */
import java.util.Scanner;
import java.math.*;
public class BMICalc{
    public static float height;//in Inches.
    public static float weight;//in LBS(Pounds).

    public static void main(String[] args){
        Scanner info = new Scanner(System.in);
        System.out.print("Please enter your height in inches :  ");
        height = info.nextFloat();
        System.out.print("Please enter your weight in pounds(lbs) : ");
        weight = info.nextFloat();
        //Output calculation.
        System.out.println("Your BMI(Body Mass Index) is " + 703 * weight/Math.pow(height, 2) + ".");

        //close scanner
        info.close();
    }
}
