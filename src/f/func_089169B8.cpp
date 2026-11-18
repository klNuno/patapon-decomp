#include "common.h"

extern "C" {

class V_089169B8 {
public:
    virtual void v08();
    virtual void v0C();
};

typedef struct {
    u8 pad_00[0x1510];
    u8 unk_1510[0x8];
    void *unk_1518;
    u8 pad_151C[0x5];
    u8 unk_1521;
    u8 pad_1522[0x6];
    u8 unk_1528[0xF10];
    V_089169B8 unk_2438;
} S_089169B8;

typedef struct {
    s32 unk_00;
    u8 pad_04[0xC];
} T_089169B8;

extern void *D_08AD2070[];
extern void *D_08AD1E28[];
void func_088DB6E4(void *);
void func_08916B24(T_089169B8 *);
void func_08916AE0(T_089169B8 *, void *);
void func_0891592C(T_089169B8 *, s32);
void func_0887BFD4(void *, s32, s32);
void func_0886891C(void *, s32);
void func_0897A794(void *);
s32 func_088586E8(void);
void *func_089B5470(s32, s32);
void func_088C3688(void *);

void func_089169B8(S_089169B8 *arg0) {
    T_089169B8 t;
    void *temp;

    if (arg0->unk_1518 != NULL) {
        func_088DB6E4(arg0->unk_1518);
        func_08916B24(&t);
        func_08916AE0(&t, arg0->unk_1510);
        func_0891592C(&t, -1);
    }
    func_0887BFD4(D_08AD2070[0] != NULL ? D_08AD2070[0] : NULL, 0, 0);
    arg0->unk_2438.v0C();
    temp = D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL;
    func_0886891C(temp, 0xB);
    func_0886891C(temp, 4);
    func_0886891C(temp, 5);
    func_0886891C(temp, 0xA);
    func_0897A794(arg0->unk_1528);
    func_088C3688(func_089B5470(func_088586E8(), 0));
    func_088C3688(func_089B5470(func_088586E8(), 1));
    func_088C3688(func_089B5470(func_088586E8(), 2));
    arg0->unk_1521 = 0;
}

}
