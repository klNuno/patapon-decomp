#include "common.h"

extern "C" {

class Alloc_089CF9BC {
public:
    virtual void *unk_08(s32, s32);
};

typedef struct {
    u8 pad_00[0x4];
    Alloc_089CF9BC *unk_04;
    u8 pad_08[0x11554 - 0x8];
    s32 unk_11554;
    void *unk_11558;
    void *unk_1155C;
} Obj_089CF9BC;

typedef struct B089CFAB0 B089CFAB0;

void func_089D0408(Obj_089CF9BC *);
s32 func_089CFAB0(u8 *arg0, B089CFAB0 *arg1);

void func_089CFA44(Obj_089CF9BC *arg0)
{
    void *temp;

    func_089D0408(arg0);
    arg0->unk_11554 = 0x8000;
    temp = arg0->unk_04->unk_08(0x8000, 4);
    arg0->unk_11558 = temp;
    arg0->unk_1155C = temp;
    func_089CFAB0((u8 *)arg0, (B089CFAB0 *)temp);
}

}
