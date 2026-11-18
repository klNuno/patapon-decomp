#include "common.h"

extern "C" {

class C_08928B70 {
public:
    u8 pad_00[0x1C0];
    virtual void v08();
    virtual void v0C(s32, s32, s32, s32);
};

typedef struct {
    u8 pad_00[0x20];
    C_08928B70 unk_20;
} Obj120_08928B70;

typedef struct {
    u8 pad_00[0x120];
    Obj120_08928B70 *unk_120;
} Obj250_08928B70;

typedef struct {
    u8 pad_00[0x4];
    u8 *unk_04;
} Sub;

typedef struct {
    u8 pad_00[0x28];
    Sub *unk_28;
    void *unk_2C;
    u8 pad_30[0x250 - 0x30];
    Obj250_08928B70 *unk_250;
} Obj;

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
    s32 unk_08;
    u8 pad_0C[0x4];
    s32 unk_10;
    s32 unk_14;
} Arg;

typedef struct {
    f32 unk_00[16];
} Mtx;

void func_08866464(Mtx *, void *, void *);
void *func_08866B80(Mtx *, s32);
void func_08866B54(Mtx *, s32, void *);

s32 func_08928B70(Obj *arg0, Arg *arg1) {
    Mtx sp50;
    Mtx sp10;
    Obj250_08928B70 *p;
    Obj120_08928B70 *q;

    if (arg1 == NULL) {
        return 0;
    }
    func_08866464(&sp10, arg0->unk_2C, arg0->unk_28->unk_04 + (arg1->unk_04 << 7) + 0x40);
    func_08866B54(&sp50, 0, func_08866B80(&sp10, 0));
    func_08866B54(&sp50, 1, func_08866B80(&sp10, 1));
    func_08866B54(&sp50, 2, func_08866B80(&sp10, 2));
    func_08866B54(&sp50, 3, func_08866B80(&sp10, 3));
    p = arg0->unk_250;
    if (p == NULL) {
        return 0;
    }
    q = p->unk_120;
    if (q == NULL) {
        return 0;
    }
    q->unk_20.v0C(7, arg1->unk_08 + 0xA, arg1->unk_10, arg1->unk_14);
    return 1;
}

}
