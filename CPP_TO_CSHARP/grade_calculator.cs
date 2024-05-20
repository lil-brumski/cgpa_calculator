using System;
using System.Runtime.InteropServices;
using Grade_Calculator;


class Program
{
    [DllImport("grade_calculator.so", CallingConvention = CallingConvention.Cdecl)]
    public static extern double getInput(string prompt);

    static void Main(string[] args)
    {
        double MTH101 = getInput("Enter your MTH101 score: ");
        while (MTH101 < 0 || MTH101 > 100)
        {
            MTH101 = getInput("Enter your MTH101 score: ");
        }
        MTH101 = Math.Round(MTH101);

        double RSU_GET103 = getInput("Enter your RSU-GET103 score: ");
        while (RSU_GET103 < 0 || RSU_GET103 > 100)
        {
            RSU_GET103 = getInput("Enter your RSU-GET103 score: ");
        }
        RSU_GET103 = Math.Round(RSU_GET103);

        double PHY101 = getInput("Enter your PHY101 score: ");
        while (PHY101 < 0 || PHY101 > 100)
        {
            PHY101 = getInput("Enter your PHY101 score: ");
        }
        PHY101 = Math.Round(PHY101);

        double PHY107 = getInput("Enter your PHY107 score: ");
        while (PHY107 < 0 || PHY107 > 100)
        {
            PHY107 = getInput("Enter your PHY107 score: ");
        }
        PHY107 = Math.Round(PHY107);

        double CHM101 = getInput("Enter your CHM101 score: ");
        while (CHM101 < 0 || CHM101 > 100)
        {
            CHM101 = getInput("Enter your CHM101 score: ");
        }
        CHM101 = Math.Round(CHM101);

        double CHM107 = getInput("Enter your CHM107 score: ");
        while (CHM107 < 0 || CHM107 > 100)
        {
            CHM107 = getInput("Enter your CHM107 score: ");
        }
        CHM107 = Math.Round(CHM107);

        double GST111 = getInput("Enter your GST111 score: ");
        while (GST111 < 0 || GST111 > 100)
        {
            GST111 = getInput("Enter your GST111 score: ");
        }
        GST111 = Math.Round(GST111);

        double GET101 = getInput("Enter your GET101 score: ");
        while (GET101 < 0 || GET101 > 100)
        {
            GET101 = getInput("Enter your GET101 score: ");
        }
        GET101 = Math.Round(GET101);

        double CPE111 = getInput("Enter your CPE111 score: ");
        while (CPE111 < 0 || CPE111 > 100)
        {
            CPE111 = getInput("Enter your CPE111 score: ");
        }
        CPE111 = Math.Round(CPE111);

        Grade grade = new Grade(MTH101, RSU_GET103, PHY101, PHY107, CHM101, CHM107, GST111, GET101, CPE111);
        grade._grade();
        grade._point();
    }
}
