#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_411F0C(__int64 a1, const char *a2)
{
  char *v2; // r12
  const char *v3; // r12
  size_t v4; // r13
  __int64 result; // rax

  *((_QWORD *)a2 + 9) = *((_QWORD *)a2 + 12);
  memmove(*(void **)(a1 + 32), a2 + 264, *((_QWORD *)a2 + 9) + 1LL);
  v2 = strrchr(a2 + 264, 47);
  if ( v2 && (a2 + 264 != v2 || v2[1]) )
  {
    v3 = v2 + 1;
    v4 = strlen(v3);
    memmove((void *)(a2 + 264), v3, v4 + 1);
    *((_QWORD *)a2 + 12) = v4;
  }
  *((_QWORD *)a2 + 7) = *(_QWORD *)(a1 + 32);
  result = *((_QWORD *)a2 + 7);
  *((_QWORD *)a2 + 6) = result;
  return result;
}
