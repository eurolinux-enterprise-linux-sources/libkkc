/* keymap.c generated by valac 0.20.1.19-a6516, the Vala compiler
 * generated from keymap.vala, do not modify */

/*
 * Copyright (C) 2011-2013 Daiki Ueno <ueno@gnu.org>
 * Copyright (C) 2011-2013 Red Hat, Inc.
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
#include <stdlib.h>
#include <string.h>
#include <gee.h>
#include <glib/gi18n-lib.h>
#include <config.h>


#define KKC_TYPE_KEYMAP_COMMAND_ENTRY (kkc_keymap_command_entry_get_type ())
typedef struct _KkcKeymapCommandEntry KkcKeymapCommandEntry;
#define _g_free0(var) (var = (g_free (var), NULL))

#define KKC_TYPE_KEYMAP_ENTRY (kkc_keymap_entry_get_type ())

#define KKC_TYPE_KEY_EVENT (kkc_key_event_get_type ())
#define KKC_KEY_EVENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_KEY_EVENT, KkcKeyEvent))
#define KKC_KEY_EVENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_KEY_EVENT, KkcKeyEventClass))
#define KKC_IS_KEY_EVENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_KEY_EVENT))
#define KKC_IS_KEY_EVENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_KEY_EVENT))
#define KKC_KEY_EVENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_KEY_EVENT, KkcKeyEventClass))

typedef struct _KkcKeyEvent KkcKeyEvent;
typedef struct _KkcKeyEventClass KkcKeyEventClass;
typedef struct _KkcKeymapEntry KkcKeymapEntry;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define KKC_TYPE_KEYMAP (kkc_keymap_get_type ())
#define KKC_KEYMAP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_KEYMAP, KkcKeymap))
#define KKC_KEYMAP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_KEYMAP, KkcKeymapClass))
#define KKC_IS_KEYMAP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_KEYMAP))
#define KKC_IS_KEYMAP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_KEYMAP))
#define KKC_KEYMAP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_KEYMAP, KkcKeymapClass))

typedef struct _KkcKeymap KkcKeymap;
typedef struct _KkcKeymapClass KkcKeymapClass;
typedef struct _KkcKeymapPrivate KkcKeymapPrivate;

#define KKC_TYPE_MODIFIER_TYPE (kkc_modifier_type_get_type ())

struct _KkcKeymapCommandEntry {
	gchar* name;
	gchar* label;
};

struct _KkcKeymapEntry {
	KkcKeyEvent* key;
	gchar* command;
};

struct _KkcKeymap {
	GObject parent_instance;
	KkcKeymapPrivate * priv;
};

struct _KkcKeymapClass {
	GObjectClass parent_class;
};

struct _KkcKeymapPrivate {
	KkcKeymap* _parent;
	GeeMap* map_entries;
};

typedef enum  {
	KKC_MODIFIER_TYPE_NONE = 0,
	KKC_MODIFIER_TYPE_SHIFT_MASK = 1 << 0,
	KKC_MODIFIER_TYPE_LOCK_MASK = 1 << 1,
	KKC_MODIFIER_TYPE_CONTROL_MASK = 1 << 2,
	KKC_MODIFIER_TYPE_MOD1_MASK = 1 << 3,
	KKC_MODIFIER_TYPE_MOD2_MASK = 1 << 4,
	KKC_MODIFIER_TYPE_MOD3_MASK = 1 << 5,
	KKC_MODIFIER_TYPE_MOD4_MASK = 1 << 6,
	KKC_MODIFIER_TYPE_MOD5_MASK = 1 << 7,
	KKC_MODIFIER_TYPE_LSHIFT_MASK = 1 << 22,
	KKC_MODIFIER_TYPE_RSHIFT_MASK = 1 << 23,
	KKC_MODIFIER_TYPE_SUPER_MASK = 1 << 26,
	KKC_MODIFIER_TYPE_HYPER_MASK = 1 << 27,
	KKC_MODIFIER_TYPE_META_MASK = 1 << 28,
	KKC_MODIFIER_TYPE_RELEASE_MASK = 1 << 30
} KkcModifierType;


static gpointer kkc_keymap_parent_class = NULL;
static GeeMap* kkc_keymap__CommandTable;
static GeeMap* kkc_keymap__CommandTable = NULL;

GType kkc_keymap_command_entry_get_type (void) G_GNUC_CONST;
KkcKeymapCommandEntry* kkc_keymap_command_entry_dup (const KkcKeymapCommandEntry* self);
void kkc_keymap_command_entry_free (KkcKeymapCommandEntry* self);
void kkc_keymap_command_entry_copy (const KkcKeymapCommandEntry* self, KkcKeymapCommandEntry* dest);
void kkc_keymap_command_entry_destroy (KkcKeymapCommandEntry* self);
GType kkc_keymap_entry_get_type (void) G_GNUC_CONST;
GType kkc_key_event_get_type (void) G_GNUC_CONST;
KkcKeymapEntry* kkc_keymap_entry_dup (const KkcKeymapEntry* self);
void kkc_keymap_entry_free (KkcKeymapEntry* self);
void kkc_keymap_entry_copy (const KkcKeymapEntry* self, KkcKeymapEntry* dest);
void kkc_keymap_entry_destroy (KkcKeymapEntry* self);
GType kkc_keymap_get_type (void) G_GNUC_CONST;
#define KKC_KEYMAP_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), KKC_TYPE_KEYMAP, KkcKeymapPrivate))
enum  {
	KKC_KEYMAP_DUMMY_PROPERTY,
	KKC_KEYMAP_PARENT
};
static guint kkc_keymap_key_hash (KkcKeyEvent* a);
static gboolean kkc_keymap_key_equal (KkcKeyEvent* a, KkcKeyEvent* b);
gchar** kkc_keymap_commands (int* result_length1);
gchar* kkc_keymap_get_command_label (const gchar* command);
guint kkc_key_event_get_keyval (KkcKeyEvent* self);
GType kkc_modifier_type_get_type (void) G_GNUC_CONST;
KkcModifierType kkc_key_event_get_modifiers (KkcKeyEvent* self);
KkcKeymapEntry* kkc_keymap_entries (KkcKeymap* self, int* result_length1);
KkcKeymap* kkc_keymap_get_parent (KkcKeymap* self);
static KkcKeymapEntry* kkc_keymap_map_entries_to_array (KkcKeymap* self, GeeMap* map_entries, int* result_length1);
KkcKeymapEntry* kkc_keymap_local_entries (KkcKeymap* self, int* result_length1);
static void _vala_array_add2 (KkcKeymapEntry** array, int* length, int* size, const KkcKeymapEntry* value);
static void _vala_KkcKeymapEntry_array_free (KkcKeymapEntry* array, gint array_length);
void kkc_keymap_set (KkcKeymap* self, KkcKeyEvent* key, const gchar* command);
gchar* kkc_keymap_lookup_key (KkcKeymap* self, KkcKeyEvent* key);
KkcKeyEvent* kkc_keymap_where_is (KkcKeymap* self, const gchar* command);
KkcKeymap* kkc_keymap_new (void);
KkcKeymap* kkc_keymap_construct (GType object_type);
void kkc_keymap_set_parent (KkcKeymap* self, KkcKeymap* value);
static void kkc_keymap_finalize (GObject* obj);
static void _vala_kkc_keymap_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_kkc_keymap_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);

static const KkcKeymapCommandEntry KKC_KEYMAP_Commands[26] = {{"abort", "Abort"}, {"commit", "Commit"}, {"complete", "Complete"}, {"delete", "Delete"}, {"delete-forward", "Delete Next Character"}, {"quote", "Quoted Insert"}, {"register", "Register Word"}, {"next-candidate", "Next Candidate"}, {"previous-candidate", "Previous Candidate"}, {"purge-candidate", "Purge Candidate"}, {"next-segment", "Next Segment"}, {"previous-segment", "Previous Segment"}, {"expand-segment", "Expand Segment"}, {"shrink-segment", "Shrink Segment"}, {"set-input-mode-hiragana", "Switch to Hiragana Input Mode"}, {"set-input-mode-katakana", "Switch to Katakana Input Mode"}, {"set-input-mode-hankaku-katakana", "Switch to Hankaku Katakana Input Mode"}, {"set-input-mode-latin", "Switch to Latin Input Mode"}, {"set-input-mode-wide-latin", "Switch to Wide Latin Input Mode"}, {"set-input-mode-direct", "Switch to Direct Input Mode"}, {"convert-hiragana", "Convert to Hiragana"}, {"convert-katakana", "Convert to Katakana"}, {"convert-hankaku-katakana", "Convert to Hankaku Katakana"}, {"convert-latin", "Convert to Latin"}, {"convert-wide-latin", "Convert to Wide Latin"}, {"original-candidate", "Original Candidate"}};

void kkc_keymap_command_entry_copy (const KkcKeymapCommandEntry* self, KkcKeymapCommandEntry* dest) {
	const gchar* _tmp0_;
	gchar* _tmp1_;
	const gchar* _tmp2_;
	gchar* _tmp3_;
	_tmp0_ = (*self).name;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 ((*dest).name);
	(*dest).name = _tmp1_;
	_tmp2_ = (*self).label;
	_tmp3_ = g_strdup (_tmp2_);
	_g_free0 ((*dest).label);
	(*dest).label = _tmp3_;
}


void kkc_keymap_command_entry_destroy (KkcKeymapCommandEntry* self) {
	_g_free0 ((*self).name);
	_g_free0 ((*self).label);
}


KkcKeymapCommandEntry* kkc_keymap_command_entry_dup (const KkcKeymapCommandEntry* self) {
	KkcKeymapCommandEntry* dup;
	dup = g_new0 (KkcKeymapCommandEntry, 1);
	kkc_keymap_command_entry_copy (self, dup);
	return dup;
}


void kkc_keymap_command_entry_free (KkcKeymapCommandEntry* self) {
	kkc_keymap_command_entry_destroy (self);
	g_free (self);
}


GType kkc_keymap_command_entry_get_type (void) {
	static volatile gsize kkc_keymap_command_entry_type_id__volatile = 0;
	if (g_once_init_enter (&kkc_keymap_command_entry_type_id__volatile)) {
		GType kkc_keymap_command_entry_type_id;
		kkc_keymap_command_entry_type_id = g_boxed_type_register_static ("KkcKeymapCommandEntry", (GBoxedCopyFunc) kkc_keymap_command_entry_dup, (GBoxedFreeFunc) kkc_keymap_command_entry_free);
		g_once_init_leave (&kkc_keymap_command_entry_type_id__volatile, kkc_keymap_command_entry_type_id);
	}
	return kkc_keymap_command_entry_type_id__volatile;
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


void kkc_keymap_entry_copy (const KkcKeymapEntry* self, KkcKeymapEntry* dest) {
	KkcKeyEvent* _tmp0_;
	KkcKeyEvent* _tmp1_;
	const gchar* _tmp2_;
	gchar* _tmp3_;
	_tmp0_ = (*self).key;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 ((*dest).key);
	(*dest).key = _tmp1_;
	_tmp2_ = (*self).command;
	_tmp3_ = g_strdup (_tmp2_);
	_g_free0 ((*dest).command);
	(*dest).command = _tmp3_;
}


void kkc_keymap_entry_destroy (KkcKeymapEntry* self) {
	_g_object_unref0 ((*self).key);
	_g_free0 ((*self).command);
}


KkcKeymapEntry* kkc_keymap_entry_dup (const KkcKeymapEntry* self) {
	KkcKeymapEntry* dup;
	dup = g_new0 (KkcKeymapEntry, 1);
	kkc_keymap_entry_copy (self, dup);
	return dup;
}


void kkc_keymap_entry_free (KkcKeymapEntry* self) {
	kkc_keymap_entry_destroy (self);
	g_free (self);
}


GType kkc_keymap_entry_get_type (void) {
	static volatile gsize kkc_keymap_entry_type_id__volatile = 0;
	if (g_once_init_enter (&kkc_keymap_entry_type_id__volatile)) {
		GType kkc_keymap_entry_type_id;
		kkc_keymap_entry_type_id = g_boxed_type_register_static ("KkcKeymapEntry", (GBoxedCopyFunc) kkc_keymap_entry_dup, (GBoxedFreeFunc) kkc_keymap_entry_free);
		g_once_init_leave (&kkc_keymap_entry_type_id__volatile, kkc_keymap_entry_type_id);
	}
	return kkc_keymap_entry_type_id__volatile;
}


/**
         * List commands usable in keymap.
         *
         * @return array of commands
         */
