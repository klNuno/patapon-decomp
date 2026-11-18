#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    u8 *unk_04;
} Sub;

typedef struct {
    u8 pad_00[0x28];
    Sub *unk_28;
    void *unk_2C;
} Obj;

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
} Arg;

typedef struct {
    f32 unk_00[16];
} Mtx;

void func_08866464(Mtx *, void *, void *);
void *func_08866B80(Mtx *, s32);
void func_08866B54(Mtx *, s32, void *);

s32 func_08928828(Obj *arg0, Arg *arg1) {
    Mtx sp50;
    Mtx sp10;

    if (arg1 == NULL) {
        return 0;
    }
    func_08866464(&sp10, arg0->unk_2C, arg0->unk_28->unk_04 + (arg1->unk_04 << 7) + 0x40);
    func_08866B54(&sp50, 0, func_08866B80(&sp10, 0));
    func_08866B54(&sp50, 1, func_08866B80(&sp10, 1));
    func_08866B54(&sp50, 2, func_08866B80(&sp10, 2));
    func_08866B54(&sp50, 3, func_08866B80(&sp10, 3));
    return 1;
}
