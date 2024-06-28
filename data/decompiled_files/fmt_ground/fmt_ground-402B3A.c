#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402B3A(__int64 a1)
{
  __int64 result; // rax
  __int64 i; // [rsp+18h] [rbp-8h]

  sub_402B91(&unk_609640, (unsigned int)dword_613290);
  for ( i = qword_609660; ; i = *(_QWORD *)(i + 32) )
  {
    result = i;
    if ( i == a1 )
      break;
    sub_402B91(i, (unsigned int)dword_613294);
  }
  return result;
}