gchar** kkc_keymap_commands (int* result_length1) {
	gchar** result = NULL;
	GeeMap* _tmp0_;
	GeeSet* _tmp1_;
	GeeSet* _tmp2_;
	GeeSet* _tmp3_;
	gint _tmp4_ = 0;
	gpointer* _tmp5_ = NULL;
	gchar** _tmp6_;
	gint _tmp6__length1;
	gchar** _tmp7_;
	gint _tmp7__length1;
	_tmp0_ = kkc_keymap__CommandTable;
	_tmp1_ = gee_map_get_keys (_tmp0_);
	_tmp2_ = _tmp1_;
	_tmp3_ = _tmp2_;
	_tmp5_ = gee_collection_to_array ((GeeCollection*) _tmp3_, &_tmp4_);
	_tmp6_ = _tmp5_;
	_tmp6__length1 = _tmp4_;
	_g_object_unref0 (_tmp3_);
	_tmp7_ = _tmp6_;
	_tmp7__length1 = _tmp6__length1;
	if (result_length1) {
		*result_length1 = _tmp7__length1;
	}
	result = _tmp7_;
	return result;
}


/**
         * Return a label for a command
         *
         * @param command command
         * @return label
         */
gchar* kkc_keymap_get_command_label (const gchar* command) {
	gchar* result = NULL;
	gchar* label = NULL;
	GeeMap* _tmp0_;
	const gchar* _tmp1_;
	gpointer _tmp2_ = NULL;
	const gchar* _tmp3_;
	g_return_val_if_fail (command != NULL, NULL);
	_tmp0_ = kkc_keymap__CommandTable;
	_tmp1_ = command;
	_tmp2_ = gee_map_get (_tmp0_, _tmp1_);
	label = (gchar*) _tmp2_;
	_tmp3_ = label;
	if (_tmp3_ != NULL) {
		const gchar* _tmp4_;
		const gchar* _tmp5_ = NULL;
		gchar* _tmp6_;
		_tmp4_ = label;
		_tmp5_ = g_dgettext (GETTEXT_PACKAGE, _tmp4_);
		_tmp6_ = g_strdup (_tmp5_);
		_g_free0 (label);
		label = _tmp6_;
	}
	result = label;
	return result;
}


