#include "common.h"

typedef struct {
    u8 pad_00[0x1020];
    u8 unk_1020[4];
} B_0891BCAC;

typedef struct {
    u8 pad_00[0x1AD0];
    u8 unk_1AD0[4];
} A_0891BCAC;

typedef struct {
    u8 pad_00[0x36B08];
    A_0891BCAC *unk_36B08;
    u8 pad_36B0C[4];
    B_0891BCAC *unk_36B10;
    u8 pad_36B14[0x4C];
    u8 unk_36B60[4];
} G_0891BCAC;

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
    u8 pad_0C[0x80];
    G_0891BCAC *unk_8C;
    u8 pad_90[0x37C0 - 0x90];
    u8 unk_37C0[0x4C00 - 0x37C0];
    s32 unk_4C00;
} Obj_0891BCAC;

s32 func_088586E8(void);
s32 func_08913AE0(char *);
void func_089139A4(void *, s32, void *, s32);
void func_08913708(char *, s32);
void func_088C3688(void *);
void func_0895728C(s32);
void func_08920BA0(void *);
void *func_088BCF78(void *);
void func_0891E074(void *, s32, s32);
void *func_089B5470(s32, s32);

extern u8 D_089E5E60[];

s32 func_0891BCAC(Obj_0891BCAC *arg0, s32 arg1, u8 arg2) {
    if (arg2 == 1) {
        func_089139A4(arg0->unk_37C0, 0, D_089E5E60, 1);
    }
    func_08913708((char *)arg0->unk_37C0, arg1);
    if (func_08913AE0((char *)arg0->unk_37C0) != 0) {
        func_0895728C(arg0->unk_08);
        func_08920BA0(arg0->unk_8C->unk_36B08->unk_1AD0);
        func_0891E074(func_088BCF78(arg0->unk_8C->unk_36B60), 0, 0);
        func_0891E074(arg0->unk_8C->unk_36B10->unk_1020, 0, 0);
        if (arg0->unk_4C00 == 5) {
            func_088C3688(func_089B5470(func_088586E8(), 0));
        }
        return 1;
    }
    return 0;
}
