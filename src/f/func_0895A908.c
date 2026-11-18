#include "common.h"

typedef struct {
    u8 pad_00[0x8];
    void *unk_08;
    u8 pad_0C[0x1C];
    u8 unk_28[0x24];
    void *unk_4C;
} S0895A908;

void func_0880416C(void *);
void func_08881A78(void *);
void func_08882058(void *, s32);
void func_0895A994(S0895A908 *);
void func_0895EFE4(void *, s32);
extern u8 D_08A4538C[];
extern u8 D_08A47958[];

S0895A908 *func_0895A908(S0895A908 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_08 = D_08A47958;
        func_0895A994(arg0);
        if (arg0->unk_28 != NULL) {
            arg0->unk_4C = D_08A4538C;
            func_08881A78(arg0->unk_28);
            func_08882058(arg0->unk_28, -1);
        }
        func_0895EFE4(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
