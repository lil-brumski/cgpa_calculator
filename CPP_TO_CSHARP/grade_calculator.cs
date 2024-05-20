using System;
using System.Runtime.InteropServices;
using Grade_Calculator;
using Grade_Calculator_two;


class Program
{
    [DllImport("grade_calculator.so", CallingConvention = CallingConvention.Cdecl)]
    public static extern double getInput(string prompt);

    static void Main(string[] args)
    {
        Console.WriteLine("FIRST SEMESTER:\n");
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
        
        
        //BRIDGE
        
        string user;
        while(true){
            Console.WriteLine("\nContinue to second semester or end program? Enter \'sec\' or \'end\'");
        user = Console.ReadLine();
        user = user.ToLower();
        if(user == "sec"){
            break;
          }
        else if(user == "end"){
            Environment.Exit(0);
          }
        else{
            Console.WriteLine("Didn\'t get that, try again.");
          }
        }
        
        
        
        
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
