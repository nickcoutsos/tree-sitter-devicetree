#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 177
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 97
#define ALIAS_COUNT 0
#define TOKEN_COUNT 59
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 22

enum {
  anon_sym_SLASHdts_DASHv1_SLASH = 1,
  anon_sym_SEMI = 2,
  anon_sym_SLASHmemreserve_SLASH = 3,
  sym_comment = 4,
  sym__label_name = 5,
  sym__node_path = 6,
  sym__node_or_property = 7,
  sym__property_with_hash = 8,
  sym__property_starts_with_number = 9,
  sym_unit_address = 10,
  anon_sym_AMP = 11,
  anon_sym_AMP_LBRACE = 12,
  anon_sym_AT = 13,
  anon_sym_RBRACE = 14,
  anon_sym_COLON = 15,
  anon_sym_LBRACE = 16,
  anon_sym_EQ = 17,
  anon_sym_COMMA = 18,
  anon_sym_SLASHdelete_DASHnode_SLASH = 19,
  anon_sym_SLASHdelete_DASHproperty_SLASH = 20,
  anon_sym_LT = 21,
  anon_sym_GT = 22,
  anon_sym_DQUOTE = 23,
  aux_sym_string_literal_token1 = 24,
  sym_escape_sequence = 25,
  sym_system_lib_string = 26,
  anon_sym_LBRACK = 27,
  anon_sym_RBRACK = 28,
  sym__byte_string_item = 29,
  sym_integer_literal = 30,
  sym_identifier = 31,
  anon_sym_LPAREN = 32,
  anon_sym_RPAREN = 33,
  anon_sym_QMARK = 34,
  anon_sym_BANG = 35,
  anon_sym_TILDE = 36,
  anon_sym_DASH = 37,
  anon_sym_PLUS = 38,
  anon_sym_STAR = 39,
  anon_sym_SLASH = 40,
  anon_sym_PERCENT = 41,
  anon_sym_PIPE_PIPE = 42,
  anon_sym_AMP_AMP = 43,
  anon_sym_PIPE = 44,
  anon_sym_CARET = 45,
  anon_sym_EQ_EQ = 46,
  anon_sym_BANG_EQ = 47,
  anon_sym_GT_EQ = 48,
  anon_sym_LT_EQ = 49,
  anon_sym_LT_LT = 50,
  anon_sym_GT_GT = 51,
  anon_sym_SLASHinclude = 52,
  aux_sym_preproc_include_token1 = 53,
  anon_sym_LF = 54,
  aux_sym_preproc_def_token1 = 55,
  anon_sym_LPAREN2 = 56,
  anon_sym_DOT_DOT_DOT = 57,
  sym_preproc_arg = 58,
  sym_document = 59,
  sym__top_level_item = 60,
  sym_file_version = 61,
  sym_memory_reservation = 62,
  sym_reference = 63,
  sym__label_reference = 64,
  sym__node_reference = 65,
  sym_labeled_item = 66,
  sym_node = 67,
  sym_property = 68,
  sym__node_members = 69,
  sym_delete_node = 70,
  sym_delete_property = 71,
  sym__property_value = 72,
  sym_integer_cells = 73,
  sym__integer_cell_items = 74,
  sym_string_literal = 75,
  sym_byte_string_literal = 76,
  sym__expression = 77,
  sym_call_expression = 78,
  sym_argument_list = 79,
  sym_conditional_expression = 80,
  sym_unary_expression = 81,
  sym_binary_expression = 82,
  sym_dtsi_include = 83,
  sym_preproc_include = 84,
  sym_preproc_def = 85,
  sym_preproc_function_def = 86,
  sym_preproc_params = 87,
  aux_sym_document_repeat1 = 88,
  aux_sym_labeled_node_repeat1 = 89,
  aux_sym_node_repeat1 = 90,
  aux_sym_property_repeat1 = 91,
  aux_sym_integer_cells_repeat1 = 92,
  aux_sym_string_literal_repeat1 = 93,
  aux_sym_byte_string_literal_repeat1 = 94,
  aux_sym_argument_list_repeat1 = 95,
  aux_sym_preproc_params_repeat1 = 96,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SLASHdts_DASHv1_SLASH] = "/dts-v1/",
  [anon_sym_SEMI] = ";",
  [anon_sym_SLASHmemreserve_SLASH] = "/memreserve/",
  [sym_comment] = "comment",
  [sym__label_name] = "identifier",
  [sym__node_path] = "identifier",
  [sym__node_or_property] = "identifier",
  [sym__property_with_hash] = "identifier",
  [sym__property_starts_with_number] = "identifier",
  [sym_unit_address] = "unit_address",
  [anon_sym_AMP] = "&",
  [anon_sym_AMP_LBRACE] = "&{",
  [anon_sym_AT] = "@",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACE] = "{",
  [anon_sym_EQ] = "=",
  [anon_sym_COMMA] = ",",
  [anon_sym_SLASHdelete_DASHnode_SLASH] = "/delete-node/",
  [anon_sym_SLASHdelete_DASHproperty_SLASH] = "/delete-property/",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_system_lib_string] = "system_lib_string",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym__byte_string_item] = "_byte_string_item",
  [sym_integer_literal] = "integer_literal",
  [sym_identifier] = "identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_QMARK] = "\?",
  [anon_sym_BANG] = "!",
  [anon_sym_TILDE] = "~",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_SLASHinclude] = "/include",
  [aux_sym_preproc_include_token1] = "#include",
  [anon_sym_LF] = "\n",
  [aux_sym_preproc_def_token1] = "#define",
  [anon_sym_LPAREN2] = "(",
  [anon_sym_DOT_DOT_DOT] = "...",
  [sym_preproc_arg] = "preproc_arg",
  [sym_document] = "document",
  [sym__top_level_item] = "_top_level_item",
  [sym_file_version] = "file_version",
  [sym_memory_reservation] = "memory_reservation",
  [sym_reference] = "reference",
  [sym__label_reference] = "_label_reference",
  [sym__node_reference] = "_node_reference",
  [sym_labeled_item] = "labeled_item",
  [sym_node] = "node",
  [sym_property] = "property",
  [sym__node_members] = "_node_members",
  [sym_delete_node] = "delete_node",
  [sym_delete_property] = "delete_property",
  [sym__property_value] = "_property_value",
  [sym_integer_cells] = "integer_cells",
  [sym__integer_cell_items] = "_integer_cell_items",
  [sym_string_literal] = "string_literal",
  [sym_byte_string_literal] = "byte_string_literal",
  [sym__expression] = "_expression",
  [sym_call_expression] = "call_expression",
  [sym_argument_list] = "argument_list",
  [sym_conditional_expression] = "conditional_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_dtsi_include] = "dtsi_include",
  [sym_preproc_include] = "preproc_include",
  [sym_preproc_def] = "preproc_def",
  [sym_preproc_function_def] = "preproc_function_def",
  [sym_preproc_params] = "preproc_params",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_labeled_node_repeat1] = "labeled_node_repeat1",
  [aux_sym_node_repeat1] = "node_repeat1",
  [aux_sym_property_repeat1] = "property_repeat1",
  [aux_sym_integer_cells_repeat1] = "integer_cells_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_byte_string_literal_repeat1] = "byte_string_literal_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_preproc_params_repeat1] = "preproc_params_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SLASHdts_DASHv1_SLASH] = anon_sym_SLASHdts_DASHv1_SLASH,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_SLASHmemreserve_SLASH] = anon_sym_SLASHmemreserve_SLASH,
  [sym_comment] = sym_comment,
  [sym__label_name] = sym_identifier,
  [sym__node_path] = sym_identifier,
  [sym__node_or_property] = sym_identifier,
  [sym__property_with_hash] = sym_identifier,
  [sym__property_starts_with_number] = sym_identifier,
  [sym_unit_address] = sym_unit_address,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_AMP_LBRACE] = anon_sym_AMP_LBRACE,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SLASHdelete_DASHnode_SLASH] = anon_sym_SLASHdelete_DASHnode_SLASH,
  [anon_sym_SLASHdelete_DASHproperty_SLASH] = anon_sym_SLASHdelete_DASHproperty_SLASH,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_system_lib_string] = sym_system_lib_string,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym__byte_string_item] = sym__byte_string_item,
  [sym_integer_literal] = sym_integer_literal,
  [sym_identifier] = sym_identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_SLASHinclude] = anon_sym_SLASHinclude,
  [aux_sym_preproc_include_token1] = aux_sym_preproc_include_token1,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_preproc_def_token1] = aux_sym_preproc_def_token1,
  [anon_sym_LPAREN2] = anon_sym_LPAREN,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [sym_preproc_arg] = sym_preproc_arg,
  [sym_document] = sym_document,
  [sym__top_level_item] = sym__top_level_item,
  [sym_file_version] = sym_file_version,
  [sym_memory_reservation] = sym_memory_reservation,
  [sym_reference] = sym_reference,
  [sym__label_reference] = sym__label_reference,
  [sym__node_reference] = sym__node_reference,
  [sym_labeled_item] = sym_labeled_item,
  [sym_node] = sym_node,
  [sym_property] = sym_property,
  [sym__node_members] = sym__node_members,
  [sym_delete_node] = sym_delete_node,
  [sym_delete_property] = sym_delete_property,
  [sym__property_value] = sym__property_value,
  [sym_integer_cells] = sym_integer_cells,
  [sym__integer_cell_items] = sym__integer_cell_items,
  [sym_string_literal] = sym_string_literal,
  [sym_byte_string_literal] = sym_byte_string_literal,
  [sym__expression] = sym__expression,
  [sym_call_expression] = sym_call_expression,
  [sym_argument_list] = sym_argument_list,
  [sym_conditional_expression] = sym_conditional_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_dtsi_include] = sym_dtsi_include,
  [sym_preproc_include] = sym_preproc_include,
  [sym_preproc_def] = sym_preproc_def,
  [sym_preproc_function_def] = sym_preproc_function_def,
  [sym_preproc_params] = sym_preproc_params,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_labeled_node_repeat1] = aux_sym_labeled_node_repeat1,
  [aux_sym_node_repeat1] = aux_sym_node_repeat1,
  [aux_sym_property_repeat1] = aux_sym_property_repeat1,
  [aux_sym_integer_cells_repeat1] = aux_sym_integer_cells_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_byte_string_literal_repeat1] = aux_sym_byte_string_literal_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_preproc_params_repeat1] = aux_sym_preproc_params_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SLASHdts_DASHv1_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASHmemreserve_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__label_name] = {
    .visible = true,
    .named = true,
  },
  [sym__node_path] = {
    .visible = true,
    .named = true,
  },
  [sym__node_or_property] = {
    .visible = true,
    .named = true,
  },
  [sym__property_with_hash] = {
    .visible = true,
    .named = true,
  },
  [sym__property_starts_with_number] = {
    .visible = true,
    .named = true,
  },
  [sym_unit_address] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASHdelete_DASHnode_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASHdelete_DASHproperty_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_system_lib_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym__byte_string_item] = {
    .visible = false,
    .named = true,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASHinclude] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_preproc_include_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_preproc_def_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_preproc_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__top_level_item] = {
    .visible = false,
    .named = true,
  },
  [sym_file_version] = {
    .visible = true,
    .named = true,
  },
  [sym_memory_reservation] = {
    .visible = true,
    .named = true,
  },
  [sym_reference] = {
    .visible = true,
    .named = true,
  },
  [sym__label_reference] = {
    .visible = false,
    .named = true,
  },
  [sym__node_reference] = {
    .visible = false,
    .named = true,
  },
  [sym_labeled_item] = {
    .visible = true,
    .named = true,
  },
  [sym_node] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym__node_members] = {
    .visible = false,
    .named = true,
  },
  [sym_delete_node] = {
    .visible = true,
    .named = true,
  },
  [sym_delete_property] = {
    .visible = true,
    .named = true,
  },
  [sym__property_value] = {
    .visible = false,
    .named = true,
  },
  [sym_integer_cells] = {
    .visible = true,
    .named = true,
  },
  [sym__integer_cell_items] = {
    .visible = false,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_byte_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_dtsi_include] = {
    .visible = true,
    .named = true,
  },
  [sym_preproc_include] = {
    .visible = true,
    .named = true,
  },
  [sym_preproc_def] = {
    .visible = true,
    .named = true,
  },
  [sym_preproc_function_def] = {
    .visible = true,
    .named = true,
  },
  [sym_preproc_params] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_labeled_node_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_node_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_property_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_cells_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_byte_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_preproc_params_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_address = 1,
  field_alternative = 2,
  field_argument = 3,
  field_arguments = 4,
  field_condition = 5,
  field_consequence = 6,
  field_function = 7,
  field_item = 8,
  field_label = 9,
  field_left = 10,
  field_name = 11,
  field_operator = 12,
  field_parameters = 13,
  field_path = 14,
  field_right = 15,
  field_value = 16,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_address] = "address",
  [field_alternative] = "alternative",
  [field_argument] = "argument",
  [field_arguments] = "arguments",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_function] = "function",
  [field_item] = "item",
  [field_label] = "label",
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_parameters] = "parameters",
  [field_path] = "path",
  [field_right] = "right",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 1},
  [9] = {.index = 11, .length = 1},
  [10] = {.index = 12, .length = 2},
  [11] = {.index = 14, .length = 2},
  [12] = {.index = 16, .length = 2},
  [13] = {.index = 18, .length = 3},
  [14] = {.index = 21, .length = 3},
  [15] = {.index = 24, .length = 3},
  [16] = {.index = 27, .length = 3},
  [17] = {.index = 30, .length = 2},
  [18] = {.index = 32, .length = 4},
  [19] = {.index = 36, .length = 2},
  [20] = {.index = 38, .length = 3},
  [21] = {.index = 41, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_label, 0, .inherited = true},
  [1] =
    {field_address, 0, .inherited = true},
    {field_path, 0, .inherited = true},
  [3] =
    {field_label, 0},
  [4] =
    {field_label, 1},
  [5] =
    {field_path, 1},
  [6] =
    {field_item, 1},
    {field_label, 0, .inherited = true},
  [8] =
    {field_label, 0, .inherited = true},
    {field_label, 1, .inherited = true},
  [10] =
    {field_name, 1},
  [11] =
    {field_name, 0},
  [12] =
    {field_name, 1},
    {field_value, 2},
  [14] =
    {field_name, 1},
    {field_parameters, 2},
  [16] =
    {field_name, 0},
    {field_value, 1},
  [18] =
    {field_address, 2},
    {field_address, 3},
    {field_path, 1},
  [21] =
    {field_name, 1},
    {field_parameters, 2},
    {field_value, 3},
  [24] =
    {field_name, 0},
    {field_value, 1},
    {field_value, 2},
  [27] =
    {field_address, 1},
    {field_address, 2},
    {field_name, 0},
  [30] =
    {field_arguments, 1},
    {field_function, 0},
  [32] =
    {field_name, 0},
    {field_value, 1},
    {field_value, 2},
    {field_value, 3},
  [36] =
    {field_argument, 1},
    {field_operator, 0},
  [38] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [41] =
    {field_alternative, 4},
    {field_condition, 0},
    {field_consequence, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(72);
      if (lookahead == '!') ADVANCE(182);
      if (lookahead == '"') ADVANCE(159);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '%') ADVANCE(188);
      if (lookahead == '&') ADVANCE(145);
      if (lookahead == '(') ADVANCE(204);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == '*') ADVANCE(186);
      if (lookahead == '+') ADVANCE(185);
      if (lookahead == ',') ADVANCE(154);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '0') ADVANCE(137);
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == '=') ADVANCE(153);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead == '?') ADVANCE(180);
      if (lookahead == '@') ADVANCE(148);
      if (lookahead == '[') ADVANCE(171);
      if (lookahead == '\\') SKIP(67)
      if (lookahead == ']') ADVANCE(172);
      if (lookahead == '^') ADVANCE(192);
      if (lookahead == '_') ADVANCE(87);
      if (lookahead == '{') ADVANCE(151);
      if (lookahead == '|') ADVANCE(191);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '~') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(70)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(24)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(27)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(28)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(25)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(30)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(30)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '"') ADVANCE(159);
      if (lookahead == '/') ADVANCE(160);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead != 0) ADVANCE(164);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(166);
      if (lookahead == '\r') ADVANCE(165);
      if (lookahead == 'U') ADVANCE(64);
      if (lookahead == 'u') ADVANCE(60);
      if (lookahead == 'x') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '(') ADVANCE(204);
      if (lookahead == '/') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(208);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '/') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(208);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(36)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(36)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(19)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(202);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(37)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(37)
      if (lookahead == '\r') SKIP(20)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(38)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(38)
      if (lookahead == '\r') SKIP(22)
      END_STATE();
    case 24:
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '%') ADVANCE(188);
      if (lookahead == '&') ADVANCE(145);
      if (lookahead == '(') ADVANCE(178);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == '*') ADVANCE(186);
      if (lookahead == '+') ADVANCE(185);
      if (lookahead == ',') ADVANCE(154);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '0') ADVANCE(174);
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == '=') ADVANCE(40);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead == '?') ADVANCE(180);
      if (lookahead == '@') ADVANCE(148);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '^') ADVANCE(192);
      if (lookahead == '{') ADVANCE(151);
      if (lookahead == '|') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 25:
      if (lookahead == '!') ADVANCE(181);
      if (lookahead == '"') ADVANCE(159);
      if (lookahead == '(') ADVANCE(178);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == '+') ADVANCE(185);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '0') ADVANCE(174);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '~') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(159);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(135);
      if (lookahead == '&') ADVANCE(146);
      if (lookahead == '/') ADVANCE(89);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '_') ADVANCE(83);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('+' <= lookahead && lookahead <= '.')) ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(135);
      if (lookahead == '&') ADVANCE(146);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '_') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('+' <= lookahead && lookahead <= '.')) ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(135);
      if (('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '&') ADVANCE(146);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == '_') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '/') ADVANCE(79);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '/') ADVANCE(76);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == '*') ADVANCE(32);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(205);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == ']') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(173);
      END_STATE();
    case 37:
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '\\') SKIP(21)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(144);
      END_STATE();
    case 38:
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '\\') SKIP(23)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 39:
      if (lookahead == '=') ADVANCE(194);
      END_STATE();
    case 40:
      if (lookahead == '=') ADVANCE(193);
      END_STATE();
    case 41:
      if (lookahead == '>') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '>') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 49:
      if (lookahead == 'f') ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 54:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(176);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(165);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 65:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 66:
      if (eof) ADVANCE(72);
      if (lookahead == '\n') SKIP(70)
      END_STATE();
    case 67:
      if (eof) ADVANCE(72);
      if (lookahead == '\n') SKIP(70)
      if (lookahead == '\r') SKIP(66)
      END_STATE();
    case 68:
      if (eof) ADVANCE(72);
      if (lookahead == '\n') SKIP(71)
      END_STATE();
    case 69:
      if (eof) ADVANCE(72);
      if (lookahead == '\n') SKIP(71)
      if (lookahead == '\r') SKIP(68)
      END_STATE();
    case 70:
      if (eof) ADVANCE(72);
      if (lookahead == '!') ADVANCE(182);
      if (lookahead == '"') ADVANCE(159);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '%') ADVANCE(188);
      if (lookahead == '&') ADVANCE(145);
      if (lookahead == '(') ADVANCE(178);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == '*') ADVANCE(186);
      if (lookahead == '+') ADVANCE(185);
      if (lookahead == ',') ADVANCE(154);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '0') ADVANCE(137);
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == '=') ADVANCE(153);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead == '?') ADVANCE(180);
      if (lookahead == '@') ADVANCE(148);
      if (lookahead == '[') ADVANCE(171);
      if (lookahead == '\\') SKIP(67)
      if (lookahead == ']') ADVANCE(172);
      if (lookahead == '^') ADVANCE(192);
      if (lookahead == '_') ADVANCE(87);
      if (lookahead == '{') ADVANCE(151);
      if (lookahead == '|') ADVANCE(191);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '~') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(70)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 71:
      if (eof) ADVANCE(72);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '&') ADVANCE(146);
      if (lookahead == ',') ADVANCE(154);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == '0') ADVANCE(174);
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == '=') ADVANCE(152);
      if (lookahead == '@') ADVANCE(148);
      if (lookahead == '\\') SKIP(69)
      if (lookahead == '_') ADVANCE(87);
      if (lookahead == '{') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(71)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_SLASHdts_DASHv1_SLASH);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_SLASHmemreserve_SLASH);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(65);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(65);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(215);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__label_name);
      if (lookahead == '#') ADVANCE(135);
      if (('+' <= lookahead && lookahead <= '.')) ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__label_name);
      if (lookahead == '#') ADVANCE(135);
      if (('+' <= lookahead && lookahead <= '.')) ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__label_name);
      if (('+' <= lookahead && lookahead <= '.')) ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__label_name);
      if (('+' <= lookahead && lookahead <= '.')) ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__label_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead == 'i') ADVANCE(114);
      if (lookahead == 'm') ADVANCE(101);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == 'd') ADVANCE(106);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '/') ADVANCE(78);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '-') ADVANCE(129);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '-') ADVANCE(115);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '/') ADVANCE(73);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '/') ADVANCE(75);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '/') ADVANCE(155);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '/') ADVANCE(156);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '1') ADVANCE(93);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'c') ADVANCE(111);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'd') ADVANCE(102);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'd') ADVANCE(109);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(113);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(199);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(127);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(124);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(92);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(112);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(120);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(94);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(95);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(122);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'l') ADVANCE(128);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'l') ADVANCE(103);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'm') ADVANCE(119);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'n') ADVANCE(98);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead == 'p') ADVANCE(121);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'o') ADVANCE(118);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'o') ADVANCE(100);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'p') ADVANCE(110);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'r') ADVANCE(104);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'r') ADVANCE(130);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'r') ADVANCE(116);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'r') ADVANCE(126);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 's') ADVANCE(91);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 's') ADVANCE(107);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 't') ADVANCE(123);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 't') ADVANCE(131);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 't') ADVANCE(105);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'u') ADVANCE(99);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'v') ADVANCE(97);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'v') ADVANCE(108);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'y') ADVANCE(96);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__node_path);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__node_or_property);
      if (lookahead == '#') ADVANCE(135);
      if (('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__node_or_property);
      if (('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__property_with_hash);
      if (lookahead == '#') ADVANCE(135);
      if (('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (lookahead == '#') ADVANCE(135);
      if (('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (lookahead == '\'') ADVANCE(55);
      if (lookahead == 'b') ADVANCE(140);
      if (lookahead == 'x') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (lookahead == '\'') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (lookahead == '\'') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_unit_address);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(190);
      if (lookahead == '{') ADVANCE(147);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '{') ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_AMP_LBRACE);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(193);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_SLASHdelete_DASHnode_SLASH);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_SLASHdelete_DASHproperty_SLASH);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(197);
      if (lookahead == '=') ADVANCE(196);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(195);
      if (lookahead == '>') ADVANCE(198);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(162);
      if (lookahead == '/') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(164);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(161);
      if (lookahead == '/') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\\') ADVANCE(12);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_system_lib_string);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_system_lib_string);
      if (lookahead == '>') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__byte_string_item);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(55);
      if (lookahead == 'b') ADVANCE(55);
      if (lookahead == 'x') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(194);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '/') ADVANCE(79);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(189);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_SLASHinclude);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_preproc_include_token1);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(208);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_preproc_def_token1);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '*') ADVANCE(206);
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == '\\') ADVANCE(213);
      if (lookahead != 0) ADVANCE(207);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '*') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(213);
      if (lookahead != 0) ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '/') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(208);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') ADVANCE(208);
      if (lookahead == '\r') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(214);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(214);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '*') ADVANCE(207);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\\') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(207);
      if (lookahead == '\r') ADVANCE(216);
      if (lookahead == '*') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(212);
      if (lookahead == '\r') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(80);
      if (lookahead == '\r') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(77);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(207);
      if (lookahead == '*') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(213);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(212);
      if (lookahead == '\\') ADVANCE(214);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 71},
  [2] = {.lex_state = 24},
  [3] = {.lex_state = 24},
  [4] = {.lex_state = 24},
  [5] = {.lex_state = 24},
  [6] = {.lex_state = 71},
  [7] = {.lex_state = 71},
  [8] = {.lex_state = 24},
  [9] = {.lex_state = 24},
  [10] = {.lex_state = 24},
  [11] = {.lex_state = 24},
  [12] = {.lex_state = 24},
  [13] = {.lex_state = 24},
  [14] = {.lex_state = 24},
  [15] = {.lex_state = 24},
  [16] = {.lex_state = 24},
  [17] = {.lex_state = 24},
  [18] = {.lex_state = 24},
  [19] = {.lex_state = 24},
  [20] = {.lex_state = 24},
  [21] = {.lex_state = 24},
  [22] = {.lex_state = 24},
  [23] = {.lex_state = 27},
  [24] = {.lex_state = 27},
  [25] = {.lex_state = 24},
  [26] = {.lex_state = 27},
  [27] = {.lex_state = 27},
  [28] = {.lex_state = 27},
  [29] = {.lex_state = 27},
  [30] = {.lex_state = 27},
  [31] = {.lex_state = 27},
  [32] = {.lex_state = 27},
  [33] = {.lex_state = 24},
  [34] = {.lex_state = 24},
  [35] = {.lex_state = 24},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 28},
  [38] = {.lex_state = 71},
  [39] = {.lex_state = 28},
  [40] = {.lex_state = 25},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 71},
  [43] = {.lex_state = 25},
  [44] = {.lex_state = 25},
  [45] = {.lex_state = 25},
  [46] = {.lex_state = 24},
  [47] = {.lex_state = 25},
  [48] = {.lex_state = 24},
  [49] = {.lex_state = 25},
  [50] = {.lex_state = 25},
  [51] = {.lex_state = 25},
  [52] = {.lex_state = 25},
  [53] = {.lex_state = 25},
  [54] = {.lex_state = 25},
  [55] = {.lex_state = 25},
  [56] = {.lex_state = 25},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 25},
  [59] = {.lex_state = 24},
  [60] = {.lex_state = 25},
  [61] = {.lex_state = 25},
  [62] = {.lex_state = 25},
  [63] = {.lex_state = 71},
  [64] = {.lex_state = 71},
  [65] = {.lex_state = 71},
  [66] = {.lex_state = 71},
  [67] = {.lex_state = 71},
  [68] = {.lex_state = 71},
  [69] = {.lex_state = 71},
  [70] = {.lex_state = 71},
  [71] = {.lex_state = 71},
  [72] = {.lex_state = 71},
  [73] = {.lex_state = 71},
  [74] = {.lex_state = 71},
  [75] = {.lex_state = 71},
  [76] = {.lex_state = 71},
  [77] = {.lex_state = 71},
  [78] = {.lex_state = 71},
  [79] = {.lex_state = 71},
  [80] = {.lex_state = 71},
  [81] = {.lex_state = 24},
  [82] = {.lex_state = 24},
  [83] = {.lex_state = 27},
  [84] = {.lex_state = 27},
  [85] = {.lex_state = 24},
  [86] = {.lex_state = 24},
  [87] = {.lex_state = 27},
  [88] = {.lex_state = 27},
  [89] = {.lex_state = 27},
  [90] = {.lex_state = 27},
  [91] = {.lex_state = 27},
  [92] = {.lex_state = 27},
  [93] = {.lex_state = 24},
  [94] = {.lex_state = 27},
  [95] = {.lex_state = 27},
  [96] = {.lex_state = 27},
  [97] = {.lex_state = 27},
  [98] = {.lex_state = 28},
  [99] = {.lex_state = 30},
  [100] = {.lex_state = 28},
  [101] = {.lex_state = 24},
  [102] = {.lex_state = 24},
  [103] = {.lex_state = 71},
  [104] = {.lex_state = 71},
  [105] = {.lex_state = 11},
  [106] = {.lex_state = 27},
  [107] = {.lex_state = 11},
  [108] = {.lex_state = 11},
  [109] = {.lex_state = 25},
  [110] = {.lex_state = 13},
  [111] = {.lex_state = 71},
  [112] = {.lex_state = 11},
  [113] = {.lex_state = 71},
  [114] = {.lex_state = 11},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 36},
  [118] = {.lex_state = 36},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 30},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 36},
  [126] = {.lex_state = 24},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 14},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 24},
  [137] = {.lex_state = 14},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 14},
  [140] = {.lex_state = 71},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 71},
  [145] = {.lex_state = 14},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 19},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 19},
  [157] = {.lex_state = 24},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 37},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 19},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 71},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 38},
  [171] = {.lex_state = 37},
  [172] = {.lex_state = 19},
  [173] = {.lex_state = 71},
  [174] = {.lex_state = 19},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 37},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__label_name] = ACTIONS(1),
    [sym__node_or_property] = ACTIONS(1),
    [sym__property_starts_with_number] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_AMP_LBRACE] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym__byte_string_item] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [aux_sym_preproc_include_token1] = ACTIONS(1),
    [aux_sym_preproc_def_token1] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(161),
    [sym__top_level_item] = STATE(6),
    [sym_file_version] = STATE(6),
    [sym_memory_reservation] = STATE(6),
    [sym_reference] = STATE(135),
    [sym__label_reference] = STATE(81),
    [sym__node_reference] = STATE(82),
    [sym_labeled_item] = STATE(6),
    [sym_node] = STATE(6),
    [sym_dtsi_include] = STATE(6),
    [sym_preproc_include] = STATE(6),
    [sym_preproc_def] = STATE(6),
    [sym_preproc_function_def] = STATE(6),
    [aux_sym_document_repeat1] = STATE(6),
    [aux_sym_labeled_node_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_SLASHdts_DASHv1_SLASH] = ACTIONS(7),
    [anon_sym_SLASHmemreserve_SLASH] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym__label_name] = ACTIONS(11),
    [sym__node_path] = ACTIONS(13),
    [sym__node_or_property] = ACTIONS(13),
    [anon_sym_AMP] = ACTIONS(15),
    [anon_sym_AMP_LBRACE] = ACTIONS(17),
    [anon_sym_SLASHinclude] = ACTIONS(19),
    [aux_sym_preproc_include_token1] = ACTIONS(21),
    [aux_sym_preproc_def_token1] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(27), 21,
      anon_sym_AMP_LBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      sym_integer_literal,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [34] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(31), 21,
      anon_sym_AMP_LBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      sym_integer_literal,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [68] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(35), 21,
      anon_sym_AMP_LBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      sym_integer_literal,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(39), 21,
      anon_sym_AMP_LBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      sym_integer_literal,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [136] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SLASHdts_DASHv1_SLASH,
    ACTIONS(9), 1,
      anon_sym_SLASHmemreserve_SLASH,
    ACTIONS(11), 1,
      sym__label_name,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(19), 1,
      anon_sym_SLASHinclude,
    ACTIONS(21), 1,
      aux_sym_preproc_include_token1,
    ACTIONS(23), 1,
      aux_sym_preproc_def_token1,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(39), 1,
      aux_sym_labeled_node_repeat1,
    STATE(81), 1,
      sym__label_reference,
    STATE(82), 1,
      sym__node_reference,
    STATE(135), 1,
      sym_reference,
    ACTIONS(13), 2,
      sym__node_path,
      sym__node_or_property,
    STATE(7), 10,
      sym__top_level_item,
      sym_file_version,
      sym_memory_reservation,
      sym_labeled_item,
      sym_node,
      sym_dtsi_include,
      sym_preproc_include,
      sym_preproc_def,
      sym_preproc_function_def,
      aux_sym_document_repeat1,
  [195] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      anon_sym_SLASHdts_DASHv1_SLASH,
    ACTIONS(48), 1,
      anon_sym_SLASHmemreserve_SLASH,
    ACTIONS(51), 1,
      sym__label_name,
    ACTIONS(57), 1,
      anon_sym_AMP,
    ACTIONS(60), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(63), 1,
      anon_sym_SLASHinclude,
    ACTIONS(66), 1,
      aux_sym_preproc_include_token1,
    ACTIONS(69), 1,
      aux_sym_preproc_def_token1,
    STATE(39), 1,
      aux_sym_labeled_node_repeat1,
    STATE(81), 1,
      sym__label_reference,
    STATE(82), 1,
      sym__node_reference,
    STATE(135), 1,
      sym_reference,
    ACTIONS(54), 2,
      sym__node_path,
      sym__node_or_property,
    STATE(7), 10,
      sym__top_level_item,
      sym_file_version,
      sym_memory_reservation,
      sym_labeled_item,
      sym_node,
      sym_dtsi_include,
      sym_preproc_include,
      sym_preproc_def,
      sym_preproc_function_def,
      aux_sym_document_repeat1,
  [254] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym_argument_list,
    ACTIONS(72), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(74), 17,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [290] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_AMP,
    ACTIONS(80), 1,
      anon_sym_COMMA,
    ACTIONS(84), 1,
      anon_sym_RPAREN,
    ACTIONS(86), 1,
      anon_sym_QMARK,
    ACTIONS(92), 1,
      anon_sym_SLASH,
    ACTIONS(94), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(96), 1,
      anon_sym_AMP_AMP,
    ACTIONS(98), 1,
      anon_sym_PIPE,
    ACTIONS(100), 1,
      anon_sym_CARET,
    STATE(124), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(82), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(88), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(90), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(102), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(104), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(106), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [348] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(110), 17,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(114), 17,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [408] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_AMP,
    ACTIONS(86), 1,
      anon_sym_QMARK,
    ACTIONS(92), 1,
      anon_sym_SLASH,
    ACTIONS(94), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(96), 1,
      anon_sym_AMP_AMP,
    ACTIONS(98), 1,
      anon_sym_PIPE,
    ACTIONS(100), 1,
      anon_sym_CARET,
    ACTIONS(82), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(88), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(90), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(102), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(104), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(106), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(116), 3,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [462] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_SLASH,
    ACTIONS(82), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(88), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(90), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(102), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(104), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(106), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(118), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(120), 7,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
  [506] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_SLASH,
    ACTIONS(88), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(90), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(106), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(118), 4,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(120), 11,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [544] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_SLASH,
    ACTIONS(88), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(90), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(118), 4,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(120), 13,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [580] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_SLASH,
    ACTIONS(82), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(88), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(90), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(104), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(106), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(118), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(120), 9,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [622] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_SLASH,
    ACTIONS(90), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(118), 4,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(120), 15,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [656] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_AMP,
    ACTIONS(92), 1,
      anon_sym_SLASH,
    ACTIONS(118), 1,
      anon_sym_PIPE,
    ACTIONS(82), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(88), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(90), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(102), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(104), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(106), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(120), 7,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
  [702] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_AMP,
    ACTIONS(92), 1,
      anon_sym_SLASH,
    ACTIONS(100), 1,
      anon_sym_CARET,
    ACTIONS(118), 1,
      anon_sym_PIPE,
    ACTIONS(82), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(88), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(90), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(102), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(104), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(106), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(120), 6,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [750] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_AMP,
    ACTIONS(92), 1,
      anon_sym_SLASH,
    ACTIONS(98), 1,
      anon_sym_PIPE,
    ACTIONS(100), 1,
      anon_sym_CARET,
    ACTIONS(82), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(88), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(90), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(102), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(104), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(106), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(120), 6,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [798] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_AMP,
    ACTIONS(92), 1,
      anon_sym_SLASH,
    ACTIONS(96), 1,
      anon_sym_AMP_AMP,
    ACTIONS(98), 1,
      anon_sym_PIPE,
    ACTIONS(100), 1,
      anon_sym_CARET,
    ACTIONS(82), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(88), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(90), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(102), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(104), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(106), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(120), 5,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
  [848] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(120), 17,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [878] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(122), 1,
      sym__label_name,
    ACTIONS(124), 1,
      sym__node_path,
    ACTIONS(126), 1,
      sym__node_or_property,
    ACTIONS(128), 1,
      sym__property_with_hash,
    ACTIONS(130), 1,
      sym__property_starts_with_number,
    ACTIONS(132), 1,
      anon_sym_RBRACE,
    ACTIONS(134), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(136), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    STATE(37), 1,
      aux_sym_labeled_node_repeat1,
    STATE(81), 1,
      sym__label_reference,
    STATE(82), 1,
      sym__node_reference,
    STATE(134), 1,
      sym_reference,
    STATE(27), 7,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [933] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(122), 1,
      sym__label_name,
    ACTIONS(124), 1,
      sym__node_path,
    ACTIONS(126), 1,
      sym__node_or_property,
    ACTIONS(128), 1,
      sym__property_with_hash,
    ACTIONS(130), 1,
      sym__property_starts_with_number,
    ACTIONS(134), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(136), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      aux_sym_labeled_node_repeat1,
    STATE(81), 1,
      sym__label_reference,
    STATE(82), 1,
      sym__node_reference,
    STATE(134), 1,
      sym_reference,
    STATE(31), 7,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [988] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_AMP,
    ACTIONS(86), 1,
      anon_sym_QMARK,
    ACTIONS(92), 1,
      anon_sym_SLASH,
    ACTIONS(94), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(96), 1,
      anon_sym_AMP_AMP,
    ACTIONS(98), 1,
      anon_sym_PIPE,
    ACTIONS(100), 1,
      anon_sym_CARET,
    ACTIONS(82), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(88), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(90), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(102), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(104), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(106), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(140), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1041] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      sym__label_name,
    ACTIONS(145), 1,
      sym__node_path,
    ACTIONS(148), 1,
      sym__node_or_property,
    ACTIONS(151), 1,
      sym__property_with_hash,
    ACTIONS(154), 1,
      sym__property_starts_with_number,
    ACTIONS(157), 1,
      anon_sym_AMP,
    ACTIONS(160), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    ACTIONS(165), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(168), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    STATE(37), 1,
      aux_sym_labeled_node_repeat1,
    STATE(81), 1,
      sym__label_reference,
    STATE(82), 1,
      sym__node_reference,
    STATE(134), 1,
      sym_reference,
    STATE(26), 7,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [1096] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(122), 1,
      sym__label_name,
    ACTIONS(124), 1,
      sym__node_path,
    ACTIONS(126), 1,
      sym__node_or_property,
    ACTIONS(128), 1,
      sym__property_with_hash,
    ACTIONS(130), 1,
      sym__property_starts_with_number,
    ACTIONS(134), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(136), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    ACTIONS(171), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      aux_sym_labeled_node_repeat1,
    STATE(81), 1,
      sym__label_reference,
    STATE(82), 1,
      sym__node_reference,
    STATE(134), 1,
      sym_reference,
    STATE(26), 7,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [1151] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(122), 1,
      sym__label_name,
    ACTIONS(124), 1,
      sym__node_path,
    ACTIONS(126), 1,
      sym__node_or_property,
    ACTIONS(128), 1,
      sym__property_with_hash,
    ACTIONS(130), 1,
      sym__property_starts_with_number,
    ACTIONS(134), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(136), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    ACTIONS(173), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      aux_sym_labeled_node_repeat1,
    STATE(81), 1,
      sym__label_reference,
    STATE(82), 1,
      sym__node_reference,
    STATE(134), 1,
      sym_reference,
    STATE(26), 7,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [1206] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(122), 1,
      sym__label_name,
    ACTIONS(124), 1,
      sym__node_path,
    ACTIONS(126), 1,
      sym__node_or_property,
    ACTIONS(128), 1,
      sym__property_with_hash,
    ACTIONS(130), 1,
      sym__property_starts_with_number,
    ACTIONS(134), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(136), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    ACTIONS(175), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      aux_sym_labeled_node_repeat1,
    STATE(81), 1,
      sym__label_reference,
    STATE(82), 1,
      sym__node_reference,
    STATE(134), 1,
      sym_reference,
    STATE(32), 7,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [1261] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(122), 1,
      sym__label_name,
    ACTIONS(124), 1,
      sym__node_path,
    ACTIONS(126), 1,
      sym__node_or_property,
    ACTIONS(128), 1,
      sym__property_with_hash,
    ACTIONS(130), 1,
      sym__property_starts_with_number,
    ACTIONS(134), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(136), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      aux_sym_labeled_node_repeat1,
    STATE(81), 1,
      sym__label_reference,
    STATE(82), 1,
      sym__node_reference,
    STATE(134), 1,
      sym_reference,
    STATE(28), 7,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [1316] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(122), 1,
      sym__label_name,
    ACTIONS(124), 1,
      sym__node_path,
    ACTIONS(126), 1,
      sym__node_or_property,
    ACTIONS(128), 1,
      sym__property_with_hash,
    ACTIONS(130), 1,
      sym__property_starts_with_number,
    ACTIONS(134), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(136), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      aux_sym_labeled_node_repeat1,
    STATE(81), 1,
      sym__label_reference,
    STATE(82), 1,
      sym__node_reference,
    STATE(134), 1,
      sym_reference,
    STATE(26), 7,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [1371] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(122), 1,
      sym__label_name,
    ACTIONS(124), 1,
      sym__node_path,
    ACTIONS(126), 1,
      sym__node_or_property,
    ACTIONS(128), 1,
      sym__property_with_hash,
    ACTIONS(130), 1,
      sym__property_starts_with_number,
    ACTIONS(134), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(136), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      aux_sym_labeled_node_repeat1,
    STATE(81), 1,
      sym__label_reference,
    STATE(82), 1,
      sym__node_reference,
    STATE(134), 1,
      sym_reference,
    STATE(26), 7,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [1426] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_AMP,
    ACTIONS(86), 1,
      anon_sym_QMARK,
    ACTIONS(92), 1,
      anon_sym_SLASH,
    ACTIONS(94), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(96), 1,
      anon_sym_AMP_AMP,
    ACTIONS(98), 1,
      anon_sym_PIPE,
    ACTIONS(100), 1,
      anon_sym_CARET,
    ACTIONS(183), 1,
      anon_sym_COLON,
    ACTIONS(82), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(88), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(90), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(102), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(104), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(106), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1478] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_AMP,
    ACTIONS(86), 1,
      anon_sym_QMARK,
    ACTIONS(92), 1,
      anon_sym_SLASH,
    ACTIONS(94), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(96), 1,
      anon_sym_AMP_AMP,
    ACTIONS(98), 1,
      anon_sym_PIPE,
    ACTIONS(100), 1,
      anon_sym_CARET,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    ACTIONS(82), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(88), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(90), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(102), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(104), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(106), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1530] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_AMP,
    ACTIONS(86), 1,
      anon_sym_QMARK,
    ACTIONS(92), 1,
      anon_sym_SLASH,
    ACTIONS(94), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(96), 1,
      anon_sym_AMP_AMP,
    ACTIONS(98), 1,
      anon_sym_PIPE,
    ACTIONS(100), 1,
      anon_sym_CARET,
    ACTIONS(187), 1,
      anon_sym_RPAREN,
    ACTIONS(82), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(88), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(90), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(102), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(104), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(106), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1582] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(189), 1,
      anon_sym_SEMI,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      sym__label_reference,
    STATE(82), 1,
      sym__node_reference,
    STATE(122), 5,
      sym_reference,
      sym__property_value,
      sym_integer_cells,
      sym_string_literal,
      sym_byte_string_literal,
  [1617] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(122), 1,
      sym__label_name,
    ACTIONS(124), 1,
      sym__node_path,
    ACTIONS(126), 1,
      sym__node_or_property,
    ACTIONS(128), 1,
      sym__property_with_hash,
    ACTIONS(130), 1,
      sym__property_starts_with_number,
    STATE(81), 1,
      sym__label_reference,
    STATE(82), 1,
      sym__node_reference,
    STATE(89), 1,
      sym_property,
    STATE(97), 1,
      sym_node,
    STATE(98), 1,
      aux_sym_labeled_node_repeat1,
    STATE(134), 1,
      sym_reference,
  [1660] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP_LBRACE,
      anon_sym_COMMA,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(199), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [1681] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__node_path,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(201), 1,
      sym__label_name,
    ACTIONS(203), 1,
      sym__node_or_property,
    ACTIONS(205), 1,
      sym__property_with_hash,
    ACTIONS(207), 1,
      sym__property_starts_with_number,
    STATE(72), 1,
      sym_node,
    STATE(73), 1,
      sym_property,
    STATE(81), 1,
      sym__label_reference,
    STATE(82), 1,
      sym__node_reference,
    STATE(98), 1,
      aux_sym_labeled_node_repeat1,
    STATE(135), 1,
      sym_reference,
  [1724] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      sym_integer_literal,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_RPAREN,
    ACTIONS(217), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(9), 5,
      sym__expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1753] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(219), 1,
      anon_sym_SEMI,
    STATE(81), 1,
      sym__label_reference,
    STATE(82), 1,
      sym__node_reference,
    STATE(121), 5,
      sym_reference,
      sym__property_value,
      sym_integer_cells,
      sym_string_literal,
      sym_byte_string_literal,
  [1788] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP_LBRACE,
      anon_sym_COMMA,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(223), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [1809] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      sym_integer_literal,
    ACTIONS(217), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(18), 5,
      sym__expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1835] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(227), 1,
      sym_integer_literal,
    ACTIONS(217), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(21), 5,
      sym__expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1861] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      sym_integer_literal,
    ACTIONS(217), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(20), 5,
      sym__expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1887] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(231), 1,
      anon_sym_GT,
    ACTIONS(233), 1,
      sym_integer_literal,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    STATE(81), 1,
      sym__label_reference,
    STATE(82), 1,
      sym__node_reference,
    STATE(48), 4,
      sym_reference,
      sym__integer_cell_items,
      sym_call_expression,
      aux_sym_integer_cells_repeat1,
  [1921] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      sym_integer_literal,
    ACTIONS(217), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(19), 5,
      sym__expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1947] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_AMP,
    ACTIONS(244), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(247), 1,
      anon_sym_GT,
    ACTIONS(249), 1,
      sym_integer_literal,
    ACTIONS(252), 1,
      sym_identifier,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    STATE(81), 1,
      sym__label_reference,
    STATE(82), 1,
      sym__node_reference,
    STATE(48), 4,
      sym_reference,
      sym__integer_cell_items,
      sym_call_expression,
      aux_sym_integer_cells_repeat1,
  [1981] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      sym_integer_literal,
    ACTIONS(217), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(17), 5,
      sym__expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [2007] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      sym_integer_literal,
    ACTIONS(217), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(33), 5,
      sym__expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [2033] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      sym_integer_literal,
    ACTIONS(217), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(11), 5,
      sym__expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [2059] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(264), 1,
      sym_integer_literal,
    ACTIONS(217), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(35), 5,
      sym__expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [2085] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      sym_integer_literal,
    ACTIONS(217), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(16), 5,
      sym__expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [2111] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(268), 1,
      sym_integer_literal,
    ACTIONS(217), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(15), 5,
      sym__expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [2137] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(270), 1,
      sym_integer_literal,
    ACTIONS(217), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(25), 5,
      sym__expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [2163] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(272), 1,
      sym_integer_literal,
    ACTIONS(217), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(13), 5,
      sym__expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [2189] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      sym__label_reference,
    STATE(82), 1,
      sym__node_reference,
    STATE(146), 5,
      sym_reference,
      sym__property_value,
      sym_integer_cells,
      sym_string_literal,
      sym_byte_string_literal,
  [2221] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      sym_integer_literal,
    ACTIONS(217), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(14), 5,
      sym__expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [2247] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_GT,
    ACTIONS(278), 1,
      sym_integer_literal,
    STATE(81), 1,
      sym__label_reference,
    STATE(82), 1,
      sym__node_reference,
    STATE(46), 4,
      sym_reference,
      sym__integer_cell_items,
      sym_call_expression,
      aux_sym_integer_cells_repeat1,
  [2281] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 1,
      sym_integer_literal,
    ACTIONS(217), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(22), 5,
      sym__expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [2307] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(282), 1,
      sym_integer_literal,
    ACTIONS(217), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(12), 5,
      sym__expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [2333] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      sym_integer_literal,
    ACTIONS(217), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(34), 5,
      sym__expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [2359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(288), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(292), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2397] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(296), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(300), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2435] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(304), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(308), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2473] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(312), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2492] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(316), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2511] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(320), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(324), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2549] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(324), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2568] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(328), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(332), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2606] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(336), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(340), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(344), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2663] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(348), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2682] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(352), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2701] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_AMP,
    ACTIONS(354), 9,
      anon_sym_SEMI,
      anon_sym_AMP_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_integer_literal,
      sym_identifier,
      anon_sym_LPAREN,
  [2719] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_AMP,
    ACTIONS(358), 9,
      anon_sym_SEMI,
      anon_sym_AMP_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_integer_literal,
      sym_identifier,
      anon_sym_LPAREN,
  [2737] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(292), 7,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2755] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(296), 7,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_AMP,
    ACTIONS(362), 9,
      anon_sym_SEMI,
      anon_sym_AMP_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_integer_literal,
      sym_identifier,
      anon_sym_LPAREN,
  [2791] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_AMP,
    ACTIONS(366), 9,
      anon_sym_SEMI,
      anon_sym_AMP_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_integer_literal,
      sym_identifier,
      anon_sym_LPAREN,
  [2809] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(370), 7,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2827] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(374), 7,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2845] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(324), 7,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(300), 7,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2881] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(328), 7,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(316), 7,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2917] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_AMP,
    ACTIONS(378), 9,
      anon_sym_SEMI,
      anon_sym_AMP_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_integer_literal,
      sym_identifier,
      anon_sym_LPAREN,
  [2935] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(344), 7,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(340), 7,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2971] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(320), 7,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2989] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(324), 7,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [3007] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym__label_name,
    STATE(98), 1,
      aux_sym_labeled_node_repeat1,
    ACTIONS(387), 2,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
    ACTIONS(385), 4,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
  [3027] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    STATE(81), 1,
      sym__label_reference,
    STATE(82), 1,
      sym__node_reference,
    STATE(152), 1,
      sym_reference,
    ACTIONS(389), 3,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
  [3051] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 2,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
    ACTIONS(391), 5,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
  [3066] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LPAREN,
    ACTIONS(395), 1,
      anon_sym_AMP,
    STATE(3), 1,
      sym_argument_list,
    ACTIONS(397), 4,
      anon_sym_AMP_LBRACE,
      anon_sym_GT,
      sym_integer_literal,
      sym_identifier,
  [3085] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_AMP,
    ACTIONS(401), 5,
      anon_sym_AMP_LBRACE,
      anon_sym_GT,
      sym_integer_literal,
      sym_identifier,
      anon_sym_LPAREN,
  [3099] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_SEMI,
    ACTIONS(405), 1,
      anon_sym_AT,
    ACTIONS(407), 1,
      anon_sym_COLON,
    ACTIONS(409), 1,
      anon_sym_LBRACE,
    ACTIONS(411), 1,
      anon_sym_EQ,
  [3118] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_COLON,
    ACTIONS(413), 1,
      anon_sym_SEMI,
    ACTIONS(415), 1,
      anon_sym_AT,
    ACTIONS(417), 1,
      anon_sym_LBRACE,
    ACTIONS(419), 1,
      anon_sym_EQ,
  [3137] = 5,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_DQUOTE,
    ACTIONS(425), 1,
      aux_sym_string_literal_token1,
    ACTIONS(427), 1,
      sym_escape_sequence,
    STATE(108), 1,
      aux_sym_string_literal_repeat1,
  [3153] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      sym__property_with_hash,
    ACTIONS(429), 3,
      sym__label_name,
      sym__node_or_property,
      sym__property_starts_with_number,
  [3165] = 5,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_DQUOTE,
    ACTIONS(435), 1,
      aux_sym_string_literal_token1,
    ACTIONS(437), 1,
      sym_escape_sequence,
    STATE(105), 1,
      aux_sym_string_literal_repeat1,
  [3181] = 5,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_DQUOTE,
    ACTIONS(441), 1,
      aux_sym_string_literal_token1,
    ACTIONS(444), 1,
      sym_escape_sequence,
    STATE(108), 1,
      aux_sym_string_literal_repeat1,
  [3197] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_DQUOTE,
    STATE(174), 1,
      sym_string_literal,
    ACTIONS(449), 2,
      sym_system_lib_string,
      sym_identifier,
  [3211] = 5,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_LF,
    ACTIONS(453), 1,
      anon_sym_LPAREN2,
    ACTIONS(455), 1,
      sym_preproc_arg,
    STATE(145), 1,
      sym_preproc_params,
  [3227] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_SEMI,
    ACTIONS(415), 1,
      anon_sym_AT,
    ACTIONS(417), 1,
      anon_sym_LBRACE,
    ACTIONS(419), 1,
      anon_sym_EQ,
  [3243] = 5,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(425), 1,
      aux_sym_string_literal_token1,
    ACTIONS(427), 1,
      sym_escape_sequence,
    ACTIONS(457), 1,
      anon_sym_DQUOTE,
    STATE(108), 1,
      aux_sym_string_literal_repeat1,
  [3259] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_SEMI,
    ACTIONS(405), 1,
      anon_sym_AT,
    ACTIONS(409), 1,
      anon_sym_LBRACE,
    ACTIONS(411), 1,
      anon_sym_EQ,
  [3275] = 5,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_DQUOTE,
    ACTIONS(461), 1,
      aux_sym_string_literal_token1,
    ACTIONS(463), 1,
      sym_escape_sequence,
    STATE(112), 1,
      aux_sym_string_literal_repeat1,
  [3291] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    ACTIONS(467), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      aux_sym_preproc_params_repeat1,
  [3304] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_SEMI,
    ACTIONS(471), 1,
      anon_sym_COMMA,
    STATE(119), 1,
      aux_sym_property_repeat1,
  [3317] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_RBRACK,
    ACTIONS(475), 1,
      sym__byte_string_item,
    STATE(118), 1,
      aux_sym_byte_string_literal_repeat1,
  [3330] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_RBRACK,
    ACTIONS(479), 1,
      sym__byte_string_item,
    STATE(118), 1,
      aux_sym_byte_string_literal_repeat1,
  [3343] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_SEMI,
    ACTIONS(484), 1,
      anon_sym_COMMA,
    STATE(119), 1,
      aux_sym_property_repeat1,
  [3356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 3,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
  [3365] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_COMMA,
    ACTIONS(489), 1,
      anon_sym_SEMI,
    STATE(127), 1,
      aux_sym_property_repeat1,
  [3378] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_COMMA,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    STATE(116), 1,
      aux_sym_property_repeat1,
  [3391] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_COMMA,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      aux_sym_preproc_params_repeat1,
  [3404] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_COMMA,
    ACTIONS(498), 1,
      anon_sym_RPAREN,
    STATE(128), 1,
      aux_sym_argument_list_repeat1,
  [3417] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_RBRACK,
    ACTIONS(502), 1,
      sym__byte_string_item,
    STATE(117), 1,
      aux_sym_byte_string_literal_repeat1,
  [3430] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_RPAREN,
    ACTIONS(504), 2,
      sym_identifier,
      anon_sym_DOT_DOT_DOT,
  [3441] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_COMMA,
    ACTIONS(508), 1,
      anon_sym_SEMI,
    STATE(119), 1,
      aux_sym_property_repeat1,
  [3454] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
    ACTIONS(510), 1,
      anon_sym_COMMA,
    STATE(128), 1,
      aux_sym_argument_list_repeat1,
  [3467] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_COLON,
    ACTIONS(415), 1,
      anon_sym_AT,
    ACTIONS(417), 1,
      anon_sym_LBRACE,
  [3480] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    ACTIONS(513), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      aux_sym_preproc_params_repeat1,
  [3493] = 2,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(515), 2,
      anon_sym_LF,
      sym_preproc_arg,
  [3501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3509] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_AT,
    ACTIONS(521), 1,
      anon_sym_RBRACE,
  [3519] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_AT,
    ACTIONS(409), 1,
      anon_sym_LBRACE,
  [3529] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_AT,
    ACTIONS(417), 1,
      anon_sym_LBRACE,
  [3539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 2,
      sym_identifier,
      anon_sym_DOT_DOT_DOT,
  [3547] = 2,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(525), 2,
      anon_sym_LF,
      sym_preproc_arg,
  [3555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3563] = 2,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(529), 2,
      anon_sym_LF,
      sym_preproc_arg,
  [3571] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_SEMI,
    ACTIONS(411), 1,
      anon_sym_EQ,
  [3581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      sym_string_literal,
  [3599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3607] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_SEMI,
    ACTIONS(419), 1,
      anon_sym_EQ,
  [3617] = 3,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_LF,
    ACTIONS(535), 1,
      sym_preproc_arg,
  [3627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3635] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_SEMI,
  [3650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_SEMI,
  [3657] = 2,
    ACTIONS(197), 1,
      anon_sym_LF,
    ACTIONS(421), 1,
      sym_comment,
  [3664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_COLON,
  [3671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_SEMI,
  [3678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_SEMI,
  [3685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_SEMI,
  [3692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_RBRACE,
  [3699] = 2,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_LF,
  [3706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      sym_identifier,
  [3713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_SEMI,
  [3720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_SEMI,
  [3727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      sym_unit_address,
  [3734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      ts_builtin_sym_end,
  [3741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_SEMI,
  [3748] = 2,
    ACTIONS(221), 1,
      anon_sym_LF,
    ACTIONS(421), 1,
      sym_comment,
  [3755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_LBRACE,
  [3762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_SEMI,
  [3769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      sym_integer_literal,
  [3776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_SEMI,
  [3783] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_SEMI,
  [3790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_SEMI,
  [3797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      sym__label_name,
  [3804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      sym_unit_address,
  [3811] = 2,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_LF,
  [3818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      sym_integer_literal,
  [3825] = 2,
    ACTIONS(421), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_LF,
  [3832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_LBRACE,
  [3839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      sym_unit_address,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 102,
  [SMALL_STATE(6)] = 136,
  [SMALL_STATE(7)] = 195,
  [SMALL_STATE(8)] = 254,
  [SMALL_STATE(9)] = 290,
  [SMALL_STATE(10)] = 348,
  [SMALL_STATE(11)] = 378,
  [SMALL_STATE(12)] = 408,
  [SMALL_STATE(13)] = 462,
  [SMALL_STATE(14)] = 506,
  [SMALL_STATE(15)] = 544,
  [SMALL_STATE(16)] = 580,
  [SMALL_STATE(17)] = 622,
  [SMALL_STATE(18)] = 656,
  [SMALL_STATE(19)] = 702,
  [SMALL_STATE(20)] = 750,
  [SMALL_STATE(21)] = 798,
  [SMALL_STATE(22)] = 848,
  [SMALL_STATE(23)] = 878,
  [SMALL_STATE(24)] = 933,
  [SMALL_STATE(25)] = 988,
  [SMALL_STATE(26)] = 1041,
  [SMALL_STATE(27)] = 1096,
  [SMALL_STATE(28)] = 1151,
  [SMALL_STATE(29)] = 1206,
  [SMALL_STATE(30)] = 1261,
  [SMALL_STATE(31)] = 1316,
  [SMALL_STATE(32)] = 1371,
  [SMALL_STATE(33)] = 1426,
  [SMALL_STATE(34)] = 1478,
  [SMALL_STATE(35)] = 1530,
  [SMALL_STATE(36)] = 1582,
  [SMALL_STATE(37)] = 1617,
  [SMALL_STATE(38)] = 1660,
  [SMALL_STATE(39)] = 1681,
  [SMALL_STATE(40)] = 1724,
  [SMALL_STATE(41)] = 1753,
  [SMALL_STATE(42)] = 1788,
  [SMALL_STATE(43)] = 1809,
  [SMALL_STATE(44)] = 1835,
  [SMALL_STATE(45)] = 1861,
  [SMALL_STATE(46)] = 1887,
  [SMALL_STATE(47)] = 1921,
  [SMALL_STATE(48)] = 1947,
  [SMALL_STATE(49)] = 1981,
  [SMALL_STATE(50)] = 2007,
  [SMALL_STATE(51)] = 2033,
  [SMALL_STATE(52)] = 2059,
  [SMALL_STATE(53)] = 2085,
  [SMALL_STATE(54)] = 2111,
  [SMALL_STATE(55)] = 2137,
  [SMALL_STATE(56)] = 2163,
  [SMALL_STATE(57)] = 2189,
  [SMALL_STATE(58)] = 2221,
  [SMALL_STATE(59)] = 2247,
  [SMALL_STATE(60)] = 2281,
  [SMALL_STATE(61)] = 2307,
  [SMALL_STATE(62)] = 2333,
  [SMALL_STATE(63)] = 2359,
  [SMALL_STATE(64)] = 2378,
  [SMALL_STATE(65)] = 2397,
  [SMALL_STATE(66)] = 2416,
  [SMALL_STATE(67)] = 2435,
  [SMALL_STATE(68)] = 2454,
  [SMALL_STATE(69)] = 2473,
  [SMALL_STATE(70)] = 2492,
  [SMALL_STATE(71)] = 2511,
  [SMALL_STATE(72)] = 2530,
  [SMALL_STATE(73)] = 2549,
  [SMALL_STATE(74)] = 2568,
  [SMALL_STATE(75)] = 2587,
  [SMALL_STATE(76)] = 2606,
  [SMALL_STATE(77)] = 2625,
  [SMALL_STATE(78)] = 2644,
  [SMALL_STATE(79)] = 2663,
  [SMALL_STATE(80)] = 2682,
  [SMALL_STATE(81)] = 2701,
  [SMALL_STATE(82)] = 2719,
  [SMALL_STATE(83)] = 2737,
  [SMALL_STATE(84)] = 2755,
  [SMALL_STATE(85)] = 2773,
  [SMALL_STATE(86)] = 2791,
  [SMALL_STATE(87)] = 2809,
  [SMALL_STATE(88)] = 2827,
  [SMALL_STATE(89)] = 2845,
  [SMALL_STATE(90)] = 2863,
  [SMALL_STATE(91)] = 2881,
  [SMALL_STATE(92)] = 2899,
  [SMALL_STATE(93)] = 2917,
  [SMALL_STATE(94)] = 2935,
  [SMALL_STATE(95)] = 2953,
  [SMALL_STATE(96)] = 2971,
  [SMALL_STATE(97)] = 2989,
  [SMALL_STATE(98)] = 3007,
  [SMALL_STATE(99)] = 3027,
  [SMALL_STATE(100)] = 3051,
  [SMALL_STATE(101)] = 3066,
  [SMALL_STATE(102)] = 3085,
  [SMALL_STATE(103)] = 3099,
  [SMALL_STATE(104)] = 3118,
  [SMALL_STATE(105)] = 3137,
  [SMALL_STATE(106)] = 3153,
  [SMALL_STATE(107)] = 3165,
  [SMALL_STATE(108)] = 3181,
  [SMALL_STATE(109)] = 3197,
  [SMALL_STATE(110)] = 3211,
  [SMALL_STATE(111)] = 3227,
  [SMALL_STATE(112)] = 3243,
  [SMALL_STATE(113)] = 3259,
  [SMALL_STATE(114)] = 3275,
  [SMALL_STATE(115)] = 3291,
  [SMALL_STATE(116)] = 3304,
  [SMALL_STATE(117)] = 3317,
  [SMALL_STATE(118)] = 3330,
  [SMALL_STATE(119)] = 3343,
  [SMALL_STATE(120)] = 3356,
  [SMALL_STATE(121)] = 3365,
  [SMALL_STATE(122)] = 3378,
  [SMALL_STATE(123)] = 3391,
  [SMALL_STATE(124)] = 3404,
  [SMALL_STATE(125)] = 3417,
  [SMALL_STATE(126)] = 3430,
  [SMALL_STATE(127)] = 3441,
  [SMALL_STATE(128)] = 3454,
  [SMALL_STATE(129)] = 3467,
  [SMALL_STATE(130)] = 3480,
  [SMALL_STATE(131)] = 3493,
  [SMALL_STATE(132)] = 3501,
  [SMALL_STATE(133)] = 3509,
  [SMALL_STATE(134)] = 3519,
  [SMALL_STATE(135)] = 3529,
  [SMALL_STATE(136)] = 3539,
  [SMALL_STATE(137)] = 3547,
  [SMALL_STATE(138)] = 3555,
  [SMALL_STATE(139)] = 3563,
  [SMALL_STATE(140)] = 3571,
  [SMALL_STATE(141)] = 3581,
  [SMALL_STATE(142)] = 3589,
  [SMALL_STATE(143)] = 3599,
  [SMALL_STATE(144)] = 3607,
  [SMALL_STATE(145)] = 3617,
  [SMALL_STATE(146)] = 3627,
  [SMALL_STATE(147)] = 3635,
  [SMALL_STATE(148)] = 3643,
  [SMALL_STATE(149)] = 3650,
  [SMALL_STATE(150)] = 3657,
  [SMALL_STATE(151)] = 3664,
  [SMALL_STATE(152)] = 3671,
  [SMALL_STATE(153)] = 3678,
  [SMALL_STATE(154)] = 3685,
  [SMALL_STATE(155)] = 3692,
  [SMALL_STATE(156)] = 3699,
  [SMALL_STATE(157)] = 3706,
  [SMALL_STATE(158)] = 3713,
  [SMALL_STATE(159)] = 3720,
  [SMALL_STATE(160)] = 3727,
  [SMALL_STATE(161)] = 3734,
  [SMALL_STATE(162)] = 3741,
  [SMALL_STATE(163)] = 3748,
  [SMALL_STATE(164)] = 3755,
  [SMALL_STATE(165)] = 3762,
  [SMALL_STATE(166)] = 3769,
  [SMALL_STATE(167)] = 3776,
  [SMALL_STATE(168)] = 3783,
  [SMALL_STATE(169)] = 3790,
  [SMALL_STATE(170)] = 3797,
  [SMALL_STATE(171)] = 3804,
  [SMALL_STATE(172)] = 3811,
  [SMALL_STATE(173)] = 3818,
  [SMALL_STATE(174)] = 3825,
  [SMALL_STATE(175)] = 3832,
  [SMALL_STATE(176)] = 3839,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 17),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 17),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(159),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(173),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(129),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(135),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(170),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(120),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(142),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(109),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(157),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 19),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 19),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_expression, 5, .production_id = 21),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 20),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 20),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(103),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(134),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(113),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(140),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(140),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(170),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(120),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(99),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(106),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_cells_repeat1, 2), SHIFT_REPEAT(170),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_cells_repeat1, 2), SHIFT_REPEAT(120),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_cells_repeat1, 2),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_cells_repeat1, 2), SHIFT_REPEAT(48),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_cells_repeat1, 2), SHIFT_REPEAT(101),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_cells_repeat1, 2), SHIFT_REPEAT(62),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_def, 3, .production_id = 8),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_def, 3, .production_id = 8),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2, .production_id = 9),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 2, .production_id = 9),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, .production_id = 9),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4, .production_id = 9),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 16),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 16),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dtsi_include, 2, .production_id = 5),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dtsi_include, 2, .production_id = 5),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_def, 4, .production_id = 10),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_def, 4, .production_id = 10),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_function_def, 4, .production_id = 11),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_function_def, 4, .production_id = 11),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 16),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 16),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3, .production_id = 12),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 3, .production_id = 12),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled_item, 2, .production_id = 6),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_labeled_item, 2, .production_id = 6),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5, .production_id = 18),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 5, .production_id = 18),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_include, 3, .production_id = 5),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_include, 3, .production_id = 5),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_version, 2),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_version, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 9),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 9),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 15),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, .production_id = 15),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_function_def, 5, .production_id = 14),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_function_def, 5, .production_id = 14),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_reservation, 4),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memory_reservation, 4),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1, .production_id = 1),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1, .production_id = 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1, .production_id = 2),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1, .production_id = 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_reference, 3, .production_id = 5),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_reference, 3, .production_id = 5),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_reference, 5, .production_id = 13),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_reference, 5, .production_id = 13),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delete_property, 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_property, 3),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delete_node, 3),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_node, 3),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_reference, 2, .production_id = 4),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_reference, 2, .production_id = 4),
  [382] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_labeled_node_repeat1, 2, .production_id = 7), SHIFT_REPEAT(151),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_labeled_node_repeat1, 2, .production_id = 7),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_labeled_node_repeat1, 2, .production_id = 7),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_labeled_node_repeat1, 2, .production_id = 3),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_labeled_node_repeat1, 2, .production_id = 3),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer_cell_items, 1),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_cell_items, 1),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer_cell_items, 3),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_cell_items, 3),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(108),
  [444] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(108),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_byte_string_literal_repeat1, 2),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_byte_string_literal_repeat1, 2), SHIFT_REPEAT(118),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 2),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 2), SHIFT_REPEAT(57),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_preproc_params_repeat1, 2), SHIFT_REPEAT(136),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_preproc_params_repeat1, 2),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(55),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_params, 4),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_string_literal, 3),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_params, 3),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_cells, 2),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_params, 2),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_string_literal, 2),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_cells, 3),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [561] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_devicetree(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
