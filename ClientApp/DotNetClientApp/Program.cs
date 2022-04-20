using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using TMathLib;

namespace DotNetClientApp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            TMCalculator calc = new TMCalculator();
            Console.WriteLine("a + b = " + calc.Sum(50, 60));

            Console.ReadKey();
        }
    }
}
