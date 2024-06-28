#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4021B7(FILE *a1, char a2)
{
  _BYTE *v2; // rax
  __int64 v3; // rax
  bool v4; // dl
  int v5; // eax
  unsigned int v7; // [rsp+4h] [rbp-2Ch]
  int v8; // [rsp+1Ch] [rbp-14h]

  LOBYTE(v7) = a2;
  do
  {
    *(_QWORD *)qword_613280 = qword_609628;
    do
    {
      if ( (__int64 *)qword_609628 == &qword_609628 )
      {
        sub_401D6B(1);
        sub_4025E8();
      }
      v2 = (_BYTE *)qword_609628++;
      *v2 = v7;
      v7 = getc_unlocked(a1);
    }
    while ( v7 != -1 && ((*__ctype_b_loc())[v7] & 0x2000) == 0 );
    v3 = qword_613280;
    *(_DWORD *)(qword_613280 + 8) = qword_609628 - *(_DWORD *)qword_613280;
    dword_608284 += *(_DWORD *)(v3 + 8);
    sub_4024E4(qword_613280);
    v8 = dword_608284;
    v7 = sub_40247A(a1, v7);
    *(_DWORD *)(qword_613280 + 12) = dword_608284 - v8;
    v4 = v7 == -1 || (*(_BYTE *)(qword_613280 + 16) & 2) != 0 && (v7 == 10 || *(int *)(qword_613280 + 12) > 1);
    *(_BYTE *)(qword_613280 + 16) = (8 * v4) | *(_BYTE *)(qword_613280 + 16) & 0xF7;
    if ( v7 == 10 || v7 == -1 || byte_608263 )
    {
      if ( (*(_BYTE *)(qword_613280 + 16) & 8) != 0 )
        v5 = 2;
      else
        v5 = 1;
      *(_DWORD *)(qword_613280 + 12) = v5;
    }
    if ( (_UNKNOWN *)qword_613280 == &unk_613230 )
    {
      sub_401D6B(1);
      sub_4025E8();
    }
    qword_613280 += 40LL;
  }
  while ( v7 != 10 && v7 != -1 );
  return sub_4023AA(a1);
}
