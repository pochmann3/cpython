// This file is generated by Tools/cases_generator/generate_cases.py
// from:
//   Python/bytecodes.c
// Do not edit!

        case NOP: {
            break;
        }

        case RESUME_CHECK: {
            break;
        }

        case POP_TOP: {
            STACK_SHRINK(1);
            break;
        }

        case PUSH_NULL: {
            STACK_GROW(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case END_SEND: {
            STACK_SHRINK(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case UNARY_NEGATIVE: {
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case UNARY_NOT: {
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case _TO_BOOL: {
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case TO_BOOL_BOOL: {
            break;
        }

        case TO_BOOL_INT: {
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case TO_BOOL_LIST: {
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case TO_BOOL_NONE: {
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case TO_BOOL_STR: {
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case TO_BOOL_ALWAYS_TRUE: {
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case UNARY_INVERT: {
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case _GUARD_BOTH_INT: {
            break;
        }

        case _GUARD_BOTH_FLOAT: {
            break;
        }

        case _BINARY_OP_MULTIPLY_FLOAT: {
            STACK_SHRINK(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case _BINARY_OP_ADD_FLOAT: {
            STACK_SHRINK(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case _BINARY_OP_SUBTRACT_FLOAT: {
            STACK_SHRINK(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case _GUARD_BOTH_UNICODE: {
            break;
        }

        case _BINARY_OP_ADD_UNICODE: {
            STACK_SHRINK(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case _BINARY_SUBSCR: {
            STACK_SHRINK(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case BINARY_SLICE: {
            STACK_SHRINK(2);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case STORE_SLICE: {
            STACK_SHRINK(4);
            break;
        }

        case BINARY_SUBSCR_LIST_INT: {
            STACK_SHRINK(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case BINARY_SUBSCR_STR_INT: {
            STACK_SHRINK(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case BINARY_SUBSCR_TUPLE_INT: {
            STACK_SHRINK(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case BINARY_SUBSCR_DICT: {
            STACK_SHRINK(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case LIST_APPEND: {
            STACK_SHRINK(1);
            break;
        }

        case SET_ADD: {
            STACK_SHRINK(1);
            break;
        }

        case _STORE_SUBSCR: {
            STACK_SHRINK(3);
            break;
        }

        case STORE_SUBSCR_LIST_INT: {
            STACK_SHRINK(3);
            break;
        }

        case STORE_SUBSCR_DICT: {
            STACK_SHRINK(3);
            break;
        }

        case DELETE_SUBSCR: {
            STACK_SHRINK(2);
            break;
        }

        case CALL_INTRINSIC_1: {
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case CALL_INTRINSIC_2: {
            STACK_SHRINK(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case _POP_FRAME: {
            STACK_SHRINK(1);
            break;
        }

        case GET_AITER: {
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case GET_ANEXT: {
            STACK_GROW(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case GET_AWAITABLE: {
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case POP_EXCEPT: {
            STACK_SHRINK(1);
            break;
        }

        case LOAD_ASSERTION_ERROR: {
            STACK_GROW(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case LOAD_BUILD_CLASS: {
            STACK_GROW(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case STORE_NAME: {
            STACK_SHRINK(1);
            break;
        }

        case DELETE_NAME: {
            break;
        }

        case _SPECIALIZE_UNPACK_SEQUENCE: {
            break;
        }

        case _UNPACK_SEQUENCE: {
            STACK_SHRINK(1);
            STACK_GROW(oparg);
            break;
        }

        case UNPACK_SEQUENCE_TWO_TUPLE: {
            STACK_SHRINK(1);
            STACK_GROW(oparg);
            break;
        }

        case UNPACK_SEQUENCE_TUPLE: {
            STACK_SHRINK(1);
            STACK_GROW(oparg);
            break;
        }

        case UNPACK_SEQUENCE_LIST: {
            STACK_SHRINK(1);
            STACK_GROW(oparg);
            break;
        }

        case UNPACK_EX: {
            STACK_GROW((oparg & 0xFF) + (oparg >> 8));
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1 - (oparg >> 8))), true);
            break;
        }

        case _STORE_ATTR: {
            STACK_SHRINK(2);
            break;
        }

        case DELETE_ATTR: {
            STACK_SHRINK(1);
            break;
        }

        case STORE_GLOBAL: {
            STACK_SHRINK(1);
            break;
        }

        case DELETE_GLOBAL: {
            break;
        }

        case LOAD_LOCALS: {
            STACK_GROW(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case LOAD_FROM_DICT_OR_GLOBALS: {
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case LOAD_NAME: {
            STACK_GROW(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case _LOAD_GLOBAL: {
            STACK_GROW(1);
            STACK_GROW(((oparg & 1) ? 1 : 0));
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1 - (oparg & 1 ? 1 : 0))), true);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-(oparg & 1 ? 1 : 0))), true);
            break;
        }

        case _GUARD_GLOBALS_VERSION: {
            break;
        }

        case _GUARD_BUILTINS_VERSION: {
            break;
        }

        case _LOAD_GLOBAL_MODULE: {
            STACK_GROW(1);
            STACK_GROW(((oparg & 1) ? 1 : 0));
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1 - (oparg & 1 ? 1 : 0))), true);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-(oparg & 1 ? 1 : 0))), true);
            break;
        }

        case _LOAD_GLOBAL_BUILTINS: {
            STACK_GROW(1);
            STACK_GROW(((oparg & 1) ? 1 : 0));
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1 - (oparg & 1 ? 1 : 0))), true);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-(oparg & 1 ? 1 : 0))), true);
            break;
        }

        case DELETE_FAST: {
            break;
        }

        case MAKE_CELL: {
            break;
        }

        case DELETE_DEREF: {
            break;
        }

        case LOAD_FROM_DICT_OR_DEREF: {
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case LOAD_DEREF: {
            STACK_GROW(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case STORE_DEREF: {
            STACK_SHRINK(1);
            break;
        }

        case COPY_FREE_VARS: {
            break;
        }

        case BUILD_STRING: {
            STACK_SHRINK(oparg);
            STACK_GROW(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case BUILD_TUPLE: {
            STACK_SHRINK(oparg);
            STACK_GROW(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case BUILD_LIST: {
            STACK_SHRINK(oparg);
            STACK_GROW(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case LIST_EXTEND: {
            STACK_SHRINK(1);
            break;
        }

        case SET_UPDATE: {
            STACK_SHRINK(1);
            break;
        }

        case BUILD_SET: {
            STACK_SHRINK(oparg);
            STACK_GROW(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case BUILD_MAP: {
            STACK_SHRINK(oparg*2);
            STACK_GROW(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case SETUP_ANNOTATIONS: {
            break;
        }

        case BUILD_CONST_KEY_MAP: {
            STACK_SHRINK(oparg);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case DICT_UPDATE: {
            STACK_SHRINK(1);
            break;
        }

        case DICT_MERGE: {
            STACK_SHRINK(1);
            break;
        }

        case MAP_ADD: {
            STACK_SHRINK(2);
            break;
        }

        case LOAD_SUPER_ATTR_ATTR: {
            STACK_SHRINK(2);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(0)), true);
            break;
        }

        case LOAD_SUPER_ATTR_METHOD: {
            STACK_SHRINK(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-2)), true);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case _LOAD_ATTR: {
            STACK_GROW(((oparg & 1) ? 1 : 0));
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1 - (oparg & 1 ? 1 : 0))), true);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-(oparg & 1 ? 1 : 0))), true);
            break;
        }

        case _GUARD_TYPE_VERSION: {
            break;
        }

        case _CHECK_MANAGED_OBJECT_HAS_VALUES: {
            break;
        }

        case _LOAD_ATTR_INSTANCE_VALUE: {
            STACK_GROW(((oparg & 1) ? 1 : 0));
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1 - (oparg & 1 ? 1 : 0))), true);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-(oparg & 1 ? 1 : 0))), true);
            break;
        }

        case _CHECK_ATTR_MODULE: {
            break;
        }

        case _LOAD_ATTR_MODULE: {
            STACK_GROW(((oparg & 1) ? 1 : 0));
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1 - (oparg & 1 ? 1 : 0))), true);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-(oparg & 1 ? 1 : 0))), true);
            break;
        }

        case _CHECK_ATTR_WITH_HINT: {
            break;
        }

        case _LOAD_ATTR_WITH_HINT: {
            STACK_GROW(((oparg & 1) ? 1 : 0));
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1 - (oparg & 1 ? 1 : 0))), true);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-(oparg & 1 ? 1 : 0))), true);
            break;
        }

        case _LOAD_ATTR_SLOT: {
            STACK_GROW(((oparg & 1) ? 1 : 0));
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1 - (oparg & 1 ? 1 : 0))), true);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-(oparg & 1 ? 1 : 0))), true);
            break;
        }

        case _CHECK_ATTR_CLASS: {
            break;
        }

        case _LOAD_ATTR_CLASS: {
            STACK_GROW(((oparg & 1) ? 1 : 0));
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1 - (oparg & 1 ? 1 : 0))), true);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-(oparg & 1 ? 1 : 0))), true);
            break;
        }

        case _GUARD_DORV_VALUES: {
            break;
        }

        case _STORE_ATTR_INSTANCE_VALUE: {
            STACK_SHRINK(2);
            break;
        }

        case _STORE_ATTR_SLOT: {
            STACK_SHRINK(2);
            break;
        }

        case _COMPARE_OP: {
            STACK_SHRINK(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case COMPARE_OP_FLOAT: {
            STACK_SHRINK(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case COMPARE_OP_INT: {
            STACK_SHRINK(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case COMPARE_OP_STR: {
            STACK_SHRINK(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case IS_OP: {
            STACK_SHRINK(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case CONTAINS_OP: {
            STACK_SHRINK(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case CHECK_EG_MATCH: {
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-2)), true);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case CHECK_EXC_MATCH: {
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case _IS_NONE: {
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case GET_LEN: {
            STACK_GROW(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case MATCH_CLASS: {
            STACK_SHRINK(2);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case MATCH_MAPPING: {
            STACK_GROW(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case MATCH_SEQUENCE: {
            STACK_GROW(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case MATCH_KEYS: {
            STACK_GROW(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case GET_ITER: {
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case GET_YIELD_FROM_ITER: {
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case _ITER_CHECK_LIST: {
            break;
        }

        case _IS_ITER_EXHAUSTED_LIST: {
            STACK_GROW(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case _ITER_NEXT_LIST: {
            STACK_GROW(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case _ITER_CHECK_TUPLE: {
            break;
        }

        case _IS_ITER_EXHAUSTED_TUPLE: {
            STACK_GROW(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case _ITER_NEXT_TUPLE: {
            STACK_GROW(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case _ITER_CHECK_RANGE: {
            break;
        }

        case _IS_ITER_EXHAUSTED_RANGE: {
            STACK_GROW(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case _ITER_NEXT_RANGE: {
            STACK_GROW(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case BEFORE_ASYNC_WITH: {
            STACK_GROW(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-2)), true);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case WITH_EXCEPT_START: {
            STACK_GROW(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case PUSH_EXC_INFO: {
            STACK_GROW(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-2)), true);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case _GUARD_DORV_VALUES_INST_ATTR_FROM_DICT: {
            break;
        }

        case _GUARD_KEYS_VERSION: {
            break;
        }

        case _LOAD_ATTR_METHOD_WITH_VALUES: {
            STACK_GROW(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-2)), true);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case _LOAD_ATTR_METHOD_NO_DICT: {
            STACK_GROW(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-2)), true);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case _LOAD_ATTR_NONDESCRIPTOR_WITH_VALUES: {
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(0)), true);
            break;
        }

        case _LOAD_ATTR_NONDESCRIPTOR_NO_DICT: {
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(0)), true);
            break;
        }

        case _CHECK_ATTR_METHOD_LAZY_DICT: {
            break;
        }

        case _LOAD_ATTR_METHOD_LAZY_DICT: {
            STACK_GROW(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-2)), true);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case _CHECK_CALL_BOUND_METHOD_EXACT_ARGS: {
            break;
        }

        case _INIT_CALL_BOUND_METHOD_EXACT_ARGS: {
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-2 - oparg)), true);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1 - oparg)), true);
            break;
        }

        case _CHECK_PEP_523: {
            break;
        }

        case _CHECK_FUNCTION_EXACT_ARGS: {
            break;
        }

        case _CHECK_STACK_SPACE: {
            break;
        }

        case _INIT_CALL_PY_EXACT_ARGS: {
            STACK_SHRINK(oparg);
            STACK_SHRINK(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case _PUSH_FRAME: {
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case CALL_TYPE_1: {
            STACK_SHRINK(oparg);
            STACK_SHRINK(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case CALL_STR_1: {
            STACK_SHRINK(oparg);
            STACK_SHRINK(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case CALL_TUPLE_1: {
            STACK_SHRINK(oparg);
            STACK_SHRINK(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case EXIT_INIT_CHECK: {
            STACK_SHRINK(1);
            break;
        }

        case CALL_BUILTIN_CLASS: {
            STACK_SHRINK(oparg);
            STACK_SHRINK(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case CALL_BUILTIN_O: {
            STACK_SHRINK(oparg);
            STACK_SHRINK(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case CALL_BUILTIN_FAST: {
            STACK_SHRINK(oparg);
            STACK_SHRINK(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case CALL_BUILTIN_FAST_WITH_KEYWORDS: {
            STACK_SHRINK(oparg);
            STACK_SHRINK(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case CALL_LEN: {
            STACK_SHRINK(oparg);
            STACK_SHRINK(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case CALL_ISINSTANCE: {
            STACK_SHRINK(oparg);
            STACK_SHRINK(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case CALL_METHOD_DESCRIPTOR_O: {
            STACK_SHRINK(oparg);
            STACK_SHRINK(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case CALL_METHOD_DESCRIPTOR_FAST_WITH_KEYWORDS: {
            STACK_SHRINK(oparg);
            STACK_SHRINK(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case CALL_METHOD_DESCRIPTOR_NOARGS: {
            STACK_SHRINK(oparg);
            STACK_SHRINK(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case CALL_METHOD_DESCRIPTOR_FAST: {
            STACK_SHRINK(oparg);
            STACK_SHRINK(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case MAKE_FUNCTION: {
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case SET_FUNCTION_ATTRIBUTE: {
            STACK_SHRINK(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case BUILD_SLICE: {
            STACK_SHRINK(((oparg == 3) ? 1 : 0));
            STACK_SHRINK(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case CONVERT_VALUE: {
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case FORMAT_SIMPLE: {
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case FORMAT_WITH_SPEC: {
            STACK_SHRINK(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case _BINARY_OP: {
            STACK_SHRINK(1);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case SWAP: {
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-2 - (oparg-2))), true);
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1)), true);
            break;
        }

        case _POP_JUMP_IF_FALSE: {
            STACK_SHRINK(1);
            break;
        }

        case _POP_JUMP_IF_TRUE: {
            STACK_SHRINK(1);
            break;
        }

        case _JUMP_TO_TOP: {
            break;
        }

        case _SET_IP: {
            break;
        }

        case _SAVE_RETURN_OFFSET: {
            break;
        }

        case _EXIT_TRACE: {
            break;
        }

        case _INSERT: {
            PARTITIONNODE_OVERWRITE((_Py_PARTITIONNODE_t *)PARTITIONNODE_NULLROOT, PEEK(-(-1 - oparg)), true);
            break;
        }