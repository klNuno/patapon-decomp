#include "common.h"

extern "C" {

inline void *operator new(unsigned int, void *p) { return p; }

typedef void (*Fn_0889E160)(void);

typedef struct {
    Fn_0889E160 *unk_00;
    u32 unk_04;
} Vec_0889E160;

typedef struct {
    u8 pad_00[0x18];
    Vec_0889E160 unk_18;
    u8 unk_20[0x50];
    s32 unk_70;
} Obj_0889E160;

u32 func_0889E07C(void);

inline void construct(Fn_0889E160 *p, const Fn_0889E160 &v) { new (p) Fn_0889E160(v); }
void func_0889EB08(u8 *);
struct Tag_0889E160 {};
void func_0889EC00(u8 *, const Tag_0889E160 &);
void func_0889E398(void);
void func_0889E554(void);

void func_0889E160(Obj_0889E160 *arg0) {
    Fn_0889E160 *p;
    Vec_0889E160 *v;
    Tag_0889E160 t;

    p = arg0->unk_18.unk_00;
    v = &arg0->unk_18;
    if ((u32)p != (u32)(p + arg0->unk_18.unk_04)) {
        do {
            p++;
        } while (p != v->unk_00 + arg0->unk_18.unk_04);
    }
    arg0->unk_18.unk_04 = 0;
    while (arg0->unk_18.unk_04 < func_0889E07C()) {
        construct(&arg0->unk_18.unk_00[*(u32 *)&arg0->unk_18.unk_04], func_0889E398);
        arg0->unk_18.unk_04++;
    }
    v->unk_00[0] = func_0889E398;
    v->unk_00[1] = func_0889E554;
    func_0889EB08(arg0->unk_20);
    arg0->unk_70 = 0;
    func_0889EC00(arg0->unk_20, t);
}

}