static gboolean kkc_keymap_key_equal (KkcKeyEvent* a, KkcKeyEvent* b) {
	gboolean result = FALSE;
	gboolean _tmp0_ = FALSE;
	KkcKeyEvent* _tmp1_;
	guint _tmp2_;
	guint _tmp3_;
	KkcKeyEvent* _tmp4_;
	guint _tmp5_;
	guint _tmp6_;
	gboolean _tmp13_;
	g_return_val_if_fail (a != NULL, FALSE);
	g_return_val_if_fail (b != NULL, FALSE);
	_tmp1_ = a;
	_tmp2_ = kkc_key_event_get_keyval (_tmp1_);
	_tmp3_ = _tmp2_;
	_tmp4_ = b;
	_tmp5_ = kkc_key_event_get_keyval (_tmp4_);
	_tmp6_ = _tmp5_;
	if (_tmp3_ == _tmp6_) {
		KkcKeyEvent* _tmp7_;
		KkcModifierType _tmp8_;
		KkcModifierType _tmp9_;
		KkcKeyEvent* _tmp10_;
		KkcModifierType _tmp11_;
		KkcModifierType _tmp12_;
		_tmp7_ = a;
		_tmp8_ = kkc_key_event_get_modifiers (_tmp7_);
		_tmp9_ = _tmp8_;
		_tmp10_ = b;
		_tmp11_ = kkc_key_event_get_modifiers (_tmp10_);
		_tmp12_ = _tmp11_;
		_tmp0_ = _tmp9_ == _tmp12_;
	} else {
		_tmp0_ = FALSE;
	}
	_tmp13_ = _tmp0_;
	result = _tmp13_;
	return result;
}


