#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401E22(__int64 a1)
{
  char v2; // al
  __int64 v3; // rdx
  __int64 v4; // rax
  unsigned int i; // [rsp+1Ch] [rbp-4h]
  unsigned int v6; // [rsp+1Ch] [rbp-4h]

  dword_6132A0 = 0;
  for ( i = dword_613298;
        i == 10 || i == -1 || dword_61329C < dword_608278 || dword_608274 + dword_61329C > dword_608284;
        i = sub_4023AA(a1) )
  {
    if ( (unsigned int)sub_402058(a1, i) == -1 )
    {
      dword_613298 = -1;
      return 0LL;
    }
    putchar_unlocked(10);
  }
  dword_61328C = dword_61329C;
  dword_613290 = dword_608284;
  qword_609628 = (__int64)&unk_6082A0;
  qword_613280 = (__int64)&unk_609640;
  v6 = sub_4021B7(a1, i);
  v2 = sub_40216B(v6);
  sub_401D6B(v2);
  if ( !byte_608262 )
  {
    if ( byte_608260 )
    {
      if ( (unsigned __int8)sub_40216B(v6) )
      {
        do
          v6 = sub_4021B7(a1, v6);
        while ( (unsigned __int8)sub_40216B(v6) && dword_608284 == dword_613294 );
      }
    }
    else if ( byte_608261 )
    {
      if ( (unsigned __int8)sub_40216B(v6) && dword_608284 != dword_613290 )
      {
        do
          v6 = sub_4021B7(a1, v6);
        while ( (unsigned __int8)sub_40216B(v6) && dword_608284 == dword_613294 );
      }
    }
    else
    {
      while ( (unsigned __int8)sub_40216B(v6) && dword_608284 == dword_613294 )
        v6 = sub_4021B7(a1, v6);
    }
  }
  v3 = qword_613280 - 40;
  v4 = qword_613280 - 40;
  *(_BYTE *)(v4 + 16) = *(_BYTE *)(qword_613280 - 40 + 16) | 8;
  *(_BYTE *)(v3 + 16) = (2 * ((*(_BYTE *)(v4 + 16) & 8) != 0)) | *(_BYTE *)(v3 + 16) & 0xFD;
  dword_613298 = v6;
  return 1LL;
}
