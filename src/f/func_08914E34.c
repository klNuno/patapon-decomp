#include "common.h"

typedef struct {
    u8 pad_00[0x868];
    u8 unk_868[0x10];
    u8 unk_878[0x10];
    u8 unk_888[0x10];
} T;

void func_089148E8(void *);
void func_089C69CC(void *, s16);
void func_08915750(void *, s16);
void func_08915668(void *, s16);
void func_08913F9C(void *, s32);
void func_0880416C(void *);

T *func_08914E34(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        func_089148E8(arg0);
        func_089C69CC(arg0->unk_888, -1);
        func_08915750(arg0->unk_878, -1);
        func_08915668(arg0->unk_868, -1);
        func_08913F9C(arg0, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
