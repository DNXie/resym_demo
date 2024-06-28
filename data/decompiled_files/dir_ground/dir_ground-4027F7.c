#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_4027F7()
{
  if ( (unsigned int)(LODWORD(stru_61D8C0.next_free) - LODWORD(stru_61D8C0.object_base)) <= 0xF )
    __assert_fail(
      "sizeof (struct dev_ino) <= __extension__ ({ struct obstack const *__o = (&dev_ino_obstack); (unsigned) (__o->next_"
      "free - __o->object_base); })",
      "../../src/src/ls.c",
      0x3D5u,
      "dev_ino_pop");
  if ( stru_61D8C0.chunk_limit - stru_61D8C0.next_free < -16 )
    _obstack_newchunk(&stru_61D8C0, -16);
  stru_61D8C0.next_free -= 16;
  return *(_QWORD *)stru_61D8C0.next_free;
}
