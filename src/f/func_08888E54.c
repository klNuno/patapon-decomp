#include "common.h"

typedef struct {
    u8 pad_00[0x30];
    f32 unk_30;
    f32 unk_34;
    u8 pad_38[0x8];
} M_08888E54;

typedef struct {
    f32 unk_00;
    f32 unk_04;
} V_08888E54;

typedef struct {
    u8 pad_00[0x28];
    u8 unk_28[0x648];
    u8 unk_670[1];
} S_08888E54;

void func_08866B54(void *, s32, s32);
s32 func_08866B80(void *, s32);
void func_088B56A0(void *);
void func_088B5F14(void *, M_08888E54 *);
void *func_088B60A8(void *);

void func_08888E54(S_08888E54 *arg0, V_08888E54 *arg1) {
    M_08888E54 m;
    void *p;

    func_088B56A0(arg0->unk_28);
    p = func_088B60A8(arg0->unk_670);
    func_08866B54(&m, 0, func_08866B80(p, 0));
    func_08866B54(&m, 1, func_08866B80(p, 1));
    func_08866B54(&m, 2, func_08866B80(p, 2));
    func_08866B54(&m, 3, func_08866B80(p, 3));
    m.unk_30 = arg1->unk_00;
    m.unk_34 = arg1->unk_04;
    func_088B5F14(arg0->unk_670, &m);
}
