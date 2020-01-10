/* dictionary-list.c generated by valac 0.20.1.19-a6516, the Vala compiler
 * generated from dictionary-list.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <libkkc-test.h>
#include <libkkc/libkkc-internals.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


#define TYPE_DICTIONARY_LIST_TESTS (dictionary_list_tests_get_type ())
#define DICTIONARY_LIST_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_DICTIONARY_LIST_TESTS, DictionaryListTests))
#define DICTIONARY_LIST_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_DICTIONARY_LIST_TESTS, DictionaryListTestsClass))
#define IS_DICTIONARY_LIST_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_DICTIONARY_LIST_TESTS))
#define IS_DICTIONARY_LIST_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_DICTIONARY_LIST_TESTS))
#define DICTIONARY_LIST_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_DICTIONARY_LIST_TESTS, DictionaryListTestsClass))

typedef struct _DictionaryListTests DictionaryListTests;
typedef struct _DictionaryListTestsClass DictionaryListTestsClass;
typedef struct _DictionaryListTestsPrivate DictionaryListTestsPrivate;
#define _g_free0(var) ((var == NULL) ? NULL : (var = (g_free (var), NULL)))
#define _g_type_class_unref0(var) ((var == NULL) ? NULL : (var = (g_type_class_unref (var), NULL)))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

struct _DictionaryListTests {
	KkcTestCase parent_instance;
	DictionaryListTestsPrivate * priv;
};

struct _DictionaryListTestsClass {
	KkcTestCaseClass parent_class;
};


static gpointer dictionary_list_tests_parent_class = NULL;

GType dictionary_list_tests_get_type (void) G_GNUC_CONST;
enum  {
	DICTIONARY_LIST_TESTS_DUMMY_PROPERTY
};
DictionaryListTests* dictionary_list_tests_new (void);
DictionaryListTests* dictionary_list_tests_construct (GType object_type);
static void dictionary_list_tests_test_properties (DictionaryListTests* self);
static void _dictionary_list_tests_test_properties_kkc_test_case_test_method (gpointer self);
static void dictionary_list_tests_test_collection (DictionaryListTests* self);
static void _dictionary_list_tests_test_collection_kkc_test_case_test_method (gpointer self);
static GEnumValue* _g_enum_value_dup (GEnumValue* self);
gint _vala_main (gchar** args, int args_length1);


static void _dictionary_list_tests_test_properties_kkc_test_case_test_method (gpointer self) {
#line 5 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	dictionary_list_tests_test_properties (self);
#line 60 "dictionary-list.c"
}


static void _dictionary_list_tests_test_collection_kkc_test_case_test_method (gpointer self) {
#line 6 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	dictionary_list_tests_test_collection (self);
#line 67 "dictionary-list.c"
}


DictionaryListTests* dictionary_list_tests_construct (GType object_type) {
	DictionaryListTests * self = NULL;
#line 3 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	self = (DictionaryListTests*) kkc_test_case_construct (object_type, "DictionaryList");
#line 5 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	kkc_test_case_add_test ((KkcTestCase*) self, "properties", _dictionary_list_tests_test_properties_kkc_test_case_test_method, self);
#line 6 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	kkc_test_case_add_test ((KkcTestCase*) self, "collection", _dictionary_list_tests_test_collection_kkc_test_case_test_method, self);
#line 2 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	return self;
#line 81 "dictionary-list.c"
}


DictionaryListTests* dictionary_list_tests_new (void) {
#line 2 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	return dictionary_list_tests_construct (TYPE_DICTIONARY_LIST_TESTS);
#line 88 "dictionary-list.c"
}


static GEnumValue* _g_enum_value_dup (GEnumValue* self) {
	GEnumValue* dup;
#line 16 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	dup = g_new0 (GEnumValue, 1);
#line 16 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	memcpy (dup, self, sizeof (GEnumValue));
#line 16 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	return dup;
#line 100 "dictionary-list.c"
}


static gpointer __g_enum_value_dup0 (gpointer self) {
#line 16 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	return self ? _g_enum_value_dup (self) : NULL;
#line 107 "dictionary-list.c"
}


static void dictionary_list_tests_test_properties (DictionaryListTests* self) {
	KkcDictionaryList* dictionaries = NULL;
	KkcDictionaryList* _tmp0_;
	gint size = 0;
	KkcDictionaryList* _tmp1_;
	GEnumClass* enum_class = NULL;
	GTypeClass* _tmp2_ = NULL;
#line 9 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	g_return_if_fail (self != NULL);
#line 10 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	_tmp0_ = kkc_dictionary_list_new ();
#line 10 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	dictionaries = _tmp0_;
#line 12 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	_tmp1_ = dictionaries;
#line 12 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	g_object_get ((GObject*) _tmp1_, "size", &size, NULL);
#line 14 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	_tmp2_ = g_type_class_ref (KKC_TYPE_DICTIONARY_CALLBACK_RETURN);
#line 14 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	enum_class = (GEnumClass*) _tmp2_;
#line 132 "dictionary-list.c"
	{
		gint i = 0;
		GEnumClass* _tmp3_;
		gint _tmp4_;
#line 15 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
		_tmp3_ = enum_class;
#line 15 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
		_tmp4_ = _tmp3_->minimum;
#line 15 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
		i = _tmp4_;
#line 143 "dictionary-list.c"
		{
			gboolean _tmp5_ = FALSE;
#line 15 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
			_tmp5_ = TRUE;
#line 15 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
			while (TRUE) {
#line 150 "dictionary-list.c"
				gboolean _tmp6_;
				gint _tmp8_;
				GEnumClass* _tmp9_;
				gint _tmp10_;
				GEnumValue* enum_value = NULL;
				GEnumClass* _tmp11_;
				gint _tmp12_;
				GEnumValue* _tmp13_ = NULL;
				GEnumValue* _tmp14_;
				GEnumValue* _tmp15_;
#line 15 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
				_tmp6_ = _tmp5_;
#line 15 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
				if (!_tmp6_) {
#line 165 "dictionary-list.c"
					gint _tmp7_;
#line 15 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
					_tmp7_ = i;
#line 15 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
					i = _tmp7_ + 1;
#line 171 "dictionary-list.c"
				}
#line 15 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
				_tmp5_ = FALSE;
#line 15 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
				_tmp8_ = i;
#line 15 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
				_tmp9_ = enum_class;
#line 15 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
				_tmp10_ = _tmp9_->maximum;
#line 15 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
				if (!(_tmp8_ <= _tmp10_)) {
#line 15 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
					break;
#line 185 "dictionary-list.c"
				}
#line 16 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
				_tmp11_ = enum_class;
#line 16 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
				_tmp12_ = i;
#line 16 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
				_tmp13_ = g_enum_get_value (_tmp11_, _tmp12_);
#line 16 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
				_tmp14_ = __g_enum_value_dup0 (_tmp13_);
#line 16 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
				enum_value = _tmp14_;
#line 17 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
				_tmp15_ = enum_value;
#line 17 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
				_vala_assert (_tmp15_ != NULL, "enum_value != null");
#line 15 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
				_g_free0 (enum_value);
#line 203 "dictionary-list.c"
			}
		}
	}
#line 9 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	_g_type_class_unref0 (enum_class);
#line 9 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	_g_object_unref0 (dictionaries);
#line 211 "dictionary-list.c"
}


static void dictionary_list_tests_test_collection (DictionaryListTests* self) {
	KkcDictionaryList* dictionaries = NULL;
	KkcDictionaryList* _tmp0_;
	KkcDictionary* system_segment_dictionary = NULL;
	KkcDictionary* _tmp11_;
	gint _tmp12_;
	gint _tmp13_;
	KkcEmptySegmentDictionary* empty_dictionary = NULL;
	KkcEmptySegmentDictionary* _tmp14_;
	gint _tmp15_;
	gint _tmp16_;
	gint _tmp17_;
	gint _tmp18_;
	gint _tmp19_;
	gint _tmp20_;
	GError * _inner_error_ = NULL;
#line 21 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	g_return_if_fail (self != NULL);
#line 22 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	_tmp0_ = kkc_dictionary_list_new ();
#line 22 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	dictionaries = _tmp0_;
#line 24 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	system_segment_dictionary = NULL;
#line 239 "dictionary-list.c"
	{
		gchar* srcdir = NULL;
		const gchar* _tmp1_ = NULL;
		gchar* _tmp2_;
		KkcSystemSegmentDictionary* _tmp3_ = NULL;
		gchar* _tmp4_ = NULL;
		gchar* _tmp5_;
		KkcSystemSegmentDictionary* _tmp6_;
		KkcSystemSegmentDictionary* _tmp7_;
#line 26 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
		_tmp1_ = g_getenv ("srcdir");
#line 26 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
		_tmp2_ = g_strdup (_tmp1_);
#line 26 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
		srcdir = _tmp2_;
#line 27 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
		_vala_assert (srcdir != NULL, "srcdir != null");
#line 28 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
		_tmp4_ = g_build_filename (srcdir, "system-segment-dictionary", NULL);
#line 28 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
		_tmp5_ = _tmp4_;
#line 28 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
		_tmp6_ = kkc_system_segment_dictionary_new (_tmp5_, "EUC-JP", &_inner_error_);
#line 28 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
		_tmp7_ = _tmp6_;
#line 28 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
		_g_free0 (_tmp5_);
#line 28 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
		_tmp3_ = _tmp7_;
#line 28 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
		if (_inner_error_ != NULL) {
#line 28 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
			_g_free0 (srcdir);
#line 273 "dictionary-list.c"
			goto __catch0_g_error;
		}
#line 28 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
		_g_object_unref0 (system_segment_dictionary);
#line 28 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
		system_segment_dictionary = (KkcDictionary*) _tmp3_;
#line 25 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
		_g_free0 (srcdir);
#line 282 "dictionary-list.c"
	}
	goto __finally0;
	__catch0_g_error:
	{
		GError* e = NULL;
		FILE* _tmp8_;
		GError* _tmp9_;
		const gchar* _tmp10_;
#line 25 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
		e = _inner_error_;
#line 25 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
		_inner_error_ = NULL;
#line 31 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
		_tmp8_ = stderr;
#line 31 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
		_tmp9_ = e;
#line 31 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
		_tmp10_ = _tmp9_->message;
#line 31 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
		fprintf (_tmp8_, "%s\n", _tmp10_);
#line 25 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
		_g_error_free0 (e);
#line 305 "dictionary-list.c"
	}
	__finally0:
#line 25 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	if (_inner_error_ != NULL) {
#line 25 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
		_g_object_unref0 (system_segment_dictionary);
#line 25 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
		_g_object_unref0 (dictionaries);
#line 25 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 25 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
		g_clear_error (&_inner_error_);
#line 25 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
		return;
#line 320 "dictionary-list.c"
	}
#line 33 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	_tmp11_ = system_segment_dictionary;
#line 33 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	kkc_dictionary_list_add (dictionaries, _tmp11_);
#line 34 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	_tmp12_ = kkc_dictionary_list_get_size (dictionaries);
#line 34 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	_tmp13_ = _tmp12_;
#line 34 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	_vala_assert (_tmp13_ == 1, "dictionaries.size == 1");
#line 36 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	_tmp14_ = kkc_empty_segment_dictionary_new ();
#line 36 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	empty_dictionary = _tmp14_;
#line 37 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	kkc_dictionary_list_add (dictionaries, (KkcDictionary*) empty_dictionary);
#line 38 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	_tmp15_ = kkc_dictionary_list_get_size (dictionaries);
#line 38 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	_tmp16_ = _tmp15_;
#line 38 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	_vala_assert (_tmp16_ == 2, "dictionaries.size == 2");
#line 40 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	kkc_dictionary_list_remove (dictionaries, (KkcDictionary*) empty_dictionary);
#line 41 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	_tmp17_ = kkc_dictionary_list_get_size (dictionaries);
#line 41 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	_tmp18_ = _tmp17_;
#line 41 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	_vala_assert (_tmp18_ == 1, "dictionaries.size == 1");
#line 43 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	kkc_dictionary_list_clear (dictionaries);
#line 44 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	_tmp19_ = kkc_dictionary_list_get_size (dictionaries);
#line 44 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	_tmp20_ = _tmp19_;
#line 44 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	_vala_assert (_tmp20_ == 0, "dictionaries.size == 0");
#line 21 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	_g_object_unref0 (empty_dictionary);
#line 21 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	_g_object_unref0 (system_segment_dictionary);
#line 21 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	_g_object_unref0 (dictionaries);
#line 366 "dictionary-list.c"
}


static void dictionary_list_tests_class_init (DictionaryListTestsClass * klass) {
#line 1 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	dictionary_list_tests_parent_class = g_type_class_peek_parent (klass);
#line 373 "dictionary-list.c"
}


static void dictionary_list_tests_instance_init (DictionaryListTests * self) {
}


GType dictionary_list_tests_get_type (void) {
	static volatile gsize dictionary_list_tests_type_id__volatile = 0;
	if (g_once_init_enter (&dictionary_list_tests_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (DictionaryListTestsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) dictionary_list_tests_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (DictionaryListTests), 0, (GInstanceInitFunc) dictionary_list_tests_instance_init, NULL };
		GType dictionary_list_tests_type_id;
		dictionary_list_tests_type_id = g_type_register_static (KKC_TYPE_TEST_CASE, "DictionaryListTests", &g_define_type_info, 0);
		g_once_init_leave (&dictionary_list_tests_type_id__volatile, dictionary_list_tests_type_id);
	}
	return dictionary_list_tests_type_id__volatile;
}


gint _vala_main (gchar** args, int args_length1) {
	gint result = 0;
	GTestSuite* root = NULL;
	GTestSuite* _tmp0_ = NULL;
	DictionaryListTests* _tmp1_;
	DictionaryListTests* _tmp2_;
	GTestSuite* _tmp3_ = NULL;
#line 49 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	g_test_init (&args_length1, &args, NULL);
#line 50 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	kkc_init ();
#line 52 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	_tmp0_ = g_test_get_root ();
#line 52 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	root = _tmp0_;
#line 53 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	_tmp1_ = dictionary_list_tests_new ();
#line 53 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	_tmp2_ = _tmp1_;
#line 53 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	_tmp3_ = kkc_test_case_get_suite ((KkcTestCase*) _tmp2_);
#line 53 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	g_test_suite_add_suite (root, _tmp3_);
#line 53 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	_g_object_unref0 (_tmp2_);
#line 55 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	g_test_run ();
#line 57 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	result = 0;
#line 57 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	return result;
#line 424 "dictionary-list.c"
}


int main (int argc, char ** argv) {
#line 48 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	g_type_init ();
#line 48 "/home/ueno/devel/libkkc/tests/dictionary-list.vala"
	return _vala_main (argv, argc);
#line 433 "dictionary-list.c"
}



