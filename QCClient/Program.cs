using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using QUICKCOMPRESSLib; // Add reference after registering

namespace QCClient
{
    internal class Program
    {
        static void Main(string[] args)
        {
            var RLE = new RunLength();
            string str = "Hello World";
            str.ToCharArray();
            string strRLE = string.Empty;
            uint nbytes = 0;
            byte[] bytes = Encoding.UTF8.GetBytes(str);
            RLE.Encode(ref bytes, str.Length, ref bytes, ref nbytes);
            Console.WriteLine(strRLE);
            //RLE.Decode(strRLE, ref str);
            //Console.WriteLine(str);
        }
    }
}
