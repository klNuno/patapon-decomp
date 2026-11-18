#include "common.h"

typedef struct Obj_0889CBBC {
    u8 pad_00[0x400];
    s32 unk_400;
    u8 pad_404[4];
    f32 unk_408;
    u8 pad_40C[4];
    u8 unk_410[8];
    s32 unk_418[10];
    u8 pad_440[0x5B0 - 0x440];
    s32 unk_5B0;
    u8 pad_5B4[4];
    s32 unk_5B8;
    u8 unk_5BC;
    u8 pad_5BD[7];
    s32 unk_5C4;
} Obj_0889CBBC;

void func_0896758C(Obj_0889CBBC *);
extern s32 func_088A0400(s32);
void func_0889DA38(Obj_0889CBBC *);
void func_0889CFD8(Obj_0889CBBC *);
void func_0889DC90(void *);

void func_0889CBBC(Obj_0889CBBC *arg0) {
    s32 i;

    func_0896758C(arg0);
    func_088A0400((s32)arg0);
    arg0->unk_400 = 0;
    arg0->unk_408 = 1.0f;
    func_0889DA38(arg0);
    func_0889CFD8(arg0);
    arg0->unk_5B0 = 0;
    arg0->unk_5B8 = 0;
    arg0->unk_5BC = 0;
    arg0->unk_5C4 = -1;
    func_0889DC90(arg0->unk_410);
    for (i = 0; i < 10; i++) {
        arg0->unk_418[i] = -1;
    }
}
