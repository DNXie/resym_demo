#include "/share/binary_recovery/clang-parser/defs.hh"
_BYTE *__fastcall sub_406428(__int64 a1, _BYTE *a2)
{
  _BYTE *v2; // rax
  _BYTE *v3; // rax
  _BYTE *v4; // rax
  _BYTE *v5; // rax
  _BYTE *v6; // rax
  _BYTE *v7; // rax
  _BYTE *v8; // rax
  _BYTE *v9; // rax
  _BYTE *v10; // rax
  _BYTE *v11; // rax
  _BYTE *result; // rax
  _BYTE *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  if ( *(_BYTE *)(a1 + 48) || *(_BYTE *)(a1 + 49) )
  {
    v13 = a2 + 1;
    *a2 = 98;
  }
  if ( *(_UNKNOWN **)(a1 + 32) == &unk_61D7E0 )
  {
    v2 = v13++;
    *v2 = 100;
  }
  if ( *(_QWORD *)(a1 + 40) )
  {
    v3 = v13++;
    *v3 = 102;
  }
  if ( *(_BYTE *)(a1 + 52) )
  {
    v4 = v13++;
    *v4 = 103;
  }
  if ( *(_BYTE *)(a1 + 53) )
  {
    v5 = v13++;
    *v5 = 104;
  }
  if ( *(_UNKNOWN **)(a1 + 32) == &unk_61D6E0 )
  {
    v6 = v13++;
    *v6 = 105;
  }
  if ( *(_BYTE *)(a1 + 54) )
  {
    v7 = v13++;
    *v7 = 77;
  }
  if ( *(_BYTE *)(a1 + 50) )
  {
    v8 = v13++;
    *v8 = 110;
  }
  if ( *(_BYTE *)(a1 + 51) )
  {
    v9 = v13++;
    *v9 = 82;
  }
  if ( *(_BYTE *)(a1 + 55) )
  {
    v10 = v13++;
    *v10 = 114;
  }
  if ( *(_BYTE *)(a1 + 56) )
  {
    v11 = v13++;
    *v11 = 86;
  }
  result = v13;
  *v13 = 0;
  return result;
}
