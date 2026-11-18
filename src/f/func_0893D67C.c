#include "common.h"

char *func_088229BC(char *, s32);
s32 func_0893D444(char *, s32);

char *func_0893D67C(char *arg0) {
    char *p;
    char *end;

    end = func_088229BC(arg0, 0);
    for (p = end; p >= arg0; p--) {
        if (*p == 0x5C && func_0893D444(arg0, p - arg0) == 0) {
            return end;
        }
        if (*p == 0x2E) {
            return p + 1;
        }
    }
    return end;
}
