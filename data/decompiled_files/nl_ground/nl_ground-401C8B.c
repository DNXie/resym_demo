#include "/share/binary_recovery/clang-parser/defs.hh"
size_t sub_401C8B()
{
  int v0; // eax
  int v1; // eax
  char *v2; // rbx
  int *v3; // rax

  v0 = *(char *)qword_609300;
  if ( v0 == 110 )
    goto LABEL_21;
  if ( v0 > 110 )
  {
    if ( v0 != 112 )
    {
      if ( v0 != 116 )
        return fwrite_unlocked(s1, 1uLL, n, stdout);
      if ( n <= 1 )
        goto LABEL_21;
LABEL_19:
      sub_401B77();
      return fwrite_unlocked(s1, 1uLL, n, stdout);
    }
    v1 = re_search(buffer, s1, n - 1, 0, n - 1, 0LL);
    if ( v1 == -2 )
    {
      v2 = gettext("error in regular expression search");
      v3 = __errno_location();
      error(1, *v3, v2);
    }
    else if ( v1 != -1 )
    {
      goto LABEL_19;
    }
LABEL_21:
    fputs_unlocked(s, stdout);
    return fwrite_unlocked(s1, 1uLL, n, stdout);
  }
  if ( v0 != 97 )
    return fwrite_unlocked(s1, 1uLL, n, stdout);
  if ( qword_609230 <= 1 )
    goto LABEL_19;
  if ( n <= 1 && ++qword_609750 != qword_609230 )
    goto LABEL_21;
  sub_401B77();
  qword_609750 = 0LL;
  return fwrite_unlocked(s1, 1uLL, n, stdout);
}
