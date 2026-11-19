#include "common.h"

void func_0881F5C0(void *, s32, s32);
extern void func_08914808(char *, s32, char *);
void func_08914B28(char *);
void func_089143E0(char *arg0);
void func_089143F4(char *arg0);

void func_08914384(char *arg0, s32 arg1) {
    char *temp = arg0 + 0x1C;
    func_08914808(arg0, arg1, temp);
    func_08914B28(arg0);
    func_089143E0(arg0);
    func_0881F5C0(temp + 0x80, 0, 0x504);
    func_089143F4(arg0);
}
