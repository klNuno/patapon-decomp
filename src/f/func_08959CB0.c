#include "common.h"

typedef struct {
    s32 *unk_00;
} R_08959CB0;

typedef struct {
    u8 pad_00[0x90];
    R_08959CB0 *unk_90;
} T_08959CB0;

typedef struct {
    u8 pad_00[0x90];
    s32 *unk_90;
    u8 pad_94[0x153C - 0x94];
    T_08959CB0 *unk_153C;
} S_08959CB0;

s32 func_089598B4(void);
s32 func_08858BCC(void);
void func_0895A68C(void *, s32);
void *func_08827A50(s32, s32);
T_08959CB0 *func_08959040(void *);
s32 func_089598BC(T_08959CB0 *, s32);
s32 func_0882C338(s32, s32);
void func_0882C608(s32, s32, s32, s32);
void func_088663BC(f32, S_08959CB0 *);

s32 func_08959CB0(S_08959CB0 *arg0, s32 arg1) {
    T_08959CB0 *o;
    s32 s;

    if ((u8)func_089598B4() == 0) {
        return 0;
    }
    func_0895A68C(arg0->unk_153C, func_08858BCC());
    arg0->unk_153C = NULL;
    o = func_08827A50(0x1DC0, func_08858BCC());
    if (o != NULL) {
        o = func_08959040(o);
    }
    arg0->unk_153C = o;
    if ((u8)func_089598BC(o, arg1) == 0) {
        return 0;
    }
    s = *arg0->unk_90;
    func_0882C608(s, 0, func_0882C338(*(s32 *)arg0->unk_153C->unk_90, 0), 2);
    func_088663BC(3.4028235e38f, arg0);
    return 1;
}
