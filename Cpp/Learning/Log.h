//#pragma once
#ifndef _LOG_H
#define _LOG_H

void Log(std::string message);
void InitLog(std::string message);

class MyLogger{
    public:
        MyLogger(std::string example_data);
        MyLogger(const MyLogger&);
        ~MyLogger();
        void get_data();
    private:
        int msgs_logged;

};

#endif