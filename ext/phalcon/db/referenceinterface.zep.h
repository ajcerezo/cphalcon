
extern zend_class_entry *phalcon_db_referenceinterface_ce;

ZEPHIR_INIT_CLASS(Phalcon_Db_ReferenceInterface);

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_db_referenceinterface_getname, 0, 0, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_db_referenceinterface_getname, 0, 0, IS_STRING, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_db_referenceinterface_getschemaname, 0, 0, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_db_referenceinterface_getschemaname, 0, 0, IS_STRING, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_db_referenceinterface_getreferencedschema, 0, 0, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_db_referenceinterface_getreferencedschema, 0, 0, IS_STRING, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_db_referenceinterface_getcolumns, 0, 0, IS_ARRAY, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_db_referenceinterface_getcolumns, 0, 0, IS_ARRAY, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_db_referenceinterface_getreferencedtable, 0, 0, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_db_referenceinterface_getreferencedtable, 0, 0, IS_STRING, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_db_referenceinterface_getreferencedcolumns, 0, 0, IS_ARRAY, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_db_referenceinterface_getreferencedcolumns, 0, 0, IS_ARRAY, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_db_referenceinterface_getondelete, 0, 0, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_db_referenceinterface_getondelete, 0, 0, IS_STRING, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_db_referenceinterface_getonupdate, 0, 0, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_db_referenceinterface_getonupdate, 0, 0, IS_STRING, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_phalcon_db_referenceinterface___set_state, 0, 1, Phalcon\\Db\\ReferenceInterface, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_db_referenceinterface___set_state, 0, 1, IS_OBJECT, "Phalcon\\Db\\ReferenceInterface", 0)
#endif
	ZEND_ARG_ARRAY_INFO(0, data, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(phalcon_db_referenceinterface_method_entry) {
	PHP_ABSTRACT_ME(Phalcon_Db_ReferenceInterface, getName, arginfo_phalcon_db_referenceinterface_getname)
	PHP_ABSTRACT_ME(Phalcon_Db_ReferenceInterface, getSchemaName, arginfo_phalcon_db_referenceinterface_getschemaname)
	PHP_ABSTRACT_ME(Phalcon_Db_ReferenceInterface, getReferencedSchema, arginfo_phalcon_db_referenceinterface_getreferencedschema)
	PHP_ABSTRACT_ME(Phalcon_Db_ReferenceInterface, getColumns, arginfo_phalcon_db_referenceinterface_getcolumns)
	PHP_ABSTRACT_ME(Phalcon_Db_ReferenceInterface, getReferencedTable, arginfo_phalcon_db_referenceinterface_getreferencedtable)
	PHP_ABSTRACT_ME(Phalcon_Db_ReferenceInterface, getReferencedColumns, arginfo_phalcon_db_referenceinterface_getreferencedcolumns)
	PHP_ABSTRACT_ME(Phalcon_Db_ReferenceInterface, getOnDelete, arginfo_phalcon_db_referenceinterface_getondelete)
	PHP_ABSTRACT_ME(Phalcon_Db_ReferenceInterface, getOnUpdate, arginfo_phalcon_db_referenceinterface_getonupdate)
	ZEND_FENTRY(__set_state, NULL, arginfo_phalcon_db_referenceinterface___set_state, ZEND_ACC_STATIC|ZEND_ACC_ABSTRACT|ZEND_ACC_PUBLIC)
	PHP_FE_END
};
