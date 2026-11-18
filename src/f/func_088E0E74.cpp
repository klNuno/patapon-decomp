#include "common.h"

extern "C" {

class Sub_088E0E74 {
public:
    virtual void unk_08();
    virtual void unk_0C();
};

typedef struct Obj_088E0E74 {
    u8 pad_00[0x2034];
    u8 unk_2034[0x2038];
    Sub_088E0E74 unk_406C;
    u8 pad_4070[0xF020];
    u8 unk_13090[4];
} Obj_088E0E74;

void func_088E0398(s32 *, void *);
void func_088E03A0(s32 *, void *);
void func_088E0444(s32 *, void *, s32, s32);
void func_088E2184(Obj_088E0E74 *);
void func_0893AF68(void *);

void func_088E0E74(Obj_088E0E74 *arg0) {
    s32 sp1C;
    s32 sp18;
    s32 sp14;

    func_088E03A0(&sp18, arg0->unk_13090);
    func_088E0398(&sp14, arg0->unk_13090);
    func_088E0444(&sp1C, arg0->unk_13090, sp18, sp14);
    func_088E2184(arg0);
    func_0893AF68(arg0->unk_2034);
    arg0->unk_406C.unk_0C();
}

}
