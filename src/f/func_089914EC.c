#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0x14];
    void *unk_18;
} M_089914EC;

void func_0899159C(void *);
void func_0888D040(void *, s32);
void func_08944270(void *, s32);
void func_0893F388(void *, s32);
void func_0880416C(void *);
extern u8 D_08A48420[];
extern u8 D_08A48438[];

u8 *func_089914EC(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        func_0899159C(arg0);
        if ((M_089914EC *)(arg0 + 0x20) != NULL) {
            ((M_089914EC *)(arg0 + 0x20))->unk_00 = D_08A48420;
            ((M_089914EC *)(arg0 + 0x20))->unk_18 = D_08A48438;
            func_0888D040(arg0 + 0x404, -1);
            func_0888D040(arg0 + 0x3F4, -1);
            func_0888D040(arg0 + 0x3E4, -1);
            func_08944270(arg0 + 0x20, 0);
        }
        func_0893F388(arg0 + 4, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