static guint kkc_keymap_key_hash (KkcKeyEvent* a) {
	guint result = 0U;
	GHashFunc _tmp0_;
	KkcKeyEvent* _tmp1_;
	guint _tmp2_;
	guint _tmp3_;
	gint _tmp4_;
	guint _tmp5_ = 0U;
	GHashFunc _tmp6_;
	KkcKeyEvent* _tmp7_;
	KkcModifierType _tmp8_;
	KkcModifierType _tmp9_;
	gint _tmp10_;
	guint _tmp11_ = 0U;
	g_return_val_if_fail (a != NULL, 0U);
	_tmp0_ = g_int_hash;
	_tmp1_ = a;
	_tmp2_ = kkc_key_event_get_keyval (_tmp1_);
	_tmp3_ = _tmp2_;
	_tmp4_ = (gint) _tmp3_;
	_tmp5_ = _tmp0_ (&_tmp4_);
	_tmp6_ = g_int_hash;
	_tmp7_ = a;
	_tmp8_ = kkc_key_event_get_modifiers (_tmp7_);
	_tmp9_ = _tmp8_;
	_tmp10_ = (gint) _tmp9_;
	_tmp11_ = _tmp6_ (&_tmp10_);
	result = _tmp5_ + _tmp11_;
	return result;
}


