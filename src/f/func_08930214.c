#include "common.h"

void func_0880416C(void *);
void func_08865F78(void *, s32);
void func_08866028(void *);
void func_089302A4(void *);

typedef struct {
    u8 pad_00[0x90];
} E_08930214;

extern E_08930214 D_08AD8E30[];

void *func_08930214(void *arg0, s16 arg1) {
    s32 i;

    if (arg0 != NULL) {
        func_089302A4(arg0);
        for (i = 0; i < 6; i++) {
            func_08866028(&D_08AD8E30[i]);
        }
        func_08865F78(arg0, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
