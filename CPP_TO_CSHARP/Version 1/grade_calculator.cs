using System;
using System.Runtime.InteropServices;

class Grade
{
    private int MTH101 = 0;
    private int PHY101 = 0;
    private int CHM101 = 0;
    private int GST111 = 0;

    public Grade(int m, int p, int c, int g)
    {
        this.MTH101 = m;
        this.PHY101 = p;
        this.CHM101 = c;
        this.GST111 = g;
    }

    public char grade(int score)
    {
        if (score >= 70 && score <= 100)
        {
            return 'A';
        }
        else if (score >= 60 && score <= 69)
        {
            return 'B';
        }
        else if (score >= 50 && score <= 59)
        {
            return 'C';
        }
        else if (score >= 45 && score <= 49)
        {
            return 'D';
        }
        else if (score >= 40 && score <= 44)
        {
            return 'E';
        }
        else if (score >= 0 && score <= 39)
        {
            return 'F';
        }

        return 'X';
    }

    public void _grade()
    {
        char mth101 = grade(MTH101);
        char phy101 = grade(PHY101);
        char chm101 = grade(CHM101);
        char gst111 = grade(GST111);
        Console.WriteLine($"MTH101: {mth101}\nPHY101: {phy101}\nCHM101: {chm101}\nGST111: {gst111}");
    }
}

class Program
{
    [DllImport("grade_calculator.so", CallingConvention = CallingConvention.Cdecl)]
    public static extern int getInput(string prompt);

    static void Main(string[] args)
    {
        int MTH101 = getInput("Enter your MTH101 score: ");
        while(MTH101 < 0 || MTH101 > 100){
             MTH101 = getInput("Enter your MTH101 score: ");
        }
        int PHY101 = getInput("Enter your PHY101 score: ");
        int CHM101 = getInput("Enter your CHM101 score: ");
        int GST111 = getInput("Enter your GST111 score: ");

        Grade grade = new Grade(MTH101, PHY101, CHM101, GST111);
        grade._grade();
    }
}
