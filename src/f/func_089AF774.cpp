#include "common.h"

extern "C" {
typedef struct Obj_089B31A8 Obj_089B31A8;
void *func_089B3620(Obj_089B31A8 *, s32);
s32 func_089B1314(s32);
void func_089AF428(void *, s32);

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0C[4];
} UnkEntry;

struct Obj_089B31A8 {
    u8 pad_00[0x11F8];
    UnkEntry *unk_11F8;
};

void func_089AF774(Obj_089B31A8 *arg0, s32 arg1)
{
    void *temp = func_089B3620(arg0, 5);
    UnkEntry *base = arg0->unk_11F8;
    s32 offset = arg1 * 0x10;
    func_089AF428(temp, func_089B1314(((UnkEntry *)((u8 *)base + offset))->unk_08));
}
}
