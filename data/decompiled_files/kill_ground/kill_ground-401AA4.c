#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401AA4(int a1, char **a2)
{
  char *v2; // rax
  int *v3; // rax
  char **v5; // [rsp+0h] [rbp-30h]
  unsigned int v6; // [rsp+10h] [rbp-20h]
  __pid_t pid; // [rsp+14h] [rbp-1Ch]
  char *endptr; // [rsp+18h] [rbp-18h] BYREF
  char *nptr; // [rsp+20h] [rbp-10h]
  intmax_t v10; // [rsp+28h] [rbp-8h]

  v5 = a2;
  v6 = 0;
  nptr = *a2;
  do
  {
    *__errno_location() = 0;
    v10 = strtoimax(nptr, &endptr, 10);
    pid = v10;
    if ( *__errno_location() == 34 || pid != v10 || nptr == endptr || *endptr )
    {
      v2 = gettext("%s: invalid process id");
      error(0, 0, v2, nptr);
      v6 = 1;
    }
    else if ( kill(pid, a1) )
    {
      v3 = __errno_location();
      error(0, *v3, "%s", nptr);
      v6 = 1;
    }
    nptr = *++v5;
  }
  while ( nptr );
  return v6;
}