/**
         * Return all the keymap entries including parent's.
         *
         * @return array of KeymapEntry
         */
KkcKeymapEntry* kkc_keymap_entries (KkcKeymap* self, int* result_length1) {
	KkcKeymapEntry* result = NULL;
	GeeHashMap* _map_entries = NULL;
	GeeHashMap* _tmp0_;
	KkcKeymap* _tmp1_;
	GeeHashMap* _tmp5_;
	GeeMap* _tmp6_;
	GeeHashMap* _tmp7_;
	gint _tmp8_ = 0;
	KkcKeymapEntry* _tmp9_ = NULL;
	KkcKeymapEntry* _tmp10_;
	gint _tmp10__length1;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = gee_hash_map_new (KKC_TYPE_KEY_EVENT, (GBoxedCopyFunc) g_object_ref, g_object_unref, G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, (GHashFunc) kkc_keymap_key_hash, (GEqualFunc) kkc_keymap_key_equal, NULL);
	_map_entries = _tmp0_;
	_tmp1_ = self->priv->_parent;
	if (_tmp1_ != NULL) {
		GeeHashMap* _tmp2_;
		KkcKeymap* _tmp3_;
		GeeMap* _tmp4_;
		_tmp2_ = _map_entries;
		_tmp3_ = self->priv->_parent;
		_tmp4_ = _tmp3_->priv->map_entries;
		gee_abstract_map_set_all ((GeeAbstractMap*) _tmp2_, _tmp4_);
	}
	_tmp5_ = _map_entries;
	_tmp6_ = self->priv->map_entries;
	gee_abstract_map_set_all ((GeeAbstractMap*) _tmp5_, _tmp6_);
	_tmp7_ = _map_entries;
	_tmp9_ = kkc_keymap_map_entries_to_array (self, (GeeMap*) _tmp7_, &_tmp8_);
	_tmp10_ = _tmp9_;
	_tmp10__length1 = _tmp8_;
	if (result_length1) {
		*result_length1 = _tmp10__length1;
	}
	result = _tmp10_;
	_g_object_unref0 (_map_entries);
	return result;
}


/**
         * Return keymap entries not including parent's.
         *
         * @return array of KeymapEntry
         */
KkcKeymapEntry* kkc_keymap_local_entries (KkcKeymap* self, int* result_length1) {
	KkcKeymapEntry* result = NULL;
	GeeMap* _tmp0_;
	gint _tmp1_ = 0;
	KkcKeymapEntry* _tmp2_ = NULL;
	KkcKeymapEntry* _tmp3_;
	gint _tmp3__length1;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->map_entries;
	_tmp2_ = kkc_keymap_map_entries_to_array (self, _tmp0_, &_tmp1_);
	_tmp3_ = _tmp2_;
	_tmp3__length1 = _tmp1_;
	if (result_length1) {
		*result_length1 = _tmp3__length1;
	}
	result = _tmp3_;
	return result;
}


static void _vala_array_add2 (KkcKeymapEntry** array, int* length, int* size, const KkcKeymapEntry* value) {
	if ((*length) == (*size)) {
		*size = (*size) ? (2 * (*size)) : 4;
		*array = g_renew (KkcKeymapEntry, *array, *size);
	}
	(*array)[(*length)++] = *value;
}


static void _vala_KkcKeymapEntry_array_free (KkcKeymapEntry* array, gint array_length) {
	if (array != NULL) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			kkc_keymap_entry_destroy (&array[i]);
		}
	}
	g_free (array);
}


