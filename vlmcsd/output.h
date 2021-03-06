#ifndef INCLUDED_OUTPUT_H
#define INCLUDED_OUTPUT_H

#ifndef CONFIG
#define CONFIG "config.h"
#endif // CONFIG
#include CONFIG

#include "kms.h"

typedef int (*PRINTFUNC)(const char *const fmt, ...);

void printerrorf(const char *const fmt, ...);
int errorout(const char* fmt, ...);
void logRequestVerbose(const REQUEST *const Request, const PRINTFUNC p);
void logResponseVerbose(const char *const ePID, const BYTE *const hwid, const RESPONSE *const response, const PRINTFUNC p);

#ifndef NO_LOG
int logger(const char *const fmt, ...);
#endif //NO_LOG

void uuid2StringLE(const GUID *const guid, char *const string);

//void copy_arguments(int argc, char **argv, char ***new_argv);
//void destroy_arguments(int argc, char **argv);

#endif // INCLUDED_OUTPUT_H
