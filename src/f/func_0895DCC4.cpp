#include "common.h"

extern "C" {

class Alloc_0895DCC4 {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10(void *);
};

typedef struct {
    u8 pad_00[0x28];
    Alloc_0895DCC4 *unk_28;
    u8 pad_2C[0x124];
    s32 unk_150;
    void *unk_154;
    s32 unk_158;
    void *unk_15C;
    u8 pad_160[0x34];
    u8 unk_194[0xEC];
    u8 unk_280[0xEC];
    u8 unk_36C[0xC4];
    s32 unk_430;
} Obj_0895DCC4;

void func_0895D1BC(u8 *, s32);
void func_0895E154(Obj_0895DCC4 *);
void func_0895C72C(u8 *);
void func_0895BE10(u8 *);
void func_0895CE84(u8 *);
void sceMpegFinish(void);

void func_0895DCC4(Obj_0895DCC4 *arg0) {
    func_0895D1BC(arg0->unk_36C, 0);
    func_0895E154(arg0);
    func_0895C72C(arg0->unk_194);
    func_0895BE10(arg0->unk_280);
    arg0->unk_430 = 0;
    func_0895CE84(arg0->unk_36C);
    if (arg0->unk_154 != NULL) {
        arg0->unk_28->unk_10(arg0->unk_154);
        arg0->unk_154 = NULL;
    }
    arg0->unk_150 = 0;
    if (arg0->unk_15C != NULL) {
        arg0->unk_28->unk_10(arg0->unk_15C);
        arg0->unk_15C = NULL;
    }
    arg0->unk_158 = 0;
    sceMpegFinish();
}

}
