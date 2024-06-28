#include "/share/binary_recovery/clang-parser/defs.hh"
const char *__fastcall sub_408B8A(void *a1)
{
  const char *v1; // rax
  const char *s; // [rsp+10h] [rbp-10h]
  size_t n; // [rsp+18h] [rbp-8h]

  s = getenv("TZ");
  if ( s )
  {
    n = strlen(s) + 1;
    if ( n > 0x64 )
      v1 = (const char *)sub_40C5CF(s, n);
    else
      v1 = (const char *)memcpy(a1, s, n);
    s = v1;
  }
  return s;
}