static KkcKeymapEntry* kkc_keymap_map_entries_to_array (KkcKeymap* self, GeeMap* map_entries, int* result_length1) {
	KkcKeymapEntry* result = NULL;
	KkcKeymapEntry* _result_ = NULL;
	KkcKeymapEntry* _tmp0_ = NULL;
	gint _result__length1;
	gint __result__size_;
	GeeMapIterator* iter = NULL;
	GeeMap* _tmp1_;
	GeeMapIterator* _tmp2_ = NULL;
	GeeMapIterator* _tmp3_;
	gboolean _tmp4_ = FALSE;
	KkcKeymapEntry* _tmp21_;
	gint _tmp21__length1;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (map_entries != NULL, NULL);
	_tmp0_ = g_new0 (KkcKeymapEntry, 0);
	_result_ = _tmp0_;
	_result__length1 = 0;
	__result__size_ = _result__length1;
	_tmp1_ = map_entries;
	_tmp2_ = gee_map_map_iterator (_tmp1_);
	iter = _tmp2_;
	_tmp3_ = iter;
	_tmp4_ = gee_map_iterator_first (_tmp3_);
	if (_tmp4_) {
		{
			gboolean _tmp5_ = FALSE;
			_tmp5_ = TRUE;
			while (TRUE) {
				gboolean _tmp6_;
				KkcKeyEvent* key = NULL;
				GeeMapIterator* _tmp9_;
				gpointer _tmp10_ = NULL;
				gchar* command = NULL;
				GeeMapIterator* _tmp11_;
				gpointer _tmp12_ = NULL;
				KkcKeymapEntry entry = {0};
				KkcKeyEvent* _tmp13_;
				KkcKeyEvent* _tmp14_;
				const gchar* _tmp15_;
				gchar* _tmp16_;
				KkcKeymapEntry _tmp17_ = {0};
				KkcKeymapEntry* _tmp18_;
				gint _tmp18__length1;
				KkcKeymapEntry _tmp19_;
				KkcKeymapEntry _tmp20_ = {0};
				_tmp6_ = _tmp5_;
				if (!_tmp6_) {
					GeeMapIterator* _tmp7_;
					gboolean _tmp8_ = FALSE;
					_tmp7_ = iter;
					_tmp8_ = gee_map_iterator_next (_tmp7_);
					if (!_tmp8_) {
						break;
					}
				}
				_tmp5_ = FALSE;
				_tmp9_ = iter;
				_tmp10_ = gee_map_iterator_get_key (_tmp9_);
				key = (KkcKeyEvent*) _tmp10_;
				_tmp11_ = iter;
				_tmp12_ = gee_map_iterator_get_value (_tmp11_);
				command = (gchar*) _tmp12_;
				_tmp13_ = key;
				_tmp14_ = _g_object_ref0 (_tmp13_);
				_tmp15_ = command;
				_tmp16_ = g_strdup (_tmp15_);
				_g_object_unref0 (_tmp17_.key);
				_tmp17_.key = _tmp14_;
				_g_free0 (_tmp17_.command);
				_tmp17_.command = _tmp16_;
				entry = _tmp17_;
				_tmp18_ = _result_;
				_tmp18__length1 = _result__length1;
				_tmp19_ = entry;
				kkc_keymap_entry_copy (&_tmp19_, &_tmp20_);
				_vala_array_add2 (&_result_, &_result__length1, &__result__size_, &_tmp20_);
				kkc_keymap_entry_destroy (&entry);
				_g_free0 (command);
				_g_object_unref0 (key);
			}
		}
	}
	_tmp21_ = _result_;
	_tmp21__length1 = _result__length1;
	if (result_length1) {
		*result_length1 = _tmp21__length1;
	}
	result = _tmp21_;
	_g_object_unref0 (iter);
	return result;
}


/**
         * Bind a key event to a command.
         *
         * @param key key event
         * @param command command or `null` to unset
         */
void kkc_keymap_set (KkcKeymap* self, KkcKeyEvent* key, const gchar* command) {
	GeeMap* _tmp0_;
	KkcKeyEvent* _tmp1_;
	const gchar* _tmp2_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (key != NULL);
	_tmp0_ = self->priv->map_entries;
	_tmp1_ = key;
	_tmp2_ = command;
	gee_map_set (_tmp0_, _tmp1_, _tmp2_);
}


/**
         * Lookup a command bound to a key event.
         *
         * @param key key event
         * @return command or `null`
         */
