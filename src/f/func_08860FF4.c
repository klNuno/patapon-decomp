#include "common.h"

typedef struct {
    s32 unk_00;
} It;

void func_08860FBC(It *, void *);
void func_08860FC4(It *, void *);
void func_08861068(It *, void *, It, It);
void func_0880416C(void *);

void *func_08860FF4(void *arg0, s16 arg1)
{
    It temp;
    It temp1;
    It temp2;

    if (arg0 != NULL) {
        func_08860FC4(&temp1, arg0);
        func_08860FBC(&temp2, arg0);
        func_08861068(&temp, arg0, temp1, temp2);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
