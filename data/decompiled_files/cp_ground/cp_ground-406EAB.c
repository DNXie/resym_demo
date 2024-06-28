#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_406EAB(const char *a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // r12
  __int64 v4; // rbx
  char *v5; // rax
  __int64 v6; // r12
  __int64 v7; // rbx
  char *v8; // rax
  char v10; // [rsp+10h] [rbp-40h] BYREF
  _BYTE v11[23]; // [rsp+11h] [rbp-3Fh] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-28h]

  v12 = __readfsqword(0x28u);
  if ( !sub_406E5E(a1, *(_DWORD *)(a2 + 24)) )
  {
    sub_40BA71(*(unsigned int *)(a2 + 24), &v10);
    v11[9] = 0;
    v2 = *(_DWORD *)(a2 + 24) & 0xFFF;
    v3 = sub_40E491(a1);
    v4 = qword_61D900;
    v5 = gettext("%s: try to overwrite %s, overriding mode %04lo (%s)? ");
    fprintf(stderr, v5, v4, v3, v2, v11);
  }
  else
  {
    v6 = sub_40E491(a1);
    v7 = qword_61D900;
    v8 = gettext("%s: overwrite %s? ");
    fprintf(stderr, v8, v7, v6);
  }
  return __readfsqword(0x28u) ^ v12;
}
