#ifndef LINKER_H
#define LINKER_H

int load_program(jq_state *jq, struct locfile* src, block *out_block);
jv load_module_meta(jq_state *jq, jv modname);
jv resolve_module_meta(jq_state *jq, jv modname, jv lib_origin);

#endif
