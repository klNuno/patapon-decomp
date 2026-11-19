#include "common.h"

typedef struct {
    u8 pad_00[0x80];
    u8 *unk_80;
    u8 pad_84[0x360];
    u8 *unk_3E4;
    u8 pad_3E8[0x58];
    u8 unk_440;
} T;

extern void func_0880416C(void *);
void func_0889CBBC(T *);
void func_08930214(void *, s16);
extern void func_089674D0(char *, s32);
extern u8 D_08A45924[];
extern u8 D_08A45940[];

T *func_0889CB40(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_80 = D_08A45924;
        arg0->unk_3E4 = D_08A45940;
        func_0889CBBC(arg0);
        func_08930214(&arg0->unk_440, -1);
        func_089674D0((char *)arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
