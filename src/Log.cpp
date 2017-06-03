//
// Created by mz on 03/06/17.
//

#include <iostream>
#include "../include/Log.h"

ofstream Log::outFile;

void Log::write(const string &data) {
    Log::outFile << data << endl;
//    cout << data << endl;
}

void Log::open() {
    Log::outFile = ofstream(LOG_FILE_NAME);
}

void Log::close() {
    Log::outFile.close();
}
