#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x100];
    s32 unk_100;
} Obj_08885B30;

void func_08858F88(void *, s32, s32, void *);

extern u8 D_089FA070[];
extern u8 D_089FA090[];
extern u8 D_089FA0B0[];
extern u8 D_089FA0D0[];
extern u8 D_089FA0F0[];
extern u8 D_089FA110[];
extern u8 D_089FA130[];
extern u8 D_089FA150[];

inline void put_08885B30(Obj_08885B30 *o, const s32 &x, s32 y, void *t) {
    func_08858F88(o, x, y, t);
}

void func_08885B30(Obj_08885B30 *arg0, s32 arg1, s32 arg2) {
    arg0->unk_100 = 0xFFFFFF;
    put_08885B30(arg0, arg1, arg2, D_089FA070);
    put_08885B30(arg0, arg1, arg2 + 1, D_089FA090);
    put_08885B30(arg0, arg1, arg2 + 2, D_089FA0B0);
    put_08885B30(arg0, arg1, arg2 + 3, D_089FA0D0);
    put_08885B30(arg0, arg1, arg2 + 4, D_089FA0F0);
    put_08885B30(arg0, arg1, arg2 + 5, D_089FA110);
    put_08885B30(arg0, arg1, arg2 + 6, D_089FA130);
    put_08885B30(arg0, arg1, arg2 + 7, D_089FA150);
}

}
