#include "common.h"

typedef struct {
    void *unk_00;
} S088A88C0;

typedef struct {
    void *unk_00;
    u8 pad_04[0x7C];
    u8 unk_80[0x604];
    void *unk_684;
    s32 unk_688;
    S088A88C0 *unk_68C;
} T088F23D0;

void func_08804690(S088A88C0 *, void (*)(void), u8 *);
void func_088AEF1C(T088F23D0 *);
void func_088F2470(T088F23D0 *);
void func_0893D99C(S088A88C0 *);
void func_0893DD44(void);
extern u8 D_08A4667C[];
extern s8 D_08A7BA4C[];
extern S088A88C0 D_08A7BA50[];
extern u8 D_08AD819C[];

T088F23D0 *func_088F2288(T088F23D0 *arg0) {
    func_088AEF1C(arg0);
    arg0->unk_00 = D_08A4667C;
    arg0->unk_684 = (u8 *)(((u32)arg0->unk_80 & 3) + (u32)arg0 + 0x80);
    arg0->unk_688 = 0;
    if (D_08A7BA4C[0] == 0) {
        func_0893D99C(D_08A7BA50);
        func_08804690(D_08A7BA50, func_0893DD44, D_08AD819C);
        D_08A7BA4C[0] = 1;
    }
    arg0->unk_68C = D_08A7BA50;
    func_088F2470(arg0);
    return arg0;
}
