using System;
using System.Runtime.InteropServices;

class Grade
{
    [DllImport("grade_point.so", CallingConvention = CallingConvention.Cdecl)]
    public static extern int POINT(char grade, int course_unit);

    private double MTH101 = 0;
    private double RSU_GET103 = 0;
    private double PHY101 = 0;
    private double PHY107 = 0;
    private double CHM101 = 0;
    private double CHM107 = 0;
    private double GST111 = 0;
    private double GET101 = 0;
    private double CPE111 = 0;

    public Grade(double m, double r, double p, double p1, double c, double c1, double g, double gt, double cp)
    {
        this.MTH101 = m;
        this.RSU_GET103 = r;
        this.PHY101 = p;
        this.PHY107 = p1;
        this.CHM101 = c;
        this.CHM107 = c1;
        this.GST111 = g;
        this.GET101 = gt;
        this.CPE111 = cp;
    }

    public char grade(double score)
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
        char rsu_get103 = grade(RSU_GET103);
        char phy101 = grade(PHY101);
        char phy107 = grade(PHY107);
        char chm101 = grade(CHM101);
        char chm107 = grade(CHM107);
        char gst111 = grade(GST111);
        char get101 = grade(GET101);
        char cpe111 = grade(CPE111);
        Console.WriteLine($"MTH101: {mth101}\nRSU-GET103: {rsu_get103}\nPHY101: {phy101}\nPHY107: {phy107}\nCHM101: {chm101}\nCHM107: {chm107}\nGST111: {gst111}\nGET101: {get101}\nCPE111: {cpe111}");
    }

    public void _point()
    {
        double mth101GP = POINT(grade(MTH101), 2);
        double rsu_get103GP = POINT(grade(RSU_GET103), 2);
        double phy101GP = POINT(grade(PHY101), 2);
        double phy107GP = POINT(grade(PHY107), 1);
        double chm101GP = POINT(grade(CHM101), 2);
        double chm107GP = POINT(grade(CHM107), 1);
        double gst111GP = POINT(grade(GST111), 2);
        double get101GP = POINT(grade(GET101), 1);
        double cpe111GP = POINT(grade(CPE111), 2);

        double total_cu = 15;
        double GPA = 0.00;
        GPA = (mth101GP + rsu_get103GP + phy101GP + phy107GP + chm101GP + chm107GP + gst111GP + get101GP + cpe111GP) / total_cu;
        string gpa = GPA.ToString("0.00");
        Console.WriteLine($"First Semester GPA: {gpa}");
    }
}

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
