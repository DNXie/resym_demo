#include "/share/binary_recovery/clang-parser/defs.hh"
size_t __fastcall sub_401988(char *a1, __int64 a2)
{
  size_t result; // rax
  char *src; // [rsp+8h] [rbp-18h]
  size_t v4; // [rsp+10h] [rbp-10h]
  size_t n; // [rsp+18h] [rbp-8h]

  src = a1;
  v4 = a2 - (_QWORD)a1;
  n = 0x2000 - ::n;
  if ( a1 )
  {
    while ( v4 >= n )
    {
      memcpy((char *)&unk_608440 + ::n, src, n);
      v4 -= n;
      src += n;
      fwrite_unlocked(&unk_608440, 1uLL, 0x2000uLL, stdout);
      ::n = 0LL;
      n = 0x2000LL;
    }
    memcpy((char *)&unk_608440 + ::n, src, v4);
    result = ::n + v4;
    ::n += v4;
  }
  else
  {
    result = fwrite_unlocked(&unk_608440, 1uLL, ::n, stdout);
    ::n = 0LL;
  }
  return result;
}
