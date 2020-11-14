#ifndef _MYHEADER_H
#define _MYHEADER_H

#include <string>

enum State{
    STATE_OK,
    STATE_FAIL,
    STATE_TIMEOUT
}

struct userData{
    std::string name;
    int age;
}

void test_enum();
#endif