#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_40526B()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_60A250;
  for ( i = 1; i < dword_60A230; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_60A400 )
  {
    free(ptr[1]);
    qword_60A240 = 256LL;
    off_60A248 = &unk_60A400;
  }
  if ( ptr != (void **)&qword_60A240 )
  {
    free(ptr);
    off_60A250 = &qword_60A240;
  }
  dword_60A230 = 1;
}
