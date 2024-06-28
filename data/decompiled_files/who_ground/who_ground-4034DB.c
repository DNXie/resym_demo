#include "/share/binary_recovery/clang-parser/defs.hh"
char *__fastcall sub_4034DB(const char *a1, int *a2)
{
  char *v2; // rax
  int v4; // [rsp+1Ch] [rbp-14h]
  struct addrinfo *pai; // [rsp+20h] [rbp-10h] BYREF
  char *v6; // [rsp+28h] [rbp-8h]

  v6 = 0LL;
  pai = 0LL;
  req.ai_flags = 2;
  v4 = getaddrinfo(a1, 0LL, &req, &pai);
  if ( v4 )
  {
    if ( a2 )
      *a2 = v4;
  }
  else
  {
    if ( pai->ai_canonname )
      v2 = pai->ai_canonname;
    else
      v2 = (char *)a1;
    v6 = strdup(v2);
    if ( !v6 && a2 )
      *a2 = -10;
    freeaddrinfo(pai);
  }
  return v6;
}
