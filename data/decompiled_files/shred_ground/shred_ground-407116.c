#include "/share/binary_recovery/clang-parser/defs.hh"
size_t __fastcall sub_407116(__int64 a1, char *a2, size_t a3)
{
  size_t result; // rax
  int *v4; // rbx
  int v5; // eax
  int v8; // [rsp+24h] [rbp-1Ch]
  size_t v9; // [rsp+28h] [rbp-18h]

  while ( 1 )
  {
    v9 = fread_unlocked(a2, 1uLL, a3, *(FILE **)a1);
    v8 = *__errno_location();
    a2 += v9;
    result = v9;
    a3 -= v9;
    if ( !a3 )
      break;
    v4 = __errno_location();
    if ( ferror_unlocked(*(FILE **)a1) )
      v5 = v8;
    else
      v5 = 0;
    *v4 = v5;
    (*(void (__fastcall **)(_QWORD))(a1 + 8))(*(_QWORD *)(a1 + 16));
  }
  return result;
}
