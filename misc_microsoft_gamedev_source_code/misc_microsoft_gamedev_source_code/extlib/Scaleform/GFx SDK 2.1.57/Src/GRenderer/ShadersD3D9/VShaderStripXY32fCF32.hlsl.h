#if 0
//
// Generated by 2.0.7776.0
//
//   fxc /T vs_1_1 /E VShaderStripXY32fCF32 scaleform.hlsl /Fh
//    VShaderStripXY32fCF32.hlsl.h
//
// Shader type: vertex 

xvs_3_0
config AutoSerialize=false
config AutoResource=false
config VsMaxReg=2
config VsResource=1
// VsExportCount=1

dcl_index r0.x
dcl_color o0
dcl_color1 o1


    exec
    vfetch r2, r0.x, position
    vfetch r1, r0.x, color
    vfetch r0, r0.x, color1
    alloc position
    exec
    mov oPos, r2
    alloc interpolators
    exece
    mov o0, r1
    mov o1, r0

// PDB hint 00000000-00000000-00000000

#endif

// This microcode is in native DWORD byte order.

const DWORD g_xvs_VShaderStripXY32fCF32[] =
{
    0x102a1101, 0x0000009c, 0x00000078, 0x00000000, 0x00000024, 0x00000000, 
    0x00000058, 0x00000000, 0x00000000, 0x00000030, 0x0000001c, 0x00000023, 
    0xfffe0300, 0x00000000, 0x00000000, 0x00000000, 0x0000001c, 0x76735f33, 
    0x5f300032, 0x2e302e37, 0x3737362e, 0x3000abab, 0x00000000, 0x00000078, 
    0x00110002, 0x00000000, 0x00000000, 0x00002042, 0x00000001, 0x00000003, 
    0x00000002, 0x00000290, 0x00100003, 0x0000a004, 0x0031a005, 0x0000f0a0, 
    0x0001f1a1, 0x00001007, 0x00001008, 0x70153003, 0x00001200, 0xc2000000, 
    0x00001006, 0x00001200, 0xc4000000, 0x00002007, 0x00002200, 0x00000000, 
    0x05f82000, 0x00000688, 0x00000000, 0x05f81000, 0x00000688, 0x00000000, 
    0x05f80000, 0x00000688, 0x00000000, 0xc80f803e, 0x00000000, 0xe2020200, 
    0xc80f8000, 0x00000000, 0xe2010100, 0xc80f8001, 0x00000000, 0xe2000000, 
    0x00000000, 0x00000000, 0x00000000
};