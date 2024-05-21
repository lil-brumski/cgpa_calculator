using System;
using System.Runtime.InteropServices;
using Grade_Calculator_two;


class Program
{
    [DllImport("grade_calculator.so", CallingConvention = CallingConvention.Cdecl)]
    public static extern double getInput(string prompt);

    static void Main(string[] args)
    {
//SECOND SEMESTER
        Console.WriteLine("SECOND SEMESTER:\n");
        double MTH102 = getInput("Enter your MTH102 score: ");
        while (MTH102 < 0 || MTH102 > 100)
        {
            MTH102 = getInput("Enter your MTH102 score: ");
        }
        MTH102 = Math.Round(MTH102);

        double RSU_GET104 = getInput("Enter your RSU-GET104 score: ");
        while (RSU_GET104 < 0 || RSU_GET104 > 100)
        {
            RSU_GET104 = getInput("Enter your RSU-GET104 score: ");
        }
        RSU_GET104 = Math.Round(RSU_GET104);

        double PHY102 = getInput("Enter your PHY102 score: ");
        while (PHY102 < 0 || PHY102 > 100)
        {
            PHY102 = getInput("Enter your PHY102 score: ");
        }
        PHY102 = Math.Round(PHY102);

        double PHY108 = getInput("Enter your PHY108 score: ");
        while (PHY108 < 0 || PHY108 > 100)
        {
            PHY108 = getInput("Enter your PHY108 score: ");
        }
        PHY108 = Math.Round(PHY108);

        double CHM102 = getInput("Enter your CHM102 score: ");
        while (CHM102 < 0 || CHM102 > 100)
        {
            CHM102 = getInput("Enter your CHM102 score: ");
        }
        CHM102 = Math.Round(CHM102);

        double CHM108 = getInput("Enter your CHM108 score: ");
        while (CHM108 < 0 || CHM108 > 100)
        {
            CHM108 = getInput("Enter your CHM108 score: ");
        }
        CHM108 = Math.Round(CHM108);

        double GST112 = getInput("Enter your GST112 score: ");
        while (GST112 < 0 || GST112 > 100)
        {
            GST112 = getInput("Enter your GST112 score: ");
        }
        GST112 = Math.Round(GST112);

        double GET102 = getInput("Enter your GET102 score: ");
        while (GET102 < 0 || GET102 > 100)
        {
            GET102 = getInput("Enter your GET102 score: ");
        }
        GET102 = Math.Round(GET102);

        double RSU_GET112 = getInput("Enter your RSU_GET112 score: ");
        while (RSU_GET112 < 0 || RSU_GET112 > 100)
        {
            RSU_GET112 = getInput("Enter your RSU_GET112 score: ");
        }
        RSU_GET112 = Math.Round(RSU_GET112);

        Grade_two grade_two = new Grade_two(MTH102, RSU_GET104, PHY102, PHY108, CHM102, CHM108, GST112, GET102, RSU_GET112);
        grade_two._grade();
        grade_two._point();
        
    }
}