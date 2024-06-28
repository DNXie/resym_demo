#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_4035DF()
{
  __int64 v0; // rbx
  char *v1; // rax
  __int64 v2; // rbx
  char *v3; // rax
  unsigned __int64 v4; // [rsp+8h] [rbp-28h] BYREF
  struct passwd *v5; // [rsp+10h] [rbp-20h]
  struct group *v6; // [rsp+18h] [rbp-18h]

  if ( name )
  {
    v5 = getpwnam(name);
    if ( v5 )
    {
      owner = v5->pw_uid;
    }
    else
    {
      if ( (unsigned int)sub_412934(name, 0LL, 0LL, &v4, 0LL) || v4 > 0xFFFFFFFF )
      {
        v0 = sub_40E392(name);
        v1 = gettext("invalid user %s");
        error(1, 0, v1, v0);
      }
      owner = v4;
    }
    endpwent();
  }
  else
  {
    owner = -1;
  }
  if ( qword_620498 )
  {
    v6 = getgrnam(qword_620498);
    if ( v6 )
    {
      group = v6->gr_gid;
    }
    else
    {
      if ( (unsigned int)sub_412934(qword_620498, 0LL, 0LL, &v4, 0LL) || v4 > 0xFFFFFFFF )
      {
        v2 = sub_40E392(qword_620498);
        v3 = gettext("invalid group %s");
        error(1, 0, v3, v2);
      }
      group = v4;
    }
    endgrent();
  }
  else
  {
    group = -1;
  }
}
