#include "common.h"

typedef struct S_089B7294 S_089B7294;
typedef struct Obj_08995840 Obj_08995840;
typedef struct T T;

typedef struct {
    u8 pad_00[0x4D68];
    u8 unk_4D68[1];
    u8 pad_4D69[0x328F];
    u8 unk_7FF8[1];
} Unk;

typedef struct {
    u8 pad_00[0x1070];
    u8 unk_1070[1];
    u8 pad_1071[0x1A27];
    Unk unk_2A98;
    u8 pad_AA91[0x3B6EF];
    u8 unk_46180[1];
} Obj;

void func_089B7294(S_089B7294 *);
void func_08995840(Obj_08995840 *, s32);
void func_089B93F0(void *);
void func_089A369C(T *);

void func_08994FF8(Obj *arg0, s32 arg1)
{
    func_089B7294((S_089B7294 *)arg0->unk_1070);
    func_08995840((Obj_08995840 *)arg0->unk_46180, arg1);
    func_089B93F0(arg0->unk_2A98.unk_4D68);
    func_089A369C((T *)(arg0->unk_2A98.unk_7FF8));
}
