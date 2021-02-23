//
// Created by Ben on 2/20/21.
//

#ifndef MULTI_GPU_REPORT_H
#define MULTI_GPU_REPORT_H
#include <cstdio>
#include <fstream>

class report{

public:
    static report *instance;
    report();
    std::fstream ben_file;
    static report *get_instance();
    void apply(const char*);
};
#endif //MULTI_GPU_REPORT_H
