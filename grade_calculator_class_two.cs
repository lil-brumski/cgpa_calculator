using System;
using System.Runtime.InteropServices;

namespace Grade_Calculator_two{
    class Grade_two
{    
    [DllImport("grade_point.so", CallingConvention = CallingConvention.Cdecl)]
    public static extern int POINT(char grade, int course_unit);

    private double MTH102 = 0;
    private double RSU_GET104 = 0;
    private double PHY102 = 0;
    private double PHY108 = 0;
    private double CHM102 = 0;
    private double CHM108 = 0;
    private double GST112 = 0;
    private double GET102 = 0;
    private double RSU_GET112 = 0;

    public Grade_two(double m, double r, double p, double p1, double c, double c1, double g, double gt, double rg)
    {
        this.MTH102 = m;
        this.RSU_GET104 = r;
        this.PHY102 = p;
        this.PHY108 = p1;
        this.CHM102 = c;
        this.CHM108 = c1;
        this.GST112 = g;
        this.GET102 = gt;
        this.RSU_GET112 = rg;
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
        char mth102 = grade(MTH102);
        char rsu_get104 = grade(RSU_GET104);
        char phy102 = grade(PHY102);
        char phy108 = grade(PHY108);
        char chm102 = grade(CHM102);
        char chm108 = grade(CHM108);
        char gst112 = grade(GST112);
        char get102 = grade(GET102);
        char rsu_get112 = grade(RSU_GET112);
        Console.WriteLine($"\nMTH102: {mth102}\nRSU-GET104: {rsu_get104}\nPHY102: {phy102}\nPHY108: {phy108}\nCHM102: {chm102}\nCHM108: {chm108}\nGST112: {gst112}\nGET102: {get102}\nRSU-GET112: {rsu_get112}");
    }

    public void _point()
    {
        double mth102GP = POINT(grade(MTH102), 2);
        double rsu_get104GP = POINT(grade(RSU_GET104), 2);
        double phy102GP = POINT(grade(PHY102), 2);
        double phy108GP = POINT(grade(PHY108), 1);
        double chm102GP = POINT(grade(CHM102), 2);
        double chm108GP = POINT(grade(CHM108), 1);
        double gst112GP = POINT(grade(GST112), 2);
        double get102GP = POINT(grade(GET102), 3);
        double rsu_get112GP = POINT(grade(RSU_GET112), 3);

        double total_cu = 18;
        double GPA = 0.00;
        GPA = (mth102GP + rsu_get104GP + phy102GP + phy108GP + chm102GP + chm108GP + gst112GP + get102GP + rsu_get112GP) / total_cu;
        string gpa = GPA.ToString("0.00");
        Console.WriteLine($"\nSecond Semester Semester GPA: {gpa}");
    }
 }
}