#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_401BBD(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, const char *a6)
{
  const char *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  char *format; // [rsp+38h] [rbp-28h]
  char v17[24]; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v18; // [rsp+58h] [rbp-8h]

  v18 = __readfsqword(0x28u);
  format = "%*s";
  if ( byte_609308 )
  {
    v6 = (const char *)sub_4039CB(a1, v17);
    printf("%*s", dword_609310, v6);
    format = " %*s";
  }
  if ( byte_609309 )
  {
    v7 = sub_4039CB(a2, v17);
    printf(format, (unsigned int)dword_609310, v7);
    format = " %*s";
  }
  if ( byte_60930A )
  {
    v8 = sub_4039CB(a3, v17);
    printf(format, (unsigned int)dword_609310, v8);
    format = " %*s";
  }
  if ( byte_60930B )
  {
    v9 = sub_4039CB(a4, v17);
    printf(format, (unsigned int)dword_609310, v9);
    format = " %*s";
  }
  if ( byte_60930C )
  {
    v10 = sub_4039CB(a5, v17);
    printf(format, (unsigned int)dword_609310, v10);
  }
  if ( a6 )
    printf(" %s", a6);
  putchar_unlocked(10);
  return __readfsqword(0x28u) ^ v18;
}
