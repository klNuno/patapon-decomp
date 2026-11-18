#include "common.h"

typedef struct {
    u8 pad_00[0xE];
    u16 unk_0E;
} N08923B30;

typedef struct {
    N08923B30 *unk_00;
    s32 *unk_04;
} H08923B30;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x8];
    H08923B30 unk_10;
} K08923B30;

typedef struct {
    s32 unk_00;
    s32 unk_04;
} I08923B30;

typedef struct {
    u8 pad_00[0x94];
    s32 unk_94;
    s32 unk_98;
} T08923B30;

void func_088BFFB8(H08923B30 *);
s32 func_088C0020(H08923B30 *);
I08923B30 func_089238BC(s32 *);
void func_08923BD0(s32 *, s32, K08923B30 *);

s32 func_08923B30(T08923B30 *arg0) {
    K08923B30 k;
    I08923B30 it;
    struct { T08923B30 *unk_00; } o;

    o.unk_00 = arg0;
    k.unk_04 = 0;
    func_088BFFB8(&k.unk_10);
    if (func_088C0020(&k.unk_10) == 0) {
        k.unk_10.unk_00->unk_0E |= 0x200;
    }
    k.unk_00 = -1;
    it = func_089238BC(&o.unk_00->unk_94);
    func_08923BD0(&o.unk_00->unk_94, it.unk_00, &k);
    if (func_088C0020(&k.unk_10) == 0) {
        k.unk_10.unk_00->unk_0E |= 0x200;
    }
    k.unk_00 = -1;
    return o.unk_00->unk_98 + 8;
}
