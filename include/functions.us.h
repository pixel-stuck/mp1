#ifndef _FUNCTIONS_
#define _FUNCTIONS_

#include "types.h"
#include "common_structs.h"

f64 fabs(f64 f);
u8 GetRandomByte(void);
void func_80017660(s32, f32, f32, f32, f32);
void func_800176C4(s32, f32, f32, f32, f32, f32, f32);
void func_800178A0(s32);
u8 func_800178E8(void);
void func_8001D494(s32, f32, f32, f32);
void func_8001DE70(s32);
void func_80023448(s32);
void func_800234B8(u8, u8, u8, u8);
void func_80023504(s32, f32, f32, f32);
void func_80029090(s32);
void func_8005CF30 (s32 maxObjects, s32 maxProcesses);
Object* func_8005D384(s32, s32, s32, s32, void*);
void func_8005D8B8(Object*, s32);
void func_80060088(void);
void func_800602AC(s32);
void func_8007B168(s32*, s32);
void func_80086F08(f32*, void*);
f32 func_800AEAC0(f32);
f32 func_800AEFD0(f32);
u32 func_8005EB1C(void);
s32 IsBoardFeatureFlagSet(s32);
s16 func_8000C544(void);
s32 func_80075FE0(void);
s32 func_80072718(void);
void func_80009730(void);
void func_800601D4(s32);
void func_800790C0(void);
void func_8005DFB8(s32);
void func_80060198(void);
void func_8008B6A0(s32);
void func_80060398(s32);
void func_800726AC(s32, s32);
void func_80075CCC(s32, ...);
s16 ReadImgPackand(s32);
void func_80025930(s16, s32, s32);
s32 func_80076174(void);
f32 func_800B0CD8(void);
void* ReadMainFS(s32);
void FreeMainFS(void*);
s16 LoadFormFile(s32, s32);
s32 func_800678A4(void*);
s16 func_80023FC8(s16);
void func_80049F0C(void);
void func_8004A140(void);
s32 func_80054654(void);
void func_80070ED4(void);
void func_8004F1D0(void);
void func_80049E70(Addr*);
void func_80049F4C(s32);
void func_8003DAA8(void);
void func_8004F140(s16);
void func_80049F0C(void);
void func_8004A140(void);
void func_800544E4(void);
void func_80054834(s32, s32);
void func_8005DC28(void*, s32, s32, s32);
void func_80060128(s32);
void func_8006CEA0(void);
void func_80072644(s32, s32);
void func_80066DC4(s16, s16, s16, s16);
void func_800671DC(s16, s16, s16);
void func_800672B0(s16, s16, s16);
void func_80067354(s16, s32, f32, f32);
void func_80060128(s32);

void func_80009458(void);
void func_80009624(unkGlobalStruct_00*, s32);
void func_80017DB0(Object*);
void func_800184BC(Object*, s32);
void func_8006071C(s8, f32*);

#endif