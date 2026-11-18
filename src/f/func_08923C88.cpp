#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0xE];
    u16 unk_0E;
} N08923C88;

typedef struct {
    N08923C88 *unk_00;
    s32 *unk_04;
} H08923C88;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x8];
    H08923C88 unk_10;
} K08923C88;

typedef struct L08923C88 {
    struct L08923C88 *unk_00;
    struct L08923C88 *unk_04;
    K08923C88 unk_08;

    int eq(struct L08923C88 *o) { return this == o; }
    bool ne(struct L08923C88 *o) { return !(bool)eq(o); }
} L08923C88;

typedef struct {
    L08923C88 *unk_00;
} I08923C88;

typedef struct {
    u8 pad_00[0x94];
    L08923C88 unk_94;

    L08923C88 *end() { return &unk_94; }
} T08923C88;

s32 func_088C0020(H08923C88 *);
I08923C88 func_089238C4(L08923C88 *);
I08923C88 func_089238BC(L08923C88 *);
I08923C88 func_08923944(L08923C88 *, I08923C88, I08923C88);

void func_08923C88(T08923C88 *arg0) {
    struct { L08923C88 *unk_00; } it;
    struct { L08923C88 *unk_00; } en;


    it.unk_00 = arg0->unk_94.unk_00;
    en.unk_00 = arg0->end();
    for (; it.unk_00->ne(en.unk_00); it.unk_00 = it.unk_00->unk_00) {
        struct { K08923C88 *unk_00; } k;
        k.unk_00 = &it.unk_00->unk_08;
        if (func_088C0020(&k.unk_00->unk_10) == 0) {
            k.unk_00->unk_10.unk_00->unk_0E |= 0x200;
        }
        k.unk_00->unk_00 = -1;
    }
    func_08923944(&arg0->unk_94, func_089238C4(&arg0->unk_94), func_089238BC(&arg0->unk_94));
}

}
