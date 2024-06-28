#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40FC2A(__int64 a1, __int64 a2)
{
  _QWORD *ptr; // [rsp+20h] [rbp-10h]
  __int64 v4; // [rsp+28h] [rbp-8h]

  if ( (*(_DWORD *)(a1 + 72) & 0x102) != 0 )
  {
    ptr = malloc(0x18uLL);
    if ( !ptr )
      return 0LL;
    *ptr = *(_QWORD *)(a2 + 120);
    ptr[1] = *(_QWORD *)(a2 + 128);
    ptr[2] = a2;
    v4 = sub_409DE7(*(_QWORD **)(a1 + 88), (__int64)ptr);
    if ( (_QWORD *)v4 != ptr )
    {
      free(ptr);
      if ( !v4 )
        return 0LL;
      *(_QWORD *)a2 = *(_QWORD *)(v4 + 16);
      *(_WORD *)(a2 + 112) = 2;
    }
  }
  else if ( (unsigned __int8)sub_412991(*(_QWORD *)(a1 + 88), a2 + 120) )
  {
    *(_QWORD *)a2 = a2;
    *(_WORD *)(a2 + 112) = 2;
  }
  return 1LL;
}
