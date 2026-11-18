#include "common.h"

extern "C" {

class Alloc_088C5868 {
public:
    virtual s32 *vf_08(void *, s32);
};

typedef struct {
    s32 unk_00;
    Alloc_088C5868 *unk_04;
    void *unk_08;
    s32 *unk_0C;
} Ptr_088C5868;

void *func_08827A50(s32, s32);
void *func_08915828(void *, s32, s32, s32);
Alloc_088C5868 *func_08827AD4(void);

void func_088C5868(Ptr_088C5868 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *obj;

    if ((obj = func_08827A50(0x2610, arg2)) != NULL) {
        obj = func_08915828(obj, arg2, arg3, arg4);
    }
    arg0->unk_00 = arg2;
    arg0->unk_04 = func_08827AD4();
    arg0->unk_08 = obj;
    arg0->unk_0C = arg0->unk_04->vf_08(obj, arg0->unk_00);
    *arg0->unk_0C = 1;
}

}
