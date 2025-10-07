#include <stdio.h>
#include <time.h>
#define LOG(msg) { \
    time_t t = time(NULL); \
    struct tm *lt = localtime(&t); \
    printf("[%s:%d %02d:%02d:%02d]: %s\n", __FILE__, __LINE__, lt->tm_hour, lt->tm_min, lt->tm_sec, msg); \
}