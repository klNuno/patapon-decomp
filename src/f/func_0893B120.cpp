#include "common.h"

extern "C" {

class Obj_0893B120 {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
};

void func_0880416C(void *);
void func_0889B528(void *, s32);
void func_08924038(void *, s32);
extern u8 D_08A47278[];
extern u8 D_08A47284[];

Obj_0893B120 *func_0893B120(Obj_0893B120 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(void **)arg0 = D_08A47278;
        *(void **)((u8 *)arg0 + 0x1C) = D_08A47284;
        arg0->unk_24();
        func_0889B528((u8 *)arg0 + 0x7C, -1);
        func_08924038(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
