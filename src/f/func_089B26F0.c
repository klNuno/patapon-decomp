#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} V_089B26F0;

typedef struct {
    f32 unk_00;
    f32 unk_04;
} W_089B26F0;

typedef struct {
    u8 pad_00[0x54];
    s32 unk_54;
    u8 pad_58[8];
    u8 unk_60[4];
} Obj_089B26F0;

extern W_089B26F0 D_08A085E8[];
extern char D_089F0AB8[];

void func_089B356C(Obj_089B26F0 *, u8);
void func_08912218(void *);
void func_08912250(void *, s32, s32, s32, s32, V_089B26F0 *);
void func_089127E0(void *, char *);

void func_089B26F0(Obj_089B26F0 *arg0, u8 arg1) {
    V_089B26F0 v;

    func_089B356C(arg0, arg1);
    if (arg1 == 1) {
        v = *(V_089B26F0 *)D_08A085E8;
        func_08912250(arg0->unk_60, arg0->unk_54, 0, 0, 3, &v);
        func_089127E0(arg0->unk_60, D_089F0AB8);
    } else {
        func_08912218(arg0->unk_60);
    }
}
