//
// Created by mz on 03/06/17.
//

#ifndef RPG_LOG_H
#define RPG_LOG_H

#include <fstream>
#include <vector>

using namespace std;

const static string LOG_FILE_NAME = "log.log";

class Log {

private:
    static ofstream outFile;

public:;

    const static bool ON = true;

    static void open();

    static void write(const string &data);

    static void close();
};


#endif //RPG_LOG_H
