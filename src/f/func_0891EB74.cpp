#include "common.h"

extern "C" {

class Unk1 {};

typedef struct {
    u8 pad_00[0x4E30];
    void *unk_4E30;
    u8 pad_4E34[0x20];
    s32 unk_4E54;
    s32 unk_4E58;
    s32 unk_4E5C;

    void unk_00(const Unk1 &) {
        unk_4E58 = 0;
        unk_4E5C = 0;
        unk_4E54 = 0;
    }
} Unk2;

void func_088AF260(void *, s32);

void func_0891EB74(Unk2 *arg0, s32 arg1) {
    func_088AF260(arg0->unk_4E30, arg1);
    arg0->unk_00(Unk1());
}

}
