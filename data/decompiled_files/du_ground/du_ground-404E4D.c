#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_404E4D(char *a1, unsigned __int64 a2)
{
  signed int v4; // [rsp+1Ch] [rbp-94h]
  unsigned __int64 v5; // [rsp+20h] [rbp-90h]
  char v6[4]; // [rsp+60h] [rbp-50h] BYREF
  int v7; // [rsp+64h] [rbp-4Ch] BYREF
  char i; // [rsp+6Ch] [rbp-44h]
  char *v9; // [rsp+70h] [rbp-40h]
  __int64 v10; // [rsp+78h] [rbp-38h]
  __int64 v11; // [rsp+80h] [rbp-30h]
  unsigned __int64 v12; // [rsp+A8h] [rbp-8h]

  v12 = __readfsqword(0x28u);
  v5 = 0LL;
  v9 = a1;
  v6[0] = 0;
  memset(&v7, 0, 8uLL);
  for ( i = 0; ; i = 0 )
  {
    sub_404B17((__int64)v6);
    if ( (unsigned __int8)v11 == 1 && !HIDWORD(v11) )
      break;
    if ( (_BYTE)v11 )
      v4 = towlower(HIDWORD(v11));
    else
      v4 = *v9;
    v5 = (31 * v5 + v4) % a2;
    v9 += v10;
  }
  return v5;
}
