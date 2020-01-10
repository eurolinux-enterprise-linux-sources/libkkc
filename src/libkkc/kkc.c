/* kkc.c generated by valac 0.20.1.19-a6516, the Vala compiler
 * generated from kkc.vala, do not modify */

/*
 * Copyright (C) 2012-2013 Daiki Ueno <ueno@gnu.org>
 * Copyright (C) 2012-2013 Red Hat, Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <glib.h>
#include <glib-object.h>
#include <glib/gi18n-lib.h>
#include <config.h>


#define KKC_TYPE_DICTIONARY_UTILS (kkc_dictionary_utils_get_type ())
#define KKC_DICTIONARY_UTILS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_DICTIONARY_UTILS, KkcDictionaryUtils))
#define KKC_DICTIONARY_UTILS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_DICTIONARY_UTILS, KkcDictionaryUtilsClass))
#define KKC_IS_DICTIONARY_UTILS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_DICTIONARY_UTILS))
#define KKC_IS_DICTIONARY_UTILS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_DICTIONARY_UTILS))
#define KKC_DICTIONARY_UTILS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_DICTIONARY_UTILS, KkcDictionaryUtilsClass))

typedef struct _KkcDictionaryUtils KkcDictionaryUtils;
typedef struct _KkcDictionaryUtilsClass KkcDictionaryUtilsClass;
#define _g_type_class_unref0(var) ((var == NULL) ? NULL : (var = (g_type_class_unref (var), NULL)))

#define KKC_TYPE_KEYMAP (kkc_keymap_get_type ())
#define KKC_KEYMAP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_KEYMAP, KkcKeymap))
#define KKC_KEYMAP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_KEYMAP, KkcKeymapClass))
#define KKC_IS_KEYMAP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_KEYMAP))
#define KKC_IS_KEYMAP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_KEYMAP))
#define KKC_KEYMAP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_KEYMAP, KkcKeymapClass))

typedef struct _KkcKeymap KkcKeymap;
typedef struct _KkcKeymapClass KkcKeymapClass;

#define KKC_TYPE_KEY_EVENT_UTILS (kkc_key_event_utils_get_type ())
#define KKC_KEY_EVENT_UTILS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_KEY_EVENT_UTILS, KkcKeyEventUtils))
#define KKC_KEY_EVENT_UTILS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_KEY_EVENT_UTILS, KkcKeyEventUtilsClass))
#define KKC_IS_KEY_EVENT_UTILS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_KEY_EVENT_UTILS))
#define KKC_IS_KEY_EVENT_UTILS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_KEY_EVENT_UTILS))
#define KKC_KEY_EVENT_UTILS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_KEY_EVENT_UTILS, KkcKeyEventUtilsClass))

typedef struct _KkcKeyEventUtils KkcKeyEventUtils;
typedef struct _KkcKeyEventUtilsClass KkcKeyEventUtilsClass;

#define KKC_TYPE_METADATA_FILE (kkc_metadata_file_get_type ())
#define KKC_METADATA_FILE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_METADATA_FILE, KkcMetadataFile))
#define KKC_METADATA_FILE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_METADATA_FILE, KkcMetadataFileClass))
#define KKC_IS_METADATA_FILE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_METADATA_FILE))
#define KKC_IS_METADATA_FILE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_METADATA_FILE))
#define KKC_METADATA_FILE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_METADATA_FILE, KkcMetadataFileClass))

typedef struct _KkcMetadataFile KkcMetadataFile;
typedef struct _KkcMetadataFileClass KkcMetadataFileClass;

#define KKC_TYPE_LANGUAGE_MODEL_METADATA (kkc_language_model_metadata_get_type ())
#define KKC_LANGUAGE_MODEL_METADATA(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_LANGUAGE_MODEL_METADATA, KkcLanguageModelMetadata))
#define KKC_LANGUAGE_MODEL_METADATA_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_LANGUAGE_MODEL_METADATA, KkcLanguageModelMetadataClass))
#define KKC_IS_LANGUAGE_MODEL_METADATA(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_LANGUAGE_MODEL_METADATA))
#define KKC_IS_LANGUAGE_MODEL_METADATA_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_LANGUAGE_MODEL_METADATA))
#define KKC_LANGUAGE_MODEL_METADATA_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_LANGUAGE_MODEL_METADATA, KkcLanguageModelMetadataClass))

typedef struct _KkcLanguageModelMetadata KkcLanguageModelMetadata;
typedef struct _KkcLanguageModelMetadataClass KkcLanguageModelMetadataClass;

#define KKC_TYPE_RULE_METADATA (kkc_rule_metadata_get_type ())
#define KKC_RULE_METADATA(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_RULE_METADATA, KkcRuleMetadata))
#define KKC_RULE_METADATA_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_RULE_METADATA, KkcRuleMetadataClass))
#define KKC_IS_RULE_METADATA(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_RULE_METADATA))
#define KKC_IS_RULE_METADATA_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_RULE_METADATA))
#define KKC_RULE_METADATA_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_RULE_METADATA, KkcRuleMetadataClass))

typedef struct _KkcRuleMetadata KkcRuleMetadata;
typedef struct _KkcRuleMetadataClass KkcRuleMetadataClass;

#define KKC_TYPE_ROM_KANA_UTILS (kkc_rom_kana_utils_get_type ())
#define KKC_ROM_KANA_UTILS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_ROM_KANA_UTILS, KkcRomKanaUtils))
#define KKC_ROM_KANA_UTILS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_ROM_KANA_UTILS, KkcRomKanaUtilsClass))
#define KKC_IS_ROM_KANA_UTILS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_ROM_KANA_UTILS))
#define KKC_IS_ROM_KANA_UTILS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_ROM_KANA_UTILS))
#define KKC_ROM_KANA_UTILS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_ROM_KANA_UTILS, KkcRomKanaUtilsClass))

typedef struct _KkcRomKanaUtils KkcRomKanaUtils;
typedef struct _KkcRomKanaUtilsClass KkcRomKanaUtilsClass;

#define KKC_TYPE_KANA_MODE (kkc_kana_mode_get_type ())

#define KKC_TYPE_INPUT_MODE (kkc_input_mode_get_type ())

typedef enum  {
	KKC_KANA_MODE_HIRAGANA,
	KKC_KANA_MODE_KATAKANA,
	KKC_KANA_MODE_HANKAKU_KATAKANA,
	KKC_KANA_MODE_LATIN,
	KKC_KANA_MODE_WIDE_LATIN
} KkcKanaMode;

typedef enum  {
	KKC_INPUT_MODE_HIRAGANA = KKC_KANA_MODE_HIRAGANA,
	KKC_INPUT_MODE_KATAKANA = KKC_KANA_MODE_KATAKANA,
	KKC_INPUT_MODE_HANKAKU_KATAKANA = KKC_KANA_MODE_HANKAKU_KATAKANA,
	KKC_INPUT_MODE_LATIN = KKC_KANA_MODE_LATIN,
	KKC_INPUT_MODE_WIDE_LATIN = KKC_KANA_MODE_WIDE_LATIN,
	KKC_INPUT_MODE_DIRECT
} KkcInputMode;


extern gboolean kkc_use_mapped_index_file;
gboolean kkc_use_mapped_index_file = FALSE;

void kkc_init (void);
GType kkc_dictionary_utils_get_type (void) G_GNUC_CONST;
GType kkc_keymap_get_type (void) G_GNUC_CONST;
GType kkc_key_event_utils_get_type (void) G_GNUC_CONST;
GType kkc_metadata_file_get_type (void) G_GNUC_CONST;
GType kkc_language_model_metadata_get_type (void) G_GNUC_CONST;
GType kkc_rule_metadata_get_type (void) G_GNUC_CONST;
GType kkc_rom_kana_utils_get_type (void) G_GNUC_CONST;
GType kkc_kana_mode_get_type (void) G_GNUC_CONST;
GType kkc_input_mode_get_type (void) G_GNUC_CONST;


/**
     * Initialize libkkc.
     *
     * Must be called before using any functions in libkkc.
     */
