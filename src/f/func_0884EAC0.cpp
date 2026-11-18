#include "common.h"

extern "C" {

class Alloc_0884EAC0 {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10(s32 *);
};

struct Vec_0884EAC0 {
    s32 *unk_00;
    u32 unk_04;
    Alloc_0884EAC0 *unk_08;
    void destroy(s32 *first, s32 *last) {
        do {
            ++first;
        } while (first != last);
    }
};

typedef struct Obj_0884EAC0 {
    u8 pad_00[0x8];
    Vec_0884EAC0 unk_08;
    Vec_0884EAC0 unk_14;
} Obj_0884EAC0;

void func_0880416C(void *);

Obj_0884EAC0 *func_0884EAC0(Obj_0884EAC0 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (&arg0->unk_14 != NULL) {
            if (*(volatile u32 *)&arg0->unk_14.unk_04 != 0) {
                arg0->unk_14.destroy(arg0->unk_14.unk_00, arg0->unk_14.unk_00 + arg0->unk_14.unk_04);
                arg0->unk_14.unk_08->unk_10(arg0->unk_14.unk_00);
            }
        }
        if (&arg0->unk_08 != NULL) {
            if (*(volatile u32 *)&arg0->unk_08.unk_04 != 0) {
                arg0->unk_08.destroy(arg0->unk_08.unk_00, arg0->unk_08.unk_00 + arg0->unk_08.unk_04);
                arg0->unk_08.unk_08->unk_10(arg0->unk_08.unk_00);
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
