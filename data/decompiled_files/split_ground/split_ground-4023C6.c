#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_4023C6()
{
  char *v1; // rax
  size_t i; // [rsp+8h] [rbp-18h]
  size_t n; // [rsp+10h] [rbp-10h]
  size_t v4; // [rsp+18h] [rbp-8h]

  if ( dest )
  {
    for ( i = ::n; i--; *((_BYTE *)qword_610690 + i) = s[*(_QWORD *)(8 * i + qword_6106B0)] )
    {
      *((_BYTE *)qword_610690 + i) = s[++*(_QWORD *)(8 * i + qword_6106B0)];
      if ( *((_BYTE *)qword_610690 + i) )
        return;
      *(_QWORD *)(8 * i + qword_6106B0) = 0LL;
    }
    v1 = gettext("output file suffixes exhausted");
    error(1, 0, v1);
  }
  else
  {
    n = strlen(src);
    v4 = ::n + n;
    if ( ::n + n + 1 < n )
      sub_408A4A();
    dest = (void *)sub_4088C8(v4 + 1);
    qword_610690 = (char *)dest + n;
    memcpy(dest, src, n);
    memset(qword_610690, *s, ::n);
    *((_BYTE *)dest + v4) = 0;
    qword_6106B0 = sub_4089B3(::n, 8LL);
  }
}
