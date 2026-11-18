#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    void *unk_14;
    u8 pad_18[0x16C];
    u8 unk_184[0x10];
    u8 unk_194[0xEC];
    u8 unk_280[0xEC];
    u8 unk_36C[4];
} S_0895D958;

void func_0880416C(void *);
void func_0895B0E8(void *, s32);
void func_0895B9E8(void *, s32);
void func_0895BBF4(void *, s32);
void func_0895C44C(void *, s32);
void func_0895CCAC(void *, s32);
void func_0895DCC4(void *);
void sceMpegFinish(void);
extern u8 D_08A479F4[];
extern s32 D_08ADAD38[];

S_0895D958 *func_0895D958(S_0895D958 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_14 = D_08A479F4;
        func_0895DCC4(arg0);
        if (--D_08ADAD38[0] == 0) {
            sceMpegFinish();
        }
        func_0895CCAC(arg0->unk_36C, -1);
        func_0895BBF4(arg0->unk_280, -1);
        func_0895C44C(arg0->unk_194, -1);
        func_0895B0E8(arg0->unk_184, -1);
        func_0895B9E8(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
