#include "common.h"

void func_08913708(char *, s32);
s32 func_08913AE0(char *);
void func_08917E20(char *, s32, s32);
void func_08918548(char *, s32);
void func_0893F518(char *, s32);
char *func_089D529C(char *);

void func_08918294(char *arg0, s32 arg1) {
    func_08917E20(arg0, arg1, 0);
    if (func_08913AE0(arg0 + 0x34E80) != 0) {
        func_08918548(arg0, 5);
        func_0893F518(func_089D529C(arg0 + 0x12160) + 4, 0);
    }
    func_08913708(arg0 + 0x34E80, arg1);
}
