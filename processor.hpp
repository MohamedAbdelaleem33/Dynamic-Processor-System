#include <iostream>
using namespace std;

class Processor
{
public:
    virtual void process() = 0;
    virtual ~Processor() = default;
};

class TextProc : public Processor
{
public:
    void process() override{
        cout << "TextProc" << endl;
    }
};

class ImgProc : public Processor
{
public:
    void process() override{
        cout << "ImgProc" << endl;
    }
};

class NumProc : public Processor
{
public:
    void process() override{
        cout << "NumericProc" << endl;
    }
};

class AudProc : public Processor
{
public:
    void process() override{
        cout << "AudioProc" << endl;
    }
};

class UnProc : public Processor
{
public:
    void process() override{
        cout << "Undefined Processor" << endl;
    }
};