gchar* kkc_keymap_lookup_key (KkcKeymap* self, KkcKeyEvent* key) {
	gchar* result = NULL;
	GeeMap* _tmp0_;
	KkcKeyEvent* _tmp1_;
	gboolean _tmp2_ = FALSE;
	KkcKeymap* _tmp6_;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (key != NULL, NULL);
	_tmp0_ = self->priv->map_entries;
	_tmp1_ = key;
	_tmp2_ = gee_map_has_key (_tmp0_, _tmp1_);
	if (_tmp2_) {
		GeeMap* _tmp3_;
		KkcKeyEvent* _tmp4_;
		gpointer _tmp5_ = NULL;
		_tmp3_ = self->priv->map_entries;
		_tmp4_ = key;
		_tmp5_ = gee_map_get (_tmp3_, _tmp4_);
		result = (gchar*) _tmp5_;
		return result;
	}
	_tmp6_ = self->priv->_parent;
	if (_tmp6_ != NULL) {
		KkcKeymap* _tmp7_;
		KkcKeyEvent* _tmp8_;
		gchar* _tmp9_ = NULL;
		_tmp7_ = self->priv->_parent;
		_tmp8_ = key;
		_tmp9_ = kkc_keymap_lookup_key (_tmp7_, _tmp8_);
		result = _tmp9_;
		return result;
	}
	result = NULL;
	return result;
}


/**
         * Lookup a key event to which a command is bound.
         *
         * @param command command
         * @return a key event or `null`
         */
KkcKeyEvent* kkc_keymap_where_is (KkcKeymap* self, const gchar* command) {
	KkcKeyEvent* result = NULL;
	GeeMapIterator* iter = NULL;
	GeeMap* _tmp0_;
	GeeMapIterator* _tmp1_ = NULL;
	GeeMapIterator* _tmp2_;
	gboolean _tmp3_ = FALSE;
	KkcKeymap* _tmp15_;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (command != NULL, NULL);
	_tmp0_ = self->priv->map_entries;
	_tmp1_ = gee_map_map_iterator (_tmp0_);
	iter = _tmp1_;
	_tmp2_ = iter;
	_tmp3_ = gee_map_iterator_first (_tmp2_);
	if (_tmp3_) {
		{
			gboolean _tmp4_ = FALSE;
			_tmp4_ = TRUE;
			while (TRUE) {
				gboolean _tmp5_;
				GeeMapIterator* _tmp8_;
				gpointer _tmp9_ = NULL;
				gchar* _tmp10_;
				const gchar* _tmp11_;
				gboolean _tmp12_;
				_tmp5_ = _tmp4_;
				if (!_tmp5_) {
					GeeMapIterator* _tmp6_;
					gboolean _tmp7_ = FALSE;
					_tmp6_ = iter;
					_tmp7_ = gee_map_iterator_next (_tmp6_);
					if (!_tmp7_) {
						break;
					}
				}
				_tmp4_ = FALSE;
				_tmp8_ = iter;
				_tmp9_ = gee_map_iterator_get_value (_tmp8_);
				_tmp10_ = (gchar*) _tmp9_;
				_tmp11_ = command;
				_tmp12_ = g_strcmp0 (_tmp10_, _tmp11_) == 0;
				_g_free0 (_tmp10_);
				if (_tmp12_) {
					GeeMapIterator* _tmp13_;
					gpointer _tmp14_ = NULL;
					_tmp13_ = iter;
					_tmp14_ = gee_map_iterator_get_key (_tmp13_);
					result = (KkcKeyEvent*) _tmp14_;
					_g_object_unref0 (iter);
					return result;
				}
			}
		}
	}
	_tmp15_ = self->priv->_parent;
	if (_tmp15_ != NULL) {
		KkcKeymap* _tmp16_;
		const gchar* _tmp17_;
		KkcKeyEvent* _tmp18_ = NULL;
		_tmp16_ = self->priv->_parent;
		_tmp17_ = command;
		_tmp18_ = kkc_keymap_where_is (_tmp16_, _tmp17_);
		result = _tmp18_;
		_g_object_unref0 (iter);
		return result;
	}
	result = NULL;
	_g_object_unref0 (iter);
	return result;
}


KkcKeymap* kkc_keymap_construct (GType object_type) {
	KkcKeymap * self = NULL;
	self = (KkcKeymap*) g_object_new (object_type, NULL);
	return self;
}


KkcKeymap* kkc_keymap_new (void) {
	return kkc_keymap_construct (KKC_TYPE_KEYMAP);
}


KkcKeymap* kkc_keymap_get_parent (KkcKeymap* self) {
	KkcKeymap* result;
	KkcKeymap* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_parent;
	result = _tmp0_;
	return result;
}


void kkc_keymap_set_parent (KkcKeymap* self, KkcKeymap* value) {
	KkcKeymap* _tmp0_;
	KkcKeymap* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (self->priv->_parent);
	self->priv->_parent = _tmp1_;
	g_object_notify ((GObject *) self, "parent");
}


