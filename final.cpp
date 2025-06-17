#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <map>
#include <exception>
#include <vector>
#include "processorfactory.hpp"
using namespace std;

int main (){
    try{
    ifstream input("settings.txt");
   if(!input.is_open()){
    throw runtime_error("Error in opening file, Try again");
   }
    string line,type;
    map <string,string> parse;
    int point;
    while (getline(input,line))
    {
        point = line.find("=");
        string key = line.substr(0, point);
        string value = line.substr(point + 1);
        parse[key] = value;
    }
    for(auto [key,value] : parse)
    {
        if (key == "Processor.Options.Type"){
            ProcessorFactory factory;
            Processor *proc = factory.createProcessor(value);
            proc -> process();
            }    
    }
    }
    catch(const runtime_error &e){
        cerr << e.what() << endl;
    }
    return 0;
}