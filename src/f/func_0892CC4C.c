#include "common.h"

typedef struct {
    u8 *unk_00;
    u8 pad_04[0x73C];
    u8 unk_740;
    u8 pad_741[0x8F];
    u8 unk_7D0;
} T;

extern void func_0880416C(void *);
extern void func_08865F78(void *, s32);
void func_088D4E74(T *, s16);
extern u8 D_08A46FD0[];

T *func_0892CC4C(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_08A46FD0;
        func_08865F78(&arg0->unk_7D0, -1);
        func_08865F78(&arg0->unk_740, -1);
        func_088D4E74(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
