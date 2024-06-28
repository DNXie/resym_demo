#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_403F34(__int64 a1)
{
  char *v1; // rax
  int v2; // eax
  __int64 result; // rax
  int i; // [rsp+10h] [rbp-10h]
  int v5; // [rsp+10h] [rbp-10h]
  char *v6; // [rsp+18h] [rbp-8h]

  if ( dword_6103B8 >= dword_6103BC )
    sprintf(ptr, "%0*d", dword_610278, (unsigned int)(dword_6103B8 % dword_6103BC));
  else
    sprintf(ptr, "%*d", dword_610278, (unsigned int)dword_6103B8);
  ++dword_6103B8;
  v6 = ptr;
  for ( i = dword_610278; i > 0; --i )
  {
    v1 = v6++;
    (*(void (__fastcall **)(_QWORD))(a1 + 32))((unsigned int)*v1);
  }
  if ( dword_61025C <= 1 )
  {
    (*(void (__fastcall **)(_QWORD))(a1 + 32))((unsigned int)byte_610268);
    if ( byte_610268 == 9 )
      dword_610394 += dword_610258 - dword_610394 % dword_610258;
  }
  else if ( byte_610268 == 9 )
  {
    v5 = dword_6103C4 - dword_610278;
    while ( 1 )
    {
      v2 = v5--;
      if ( v2 <= 0 )
        break;
      (*(void (__fastcall **)(__int64))(a1 + 32))(32LL);
    }
  }
  else
  {
    (*(void (__fastcall **)(_QWORD))(a1 + 32))((unsigned int)byte_610268);
  }
  result = (unsigned __int8)byte_610380;
  if ( byte_610380 )
  {
    result = (unsigned __int8)byte_610370 ^ 1u;
    if ( byte_610370 != 1 )
    {
      result = (unsigned int)(dword_610398 + dword_6103C4);
      dword_610398 += dword_6103C4;
    }
  }
  return result;
}
