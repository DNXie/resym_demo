#include "/share/binary_recovery/clang-parser/defs.hh"
const char *sub_40A0EB()
{
  const char *s1; // [rsp+0h] [rbp-10h]
  char *s2; // [rsp+8h] [rbp-8h]
  char *s2a; // [rsp+8h] [rbp-8h]

  s1 = nl_langinfo(14);
  if ( !s1 )
    s1 = (const char *)&unk_40DE98;
  for ( s2 = (char *)sub_409C05(); *s2; s2 = &s2a[strlen(s2a) + 1] )
  {
    if ( !strcmp(s1, s2) || *s2 == 42 && !s2[1] )
    {
      s1 = &s2[strlen(s2) + 1];
      break;
    }
    s2a = &s2[strlen(s2) + 1];
  }
  if ( !*s1 )
    s1 = "ASCII";
  return s1;
}