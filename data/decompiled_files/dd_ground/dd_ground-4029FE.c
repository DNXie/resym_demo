#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_4029FE(int a1, __int64 a2, size_t a3, int a4, int a5, int a6)
{
  int v6; // eax
  int v7; // ecx
  int v8; // er8
  int v9; // er9
  __int64 v10; // r12
  char *v11; // rbx
  int *v12; // rax
  int v13; // eax
  unsigned __int64 v16; // [rsp+30h] [rbp-20h]
  ssize_t v17; // [rsp+38h] [rbp-18h]

  v16 = 0LL;
  if ( (dword_60E388 & 0x4000) != 0 && a3 < n )
  {
    v6 = sub_409105(1, 3, a3, a4, a5, a6);
    BYTE1(v6) &= 0xBFu;
    if ( (unsigned int)sub_409105(1, 4, v6, v7, v8, v9) )
    {
      v10 = sub_40685B(qword_60E348);
      v11 = gettext("failed to turn off O_DIRECT: %s");
      v12 = __errno_location();
      error(0, *v12, v11, v10);
    }
    sub_402734(1, 0LL);
    v13 = dword_60E380;
    BYTE1(v13) = BYTE1(dword_60E380) | 0x80;
    dword_60E380 = v13;
  }
  while ( v16 < a3 )
  {
    sub_4025C4();
    v17 = write(a1, (const void *)(v16 + a2), a3 - v16);
    if ( v17 >= 0 )
    {
      if ( !v17 )
      {
        *__errno_location() = 28;
        break;
      }
      v16 += v17;
    }
    else if ( *__errno_location() != 4 )
    {
      break;
    }
  }
  if ( byte_60E489 && v16 )
    sub_402734(a1, v16);
  return v16;
}
