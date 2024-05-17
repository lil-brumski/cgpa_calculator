using System;
using System.Runtime.InteropServices;

public class CPlusPlusToCSharp {
    [DllImport("cpp_to_cs.so")]
    public static extern void Grades();

    static void Main(string[] args) {
        Grades();
    }
}