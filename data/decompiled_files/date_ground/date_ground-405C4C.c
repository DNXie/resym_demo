#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_405C4C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8, unsigned __int64 a9)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 176) && !*(_QWORD *)(a1 + 56) && *(_BYTE *)(a1 + 169) != 1 && (*(_QWORD *)(a1 + 208) || a9 > 2) )
  {
    result = a1;
    *(_QWORD *)(a1 + 40) = a7;
    *(_QWORD *)(a1 + 48) = a8;
    *(_QWORD *)(a1 + 56) = a9;
  }
  else if ( a9 <= 4 )
  {
    ++*(_QWORD *)(a1 + 208);
    if ( a9 > 2 )
    {
      *(_QWORD *)(a1 + 80) = a8 / 100;
      *(_QWORD *)(a1 + 88) = a8 % 100;
    }
    else
    {
      *(_QWORD *)(a1 + 80) = a8;
      *(_QWORD *)(a1 + 88) = 0LL;
    }
    *(_QWORD *)(a1 + 96) = 0LL;
    *(_QWORD *)(a1 + 104) = 0LL;
    result = a1;
    *(_DWORD *)(a1 + 32) = 2;
  }
  else
  {
    ++*(_QWORD *)(a1 + 176);
    *(_QWORD *)(a1 + 72) = a8 % 100;
    *(_QWORD *)(a1 + 64) = a8 / 100 % 100;
    *(_QWORD *)(a1 + 48) = a8 / 10000;
    result = a1;
    *(_QWORD *)(a1 + 56) = a9 - 4;
  }
  return result;
}
