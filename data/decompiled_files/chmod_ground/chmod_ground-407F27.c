#include "/share/binary_recovery/clang-parser/defs.hh"
char *__fastcall sub_407F27(__int64 a1, const void *a2, size_t a3)
{
  char *v4; // rbx

  v4 = (char *)malloc(a3 + 272);
  if ( !v4 )
    return 0LL;
  memmove(v4 + 264, a2, a3);
  v4[a3 + 264] = 0;
  *((_QWORD *)v4 + 12) = a3;
  *((_QWORD *)v4 + 10) = a1;
  *((_QWORD *)v4 + 7) = *(_QWORD *)(a1 + 32);
  *((_DWORD *)v4 + 16) = 0;
  *((_QWORD *)v4 + 3) = 0LL;
  *((_WORD *)v4 + 57) = 0;
  *((_WORD *)v4 + 58) = 3;
  *((_QWORD *)v4 + 4) = 0LL;
  *((_QWORD *)v4 + 5) = 0LL;
  return v4;
}
