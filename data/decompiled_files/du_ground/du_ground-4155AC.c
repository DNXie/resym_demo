#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_4155AC(unsigned __int64 a1)
{
  void *v2; // [rsp+20h] [rbp-10h]
  unsigned __int64 v3; // [rsp+20h] [rbp-10h]

  if ( a1 + 16 < a1 )
    return 0LL;
  v2 = malloc(a1 + 16);
  if ( !v2 )
    return 0LL;
  v3 = (unsigned __int64)v2 + 16;
  *(_DWORD *)(v3 - 4) = 336984906;
  *(_QWORD *)(v3 - 16) = qword_61B600[v3 % 0x101];
  qword_61B600[v3 % 0x101] = v3;
  return v3;
}
