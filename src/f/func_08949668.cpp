#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x100];
    s32 unk_100;
} Obj_08949668;

void func_08858F88(void *, s32, s32, void *);

extern u8 D_08A04044[];
extern u8 D_08A04064[];
extern u8 D_08A04084[];
extern u8 D_08A040A4[];
extern u8 D_08A040C4[];
extern u8 D_08A040E4[];
extern u8 D_08A04104[];
extern u8 D_08A04124[];

inline void put_08949668(Obj_08949668 *o, const s32 &x, s32 y, void *t) {
    func_08858F88(o, x, y, t);
}

void func_08949668(Obj_08949668 *arg0, s32 arg1, s32 arg2) {
    arg0->unk_100 = 0xFFFFFF;
    put_08949668(arg0, arg1, arg2, D_08A04044);
    put_08949668(arg0, arg1, arg2 + 1, D_08A04064);
    put_08949668(arg0, arg1, arg2 + 2, D_08A04084);
    put_08949668(arg0, arg1, arg2 + 3, D_08A040A4);
    put_08949668(arg0, arg1, arg2 + 4, D_08A040C4);
    put_08949668(arg0, arg1, arg2 + 5, D_08A040E4);
    put_08949668(arg0, arg1, arg2 + 6, D_08A04104);
    put_08949668(arg0, arg1, arg2 + 7, D_08A04124);
}

}
