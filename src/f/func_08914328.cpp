#include "common.h"

extern "C" {
typedef struct S S;
typedef struct T T;
typedef struct Sub Sub;

void func_08914808(S *, s32, Sub *);
void func_08914B28(T *arg0);
void func_089143E0(T *);
void func_089143F4(T *);
void func_0881F5C0(void *, s32, s32);

void func_08914328(T *arg0, s32 arg1) {
    u8 *temp = (u8 *)arg0 + 0x1C;
    func_08914808((S *)arg0, arg1, (Sub *)temp);
    func_08914B28(arg0);
    func_089143E0(arg0);
    func_0881F5C0(temp + 0x80, 0, 0x504);
    func_089143F4(arg0);
}
}
