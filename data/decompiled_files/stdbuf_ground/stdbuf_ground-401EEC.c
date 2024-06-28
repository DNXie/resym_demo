#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_401EEC(const char *a1)
{
  char *v1; // [rsp+18h] [rbp-18h]
  char *i; // [rsp+20h] [rbp-10h]
  char *name; // [rsp+28h] [rbp-8h]

  if ( strchr(a1, 47) )
  {
    ptr = (void *)sub_402B0A(a1);
  }
  else
  {
    v1 = (char *)sub_4062C3("/proc/self/exe");
    if ( v1 )
    {
      ptr = (void *)sub_402B0A(v1);
    }
    else
    {
      v1 = getenv("PATH");
      if ( v1 )
      {
        v1 = (char *)sub_406261(v1);
        for ( i = strtok(v1, ":"); i; i = strtok(0LL, ":") )
        {
          name = (char *)sub_402D0F(i, a1, 0LL);
          if ( !access(name, 1) )
          {
            ptr = (void *)sub_402B0A(name);
            free(name);
            break;
          }
          free(name);
        }
      }
    }
    free(v1);
  }
}
