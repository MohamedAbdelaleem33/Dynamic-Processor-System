#include <iostream>
#include "processor.hpp"
using namespace std;


class ProcessorFactory
{
public:
    Processor *createProcessor(const string &x){
        if (x == "Text"){
        return new TextProc();
        }
        else if(x == "Image"){
        return new ImgProc();
        }
        else if (x == "Numeric") {
        return new NumProc();
        } 
        else if (x == "Audio") {
        return new AudProc();
        }
        else return new UnProc(); 
    }
};