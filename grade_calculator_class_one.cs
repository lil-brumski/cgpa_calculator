using System;
using System.Runtime.InteropServices;

namespace Grade_Calculator{
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
        Console.WriteLine($"\nMTH101: {mth101}\nRSU-GET103: {rsu_get103}\nPHY101: {phy101}\nPHY107: {phy107}\nCHM101: {chm101}\nCHM107: {chm107}\nGST111: {gst111}\nGET101: {get101}\nCPE111: {cpe111}");
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
        Console.WriteLine($"\nFirst Semester GPA: {gpa}");
    }
 }
}