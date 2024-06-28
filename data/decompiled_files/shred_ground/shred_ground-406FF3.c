#include "/share/binary_recovery/clang-parser/defs.hh"
char *__fastcall sub_406FF3(__int64 a1, size_t a2)
{
  size_t v3; // rax
  FILE *stream; // [rsp+10h] [rbp-10h]
  char *v5; // [rsp+18h] [rbp-8h]

  if ( !a2 )
    return (char *)sub_406D47(0LL, 0LL);
  stream = 0LL;
  if ( a1 )
  {
    stream = (FILE *)sub_409AAD(a1, "rb");
    if ( !stream )
      return 0LL;
  }
  v5 = (char *)sub_406D47((__int64)stream, a1);
  if ( stream )
  {
    v3 = 4096LL;
    if ( a2 <= 0x1000 )
      v3 = a2;
    setvbuf(stream, v5 + 24, 0, v3);
  }
  else
  {
    *((_QWORD *)v5 + 3) = 0LL;
    sub_406D8E(v5 + 32, 0x800uLL, a2);
    sub_407B40(v5 + 32);
  }
  return v5;
}
