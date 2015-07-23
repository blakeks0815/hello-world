using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

using System.IO;

namespace Hello_World {
    class Program {
        static void Main(string[] args) {

            Program program = new Program();
            program.mainProgram();

            Console.WriteLine("Finish");
            Console.ReadLine();
        }

        public void mainProgram() {

            string path = @"testFiles\test.dat";

            StreamReader reader = new StreamReader(path);
            string result = reader.ReadToEnd();
            Console.WriteLine("Result: " + result);
        }
    }
}
