#include "common.h"

extern "C" {

class B089D5A08 {
public:
    u8 pad_00[0x50];
    virtual void func_08();
    virtual void func_0C();
    virtual void func_10();
    virtual void func_14();
    virtual void func_18();
    virtual void func_1C();
    virtual void func_20();
};

typedef struct {
    u8 pad_00[0x48];
    s32 unk_48;
} S089D5A08;

typedef struct {
    u8 pad_00[0x50];
    void *unk_50;
    u8 pad_54[0xC];
    S089D5A08 unk_60;
    u8 pad_AC[4];
    u8 unk_B0[0x1464];
    u8 unk_1514[4];
} T089D5A08;

extern u8 D_08A48FF4[];
extern u8 D_08A44F44[];

void func_089D5D80(void *, s32);
void func_0885C534(void *, s32);
void func_0886F084(T089D5A08 *, s32);
void func_0880416C(void *);

T089D5A08 *func_089D5A08(T089D5A08 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_50 = D_08A48FF4;
        ((B089D5A08 *)arg0)->func_20();
        func_089D5D80(arg0->unk_1514, -1);
        if (arg0 != NULL) {
            arg0->unk_50 = D_08A44F44;
            func_0885C534(arg0->unk_B0, -1);
            if (&arg0->unk_60 != NULL) {
                arg0->unk_60.unk_48 = 0;
            }
            func_0886F084(arg0, 0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
