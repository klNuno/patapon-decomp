#include "common.h"

extern "C" {

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} T0897560C;

void *func_08827A50(s32, s32);
void func_0887432C(T0897560C *, s32);
void func_088F2FE4(T0897560C *, void *);
s32 func_0893E8A8(s32);
void *func_0893E8E0(void *);
void func_089756F8(T0897560C *, void *, s32);
s32 func_0897575C(s32);
void *func_08975794(void *);

inline void *mkA(s32 arg1) {
    void *p;
    if ((p = func_08827A50(0x14, arg1)) != NULL) {
        p = func_08975794(p);
    }
    return p;
}

inline void *mkB(s32 arg1) {
    void *p;
    if ((p = func_08827A50(0x14, arg1)) != NULL) {
        p = func_0893E8E0(p);
    }
    return p;
}

s32 func_0897560C(T0897560C *arg0, s32 arg1, s32 arg2) {
    T0897560C sp10;
    void *p;

    arg0->unk_00 = 0;
    arg0->unk_04 = 0;
    arg0->unk_08 = 0;
    arg0->unk_0C = 0;
    if (func_0897575C(arg2)) {
        p = mkA(arg1);
    } else if (func_0893E8A8(arg2)) {
        p = mkB(arg1);
    } else {
        return 0;
    }
    func_089756F8(&sp10, p, arg1);
    func_088F2FE4(&sp10, arg0);
    func_0887432C(&sp10, -1);
    return 0;
}

}
