#include "common.h"

extern "C" {

typedef struct {
    s32 unk_00;
    s32 unk_04;
} A_08806860;

typedef struct {
    s8 unk_00;
} C_08806860;

extern u32 func_08822BC4(char *);
void *func_088041FC(u32);
A_08806860 *func_08806860(A_08806860 *arg0, s32 arg1, C_08806860 arg2);
s32 func_08806380(s32 *arg0);
void func_08822B3C(char *, char *);

A_08806860 *func_08806318(A_08806860 *arg0, char *arg1) {


    func_08806860(arg0, (s32)func_088041FC(func_08822BC4(arg1) + 1), C_08806860());
    func_08822B3C((char *)func_08806380(&arg0->unk_00), arg1);
    return arg0;
}

}
