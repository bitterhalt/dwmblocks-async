#include "config.h"
#include "block.h"
#include "util.h"

Block blocks[] = {    /*int*/  /*sign*/
    {"sb-updates",      3600,   1},
    {"sb-cpu",          2,      2},
    {"sb-memory",       2,      3},
    {"sb-network",      5,      4},
    {"sb-dunst",        0,      8},
    {"sb-lock",         0,      9},
    {"sb-mic",          0,      7},
    {"sb-volume",       60,     5},
    {"sb-date",         60,     6},
};

const unsigned short blockCount = LEN(blocks);