static void kkc_keymap_class_init (KkcKeymapClass * klass) {
	GeeHashMap* _tmp0_;
	kkc_keymap_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (KkcKeymapPrivate));
	G_OBJECT_CLASS (klass)->get_property = _vala_kkc_keymap_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_kkc_keymap_set_property;
	G_OBJECT_CLASS (klass)->finalize = kkc_keymap_finalize;
	/**
	         * Parent keymap.
	         */
	g_object_class_install_property (G_OBJECT_CLASS (klass), KKC_KEYMAP_PARENT, g_param_spec_object ("parent", "parent", "parent", KKC_TYPE_KEYMAP, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	_tmp0_ = gee_hash_map_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, NULL, NULL, NULL);
	kkc_keymap__CommandTable = (GeeMap*) _tmp0_;
	{
		gint i = 0;
		i = 0;
		{
			gboolean _tmp1_ = FALSE;
			_tmp1_ = TRUE;
			while (TRUE) {
				gboolean _tmp2_;
				gint _tmp4_;
				GeeMap* _tmp5_;
				gint _tmp6_;
				KkcKeymapCommandEntry _tmp7_;
				const gchar* _tmp8_;
				gint _tmp9_;
				KkcKeymapCommandEntry _tmp10_;
				const gchar* _tmp11_;
				_tmp2_ = _tmp1_;
				if (!_tmp2_) {
					gint _tmp3_;
					_tmp3_ = i;
					i = _tmp3_ + 1;
				}
				_tmp1_ = FALSE;
				_tmp4_ = i;
				if (!(_tmp4_ < G_N_ELEMENTS (KKC_KEYMAP_Commands))) {
					break;
				}
				_tmp5_ = kkc_keymap__CommandTable;
				_tmp6_ = i;
				_tmp7_ = KKC_KEYMAP_Commands[_tmp6_];
				_tmp8_ = _tmp7_.name;
				_tmp9_ = i;
				_tmp10_ = KKC_KEYMAP_Commands[_tmp9_];
				_tmp11_ = _tmp10_.label;
				gee_map_set (_tmp5_, _tmp8_, _tmp11_);
			}
		}
	}
}


static void kkc_keymap_instance_init (KkcKeymap * self) {
	GeeHashMap* _tmp0_;
	self->priv = KKC_KEYMAP_GET_PRIVATE (self);
	self->priv->_parent = NULL;
	_tmp0_ = gee_hash_map_new (KKC_TYPE_KEY_EVENT, (GBoxedCopyFunc) g_object_ref, g_object_unref, G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, (GHashFunc) kkc_keymap_key_hash, (GEqualFunc) kkc_keymap_key_equal, NULL);
	self->priv->map_entries = (GeeMap*) _tmp0_;
}


static void kkc_keymap_finalize (GObject* obj) {
	KkcKeymap * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, KKC_TYPE_KEYMAP, KkcKeymap);
	_g_object_unref0 (self->priv->_parent);
	_g_object_unref0 (self->priv->map_entries);
	G_OBJECT_CLASS (kkc_keymap_parent_class)->finalize (obj);
}


/**
     * Object representing a keymap.
     */
GType kkc_keymap_get_type (void) {
	static volatile gsize kkc_keymap_type_id__volatile = 0;
	if (g_once_init_enter (&kkc_keymap_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (KkcKeymapClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) kkc_keymap_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (KkcKeymap), 0, (GInstanceInitFunc) kkc_keymap_instance_init, NULL };
		GType kkc_keymap_type_id;
		kkc_keymap_type_id = g_type_register_static (G_TYPE_OBJECT, "KkcKeymap", &g_define_type_info, 0);
		g_once_init_leave (&kkc_keymap_type_id__volatile, kkc_keymap_type_id);
	}
	return kkc_keymap_type_id__volatile;
}


static void _vala_kkc_keymap_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	KkcKeymap * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, KKC_TYPE_KEYMAP, KkcKeymap);
	switch (property_id) {
		case KKC_KEYMAP_PARENT:
		g_value_set_object (value, kkc_keymap_get_parent (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_kkc_keymap_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	KkcKeymap * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, KKC_TYPE_KEYMAP, KkcKeymap);
	switch (property_id) {
		case KKC_KEYMAP_PARENT:
		kkc_keymap_set_parent (self, g_value_get_object (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



