#include "common.h"

extern "C" {

class C089C1BA0 {
public:
    virtual void func_08();
    virtual void func_0C();
    virtual void func_10();
    virtual void func_14();
};

typedef struct {
    u8 pad_00[0x15C];
    void *unk_15C;
    u8 pad_160[0x10];
    u8 unk_170[0x120];
    u8 unk_290[0x90];
    u8 unk_320[0xDC];
    u8 unk_3FC[0x24];
    u8 unk_420[0xC];
    u8 unk_42C[1];
} T089C1BA0;

extern u8 D_08A48C84[];
extern u8 D_08A48024[];
void func_0880416C(void *);
void func_0886B11C(void *, s32);
void func_089D3B78(void *, s32);
void func_08945EC4(void *, s32);
void func_08865F78(void *, s32);
void func_08804000(void *, void (*)(void *, s32), s32, s32);
void func_08985484(void *, s32);

T089C1BA0 *func_089C1BA0(T089C1BA0 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_15C = D_08A48C84;
        if ((C089C1BA0 *)arg0->unk_42C != NULL) {
            *(void **)arg0->unk_42C = D_08A48024;
            ((C089C1BA0 *)arg0->unk_42C)->func_14();
            func_0886B11C(arg0->unk_42C, 0);
        }
        func_089D3B78(arg0->unk_420, -1);
        func_08945EC4(arg0->unk_3FC, -1);
        func_08865F78(arg0->unk_320, -1);
        func_08865F78(arg0->unk_290, -1);
        func_08804000(arg0->unk_170, func_08865F78, 0x90, 2);
        func_08985484(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
