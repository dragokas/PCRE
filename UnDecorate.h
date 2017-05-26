/*
  Add this code to pcre2.h or as #include to undecorate function names

  This file is prepared using regular expressions :)

  In Akelpad:
  Search:       (^|\n).*?_(pcre.*?)_16@(.*?)($|\r)
  Replace by:   \n#pragma comment(linker, "/export:\2=_\2_16@\3")
*/


#pragma comment(linker, "/export:pcre2_callout_enumerate=_pcre2_callout_enumerate_16@12")

#pragma comment(linker, "/export:pcre2_code_copy=_pcre2_code_copy_16@4")

#pragma comment(linker, "/export:pcre2_code_copy_with_tables=_pcre2_code_copy_with_tables_16@4")

#pragma comment(linker, "/export:pcre2_code_free=_pcre2_code_free_16@4")

#pragma comment(linker, "/export:pcre2_compile=_pcre2_compile_16@24")

#pragma comment(linker, "/export:pcre2_compile_context_copy=_pcre2_compile_context_copy_16@4")

#pragma comment(linker, "/export:pcre2_compile_context_create=_pcre2_compile_context_create_16@4")

#pragma comment(linker, "/export:pcre2_compile_context_free=_pcre2_compile_context_free_16@4")

#pragma comment(linker, "/export:pcre2_config=_pcre2_config_16@8")

#pragma comment(linker, "/export:pcre2_dfa_match=_pcre2_dfa_match_16@36")

#pragma comment(linker, "/export:pcre2_general_context_copy=_pcre2_general_context_copy_16@4")

#pragma comment(linker, "/export:pcre2_general_context_create=_pcre2_general_context_create_16@12")

#pragma comment(linker, "/export:pcre2_general_context_free=_pcre2_general_context_free_16@4")

#pragma comment(linker, "/export:pcre2_get_error_message=_pcre2_get_error_message_16@12")

#pragma comment(linker, "/export:pcre2_get_mark=_pcre2_get_mark_16@4")

#pragma comment(linker, "/export:pcre2_get_ovector_count=_pcre2_get_ovector_count_16@4")

#pragma comment(linker, "/export:pcre2_get_ovector_pointer=_pcre2_get_ovector_pointer_16@4")

#pragma comment(linker, "/export:pcre2_get_startchar=_pcre2_get_startchar_16@4")

#pragma comment(linker, "/export:pcre2_jit_compile=_pcre2_jit_compile_16@8")

#pragma comment(linker, "/export:pcre2_jit_free_unused_memory=_pcre2_jit_free_unused_memory_16@4")

#pragma comment(linker, "/export:pcre2_jit_match=_pcre2_jit_match_16@28")

#pragma comment(linker, "/export:pcre2_jit_stack_assign=_pcre2_jit_stack_assign_16@12")

#pragma comment(linker, "/export:pcre2_jit_stack_create=_pcre2_jit_stack_create_16@12")

#pragma comment(linker, "/export:pcre2_jit_stack_free=_pcre2_jit_stack_free_16@4")

#pragma comment(linker, "/export:pcre2_maketables=_pcre2_maketables_16@4")

#pragma comment(linker, "/export:pcre2_match=_pcre2_match_16@28")

#pragma comment(linker, "/export:pcre2_match_context_copy=_pcre2_match_context_copy_16@4")

#pragma comment(linker, "/export:pcre2_match_context_create=_pcre2_match_context_create_16@4")

#pragma comment(linker, "/export:pcre2_match_context_free=_pcre2_match_context_free_16@4")

#pragma comment(linker, "/export:pcre2_match_data_create=_pcre2_match_data_create_16@8")

#pragma comment(linker, "/export:pcre2_match_data_create_from_pattern=_pcre2_match_data_create_from_pattern_16@8")

#pragma comment(linker, "/export:pcre2_match_data_free=_pcre2_match_data_free_16@4")

#pragma comment(linker, "/export:pcre2_pattern_info=_pcre2_pattern_info_16@12")

#pragma comment(linker, "/export:pcre2_serialize_decode=_pcre2_serialize_decode_16@16")

#pragma comment(linker, "/export:pcre2_serialize_encode=_pcre2_serialize_encode_16@20")

#pragma comment(linker, "/export:pcre2_serialize_free=_pcre2_serialize_free_16@4")

#pragma comment(linker, "/export:pcre2_serialize_get_number_of_codes=_pcre2_serialize_get_number_of_codes_16@4")

#pragma comment(linker, "/export:pcre2_set_bsr=_pcre2_set_bsr_16@8")

#pragma comment(linker, "/export:pcre2_set_callout=_pcre2_set_callout_16@12")

#pragma comment(linker, "/export:pcre2_set_character_tables=_pcre2_set_character_tables_16@8")

#pragma comment(linker, "/export:pcre2_set_compile_recursion_guard=_pcre2_set_compile_recursion_guard_16@12")

#pragma comment(linker, "/export:pcre2_set_match_limit=_pcre2_set_match_limit_16@8")

#pragma comment(linker, "/export:pcre2_set_max_pattern_length=_pcre2_set_max_pattern_length_16@8")

#pragma comment(linker, "/export:pcre2_set_newline=_pcre2_set_newline_16@8")

#pragma comment(linker, "/export:pcre2_set_offset_limit=_pcre2_set_offset_limit_16@8")

#pragma comment(linker, "/export:pcre2_set_parens_nest_limit=_pcre2_set_parens_nest_limit_16@8")

#pragma comment(linker, "/export:pcre2_set_recursion_limit=_pcre2_set_recursion_limit_16@8")

#pragma comment(linker, "/export:pcre2_set_recursion_memory_management=_pcre2_set_recursion_memory_management_16@16")

#pragma comment(linker, "/export:pcre2_substitute=_pcre2_substitute_16@44")

#pragma comment(linker, "/export:pcre2_substring_copy_byname=_pcre2_substring_copy_byname_16@16")

#pragma comment(linker, "/export:pcre2_substring_copy_bynumber=_pcre2_substring_copy_bynumber_16@16")

#pragma comment(linker, "/export:pcre2_substring_free=_pcre2_substring_free_16@4")

#pragma comment(linker, "/export:pcre2_substring_get_byname=_pcre2_substring_get_byname_16@16")

#pragma comment(linker, "/export:pcre2_substring_get_bynumber=_pcre2_substring_get_bynumber_16@16")

#pragma comment(linker, "/export:pcre2_substring_length_byname=_pcre2_substring_length_byname_16@12")

#pragma comment(linker, "/export:pcre2_substring_length_bynumber=_pcre2_substring_length_bynumber_16@12")

#pragma comment(linker, "/export:pcre2_substring_list_free=_pcre2_substring_list_free_16@4")

#pragma comment(linker, "/export:pcre2_substring_list_get=_pcre2_substring_list_get_16@12")

#pragma comment(linker, "/export:pcre2_substring_nametable_scan=_pcre2_substring_nametable_scan_16@16")

#pragma comment(linker, "/export:pcre2_substring_number_from_name=_pcre2_substring_number_from_name_16@8")