void kkc_init (void) {
	GTypeClass* _tmp0_ = NULL;
	GTypeClass* _tmp1_;
	GTypeClass* _tmp2_ = NULL;
	GTypeClass* _tmp3_;
	GTypeClass* _tmp4_ = NULL;
	GTypeClass* _tmp5_;
	GTypeClass* _tmp6_ = NULL;
	GTypeClass* _tmp7_;
	GTypeClass* _tmp8_ = NULL;
	GTypeClass* _tmp9_;
	GTypeClass* _tmp10_ = NULL;
	GTypeClass* _tmp11_;
	_tmp0_ = g_type_class_ref (KKC_TYPE_DICTIONARY_UTILS);
	_tmp1_ = _tmp0_;
	_g_type_class_unref0 (_tmp1_);
	_tmp2_ = g_type_class_ref (KKC_TYPE_KEYMAP);
	_tmp3_ = _tmp2_;
	_g_type_class_unref0 (_tmp3_);
	_tmp4_ = g_type_class_ref (KKC_TYPE_KEY_EVENT_UTILS);
	_tmp5_ = _tmp4_;
	_g_type_class_unref0 (_tmp5_);
	_tmp6_ = g_type_class_ref (KKC_TYPE_LANGUAGE_MODEL_METADATA);
	_tmp7_ = _tmp6_;
	_g_type_class_unref0 (_tmp7_);
	_tmp8_ = g_type_class_ref (KKC_TYPE_RULE_METADATA);
	_tmp9_ = _tmp8_;
	_g_type_class_unref0 (_tmp9_);
	_tmp10_ = g_type_class_ref (KKC_TYPE_ROM_KANA_UTILS);
	_tmp11_ = _tmp10_;
	_g_type_class_unref0 (_tmp11_);
	bindtextdomain (GETTEXT_PACKAGE, LOCALEDIR);
}


/**
     * Type to specify input modes.
     */
GType kkc_input_mode_get_type (void) {
	static volatile gsize kkc_input_mode_type_id__volatile = 0;
	if (g_once_init_enter (&kkc_input_mode_type_id__volatile)) {
		static const GEnumValue values[] = {{KKC_INPUT_MODE_HIRAGANA, "KKC_INPUT_MODE_HIRAGANA", "hiragana"}, {KKC_INPUT_MODE_KATAKANA, "KKC_INPUT_MODE_KATAKANA", "katakana"}, {KKC_INPUT_MODE_HANKAKU_KATAKANA, "KKC_INPUT_MODE_HANKAKU_KATAKANA", "hankaku-katakana"}, {KKC_INPUT_MODE_LATIN, "KKC_INPUT_MODE_LATIN", "latin"}, {KKC_INPUT_MODE_WIDE_LATIN, "KKC_INPUT_MODE_WIDE_LATIN", "wide-latin"}, {KKC_INPUT_MODE_DIRECT, "KKC_INPUT_MODE_DIRECT", "direct"}, {0, NULL, NULL}};
		GType kkc_input_mode_type_id;
		kkc_input_mode_type_id = g_enum_register_static ("KkcInputMode", values);
		g_once_init_leave (&kkc_input_mode_type_id__volatile, kkc_input_mode_type_id);
	}
	return kkc_input_mode_type_id__volatile;
}



