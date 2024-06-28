#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_40CFAC(__int64 a1, __int64 a2, size_t a3)
{
  char *v3; // rax
  __int64 i; // [rsp+20h] [rbp-10h]
  void *s1; // [rsp+28h] [rbp-8h]

  s1 = 0LL;
  v3 = gettext("Valid arguments are:");
  fprintf(stderr, v3);
  for ( i = 0LL; *(_QWORD *)(8 * i + a1); ++i )
  {
    if ( i && !memcmp(s1, (const void *)(i * a3 + a2), a3) )
    {
      fprintf(stderr, ", `%s'", *(const char **)(8 * i + a1));
    }
    else
    {
      fprintf(stderr, "\n  - `%s'", *(const char **)(8 * i + a1));
      s1 = (void *)(i * a3 + a2);
    }
  }
  return putc_unlocked(10, stderr);
}
