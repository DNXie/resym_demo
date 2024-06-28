#include "/share/binary_recovery/clang-parser/defs.hh"
const char **__fastcall sub_408177(__int64 a1, const char *a2)
{
  const char **i; // [rsp+18h] [rbp-8h]
  const char **j; // [rsp+18h] [rbp-8h]
  const char **k; // [rsp+18h] [rbp-8h]

  for ( i = (const char **)&off_40EEE0; *i; i += 2 )
  {
    if ( !strcmp(a2, *i) )
      return i;
  }
  for ( j = (const char **)(a1 + 224); *j; j += 2 )
  {
    if ( !strcmp(a2, *j) )
      return j;
  }
  for ( k = (const char **)&off_40F000; *k; k += 2 )
  {
    if ( !strcmp(a2, *k) )
      return k;
  }
  return 0LL;
}
