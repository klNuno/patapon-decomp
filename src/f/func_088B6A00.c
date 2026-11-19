#include "common.h"

typedef struct {
    s32 unk_00;
} It;

void func_088B69EC(s32 *arg0, s32 arg1);
void func_088B69F4(s32 *arg0, s32 *arg1);
void func_088B6A74(It *, void *, It, It);
void func_0880416C(void *);

s32 *func_088B6A00(s32 *arg0, s16 arg1)
{
    It temp;
    It temp1;
    It temp2;

    if (arg0 != NULL) {
        func_088B69F4(&temp1.unk_00, arg0);
        func_088B69EC(&temp2.unk_00, (s32)arg0);
        func_088B6A74(&temp, arg0, temp1, temp2);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
