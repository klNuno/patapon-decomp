#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
    u8 pad_0C[0xC];
    s32 unk_18;
} T088990BC_2;

typedef struct {
    u8 pad_00[0x14A0];
    u8 *unk_14A0;
} T088990BC_1;

struct T088990BC_0 {
    u8 pad_00[0x8];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    u8 pad_0C[0x3CC];
    T088990BC_2 *unk_3D8;
    u8 pad_3DC[0x4];
    s32 unk_3E0;
};

extern T088990BC_1 *D_08AD1F14[];
extern char D_089FA518[];
extern char D_089FA52C[];

s32 func_0887744C(T088990BC_1 *, char *, s32);
void func_08893970(s32, s32, s32);
void func_08899468(T088990BC_0 *);

void func_088990BC(T088990BC_0 *arg0) {
    T088990BC_2 **m;
    s32 temp;
    T088990BC_1 *g;

    arg0->v20();
    arg0->unk_3E0 = func_0887744C(D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL, D_089FA518, 0xF);
    g = D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL;
    m = &arg0->unk_3D8;
    func_08893970(arg0->unk_3D8->unk_08, (s32)(g->unk_14A0 + 0x264), 0);
    temp = func_0887744C(D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL, D_089FA52C, 0xF);
    func_08899468(arg0);
    func_08893970((*m)->unk_18, temp, 1);
}

}
