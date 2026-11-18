#include "common.h"

extern "C" {

class Alloc_0886D338 {
public:
    virtual s32 *func_slot0(void *, s32);
};

typedef struct {
    s32 unk_00;
    Alloc_0886D338 *unk_04;
    void *unk_08;
    s32 *unk_0C;
} Obj_0886D338;

void *func_08827A50(s32, s32);
Alloc_0886D338 *func_08827AD4(void);
void *func_0887C734(void *, s32, s32);

void func_0886D338(Obj_0886D338 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *p;
    s32 *rc;

    if ((p = func_08827A50(0x246B0, arg2)) != NULL) {
        p = func_0887C734(p, arg2, arg3);
    }
    arg0->unk_00 = arg2;
    arg0->unk_04 = func_08827AD4();
    arg0->unk_08 = p;
    rc = arg0->unk_04->func_slot0(p, arg0->unk_00);
    arg0->unk_0C = rc;
    *rc = 1;
}

}
