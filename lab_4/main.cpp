#include "CSVParser.h"
//#include "Tuple.h"
using namespace std;

int main(int argc, char* argv[])
{
    ifstream a("input.txt");

    CSVParser<string, double> parser(a, 0/*skip first lines count*/);
    //parser.setDelimiters('\"', ';', '/');

    for (tuple<string, int> el : parser)  /// ����������� � *
   // tuple<string, double, int> el("asd", 1.3, 5);
    //tuple<> el;
    //tuple<string> el("asd");
        cout << el << endl;

    return 0;
}