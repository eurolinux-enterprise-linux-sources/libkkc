/* key-event-filter.c generated by valac 0.20.1.19-a6516, the Vala compiler
 * generated from key-event-filter.vala, do not modify */

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


#define KKC_TYPE_KEY_EVENT_FILTER (kkc_key_event_filter_get_type ())
#define KKC_KEY_EVENT_FILTER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_KEY_EVENT_FILTER, KkcKeyEventFilter))
#define KKC_KEY_EVENT_FILTER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_KEY_EVENT_FILTER, KkcKeyEventFilterClass))
#define KKC_IS_KEY_EVENT_FILTER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_KEY_EVENT_FILTER))
#define KKC_IS_KEY_EVENT_FILTER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_KEY_EVENT_FILTER))
#define KKC_KEY_EVENT_FILTER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_KEY_EVENT_FILTER, KkcKeyEventFilterClass))

typedef struct _KkcKeyEventFilter KkcKeyEventFilter;
typedef struct _KkcKeyEventFilterClass KkcKeyEventFilterClass;
typedef struct _KkcKeyEventFilterPrivate KkcKeyEventFilterPrivate;

#define KKC_TYPE_KEY_EVENT (kkc_key_event_get_type ())
#define KKC_KEY_EVENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_KEY_EVENT, KkcKeyEvent))
#define KKC_KEY_EVENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_KEY_EVENT, KkcKeyEventClass))
#define KKC_IS_KEY_EVENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_KEY_EVENT))
#define KKC_IS_KEY_EVENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_KEY_EVENT))
#define KKC_KEY_EVENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_KEY_EVENT, KkcKeyEventClass))

typedef struct _KkcKeyEvent KkcKeyEvent;
typedef struct _KkcKeyEventClass KkcKeyEventClass;

#define KKC_TYPE_SIMPLE_KEY_EVENT_FILTER (kkc_simple_key_event_filter_get_type ())
#define KKC_SIMPLE_KEY_EVENT_FILTER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_SIMPLE_KEY_EVENT_FILTER, KkcSimpleKeyEventFilter))
#define KKC_SIMPLE_KEY_EVENT_FILTER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_SIMPLE_KEY_EVENT_FILTER, KkcSimpleKeyEventFilterClass))
#define KKC_IS_SIMPLE_KEY_EVENT_FILTER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_SIMPLE_KEY_EVENT_FILTER))
#define KKC_IS_SIMPLE_KEY_EVENT_FILTER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_SIMPLE_KEY_EVENT_FILTER))
#define KKC_SIMPLE_KEY_EVENT_FILTER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_SIMPLE_KEY_EVENT_FILTER, KkcSimpleKeyEventFilterClass))

typedef struct _KkcSimpleKeyEventFilter KkcSimpleKeyEventFilter;
typedef struct _KkcSimpleKeyEventFilterClass KkcSimpleKeyEventFilterClass;
typedef struct _KkcSimpleKeyEventFilterPrivate KkcSimpleKeyEventFilterPrivate;

#define KKC_TYPE_MODIFIER_TYPE (kkc_modifier_type_get_type ())

#define KKC_TYPE_KANA_KEY_EVENT_FILTER (kkc_kana_key_event_filter_get_type ())
#define KKC_KANA_KEY_EVENT_FILTER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_KANA_KEY_EVENT_FILTER, KkcKanaKeyEventFilter))
#define KKC_KANA_KEY_EVENT_FILTER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_KANA_KEY_EVENT_FILTER, KkcKanaKeyEventFilterClass))
#define KKC_IS_KANA_KEY_EVENT_FILTER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_KANA_KEY_EVENT_FILTER))
#define KKC_IS_KANA_KEY_EVENT_FILTER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_KANA_KEY_EVENT_FILTER))
#define KKC_KANA_KEY_EVENT_FILTER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_KANA_KEY_EVENT_FILTER, KkcKanaKeyEventFilterClass))

typedef struct _KkcKanaKeyEventFilter KkcKanaKeyEventFilter;
typedef struct _KkcKanaKeyEventFilterClass KkcKanaKeyEventFilterClass;
typedef struct _KkcKanaKeyEventFilterPrivate KkcKanaKeyEventFilterPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _KkcKeyEventFilter {
	GObject parent_instance;
	KkcKeyEventFilterPrivate * priv;
};

struct _KkcKeyEventFilterClass {
	GObjectClass parent_class;
	KkcKeyEvent* (*filter_key_event) (KkcKeyEventFilter* self, KkcKeyEvent* key);
	void (*reset) (KkcKeyEventFilter* self);
};

struct _KkcSimpleKeyEventFilter {
	KkcKeyEventFilter parent_instance;
	KkcSimpleKeyEventFilterPrivate * priv;
};

struct _KkcSimpleKeyEventFilterClass {
	KkcKeyEventFilterClass parent_class;
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

struct _KkcKanaKeyEventFilter {
	KkcSimpleKeyEventFilter parent_instance;
	KkcKanaKeyEventFilterPrivate * priv;
};

struct _KkcKanaKeyEventFilterClass {
	KkcSimpleKeyEventFilterClass parent_class;
};


static gpointer kkc_key_event_filter_parent_class = NULL;
static gpointer kkc_simple_key_event_filter_parent_class = NULL;
static gpointer kkc_kana_key_event_filter_parent_class = NULL;

GType kkc_key_event_filter_get_type (void) G_GNUC_CONST;
GType kkc_key_event_get_type (void) G_GNUC_CONST;
enum  {
	KKC_KEY_EVENT_FILTER_DUMMY_PROPERTY
};
KkcKeyEvent* kkc_key_event_filter_filter_key_event (KkcKeyEventFilter* self, KkcKeyEvent* key);
static KkcKeyEvent* kkc_key_event_filter_real_filter_key_event (KkcKeyEventFilter* self, KkcKeyEvent* key);
void kkc_key_event_filter_reset (KkcKeyEventFilter* self);
static void kkc_key_event_filter_real_reset (KkcKeyEventFilter* self);
KkcKeyEventFilter* kkc_key_event_filter_construct (GType object_type);
GType kkc_simple_key_event_filter_get_type (void) G_GNUC_CONST;
enum  {
	KKC_SIMPLE_KEY_EVENT_FILTER_DUMMY_PROPERTY
};
#define KKC_KEYSYMS_Shift_L ((guint) 0xffe1)
#define KKC_KEYSYMS_Shift_R ((guint) 0xffe2)
#define KKC_KEYSYMS_Control_L ((guint) 0xffe3)
#define KKC_KEYSYMS_Control_R ((guint) 0xffe4)
#define KKC_KEYSYMS_Meta_L ((guint) 0xffe7)
#define KKC_KEYSYMS_Meta_R ((guint) 0xffe8)
#define KKC_KEYSYMS_Alt_L ((guint) 0xffe9)
#define KKC_KEYSYMS_Alt_R ((guint) 0xffea)
#define KKC_KEYSYMS_Super_L ((guint) 0xffeb)
#define KKC_KEYSYMS_Super_R ((guint) 0xffec)
#define KKC_KEYSYMS_Hyper_L ((guint) 0xffed)
#define KKC_KEYSYMS_Hyper_R ((guint) 0xffee)
static KkcKeyEvent* kkc_simple_key_event_filter_real_filter_key_event (KkcKeyEventFilter* base, KkcKeyEvent* key);
guint kkc_key_event_get_keyval (KkcKeyEvent* self);
static gboolean _vala_uint_array_contains (guint* stack, int stack_length, guint needle);
GType kkc_modifier_type_get_type (void) G_GNUC_CONST;
KkcModifierType kkc_key_event_get_modifiers (KkcKeyEvent* self);
KkcSimpleKeyEventFilter* kkc_simple_key_event_filter_new (void);
KkcSimpleKeyEventFilter* kkc_simple_key_event_filter_construct (GType object_type);
GType kkc_kana_key_event_filter_get_type (void) G_GNUC_CONST;
enum  {
	KKC_KANA_KEY_EVENT_FILTER_DUMMY_PROPERTY
};
static KkcKeyEvent* kkc_kana_key_event_filter_real_filter_key_event (KkcKeyEventFilter* base, KkcKeyEvent* key);
#define KKC_KEYSYMS_backslash ((guint) 0x005c)
guint kkc_key_event_get_keycode (KkcKeyEvent* self);
#define KKC_KEYSYMS_yen ((guint) 0x00a5)
KkcKeyEvent* kkc_key_event_new_from_x_event (guint keyval, guint keycode, KkcModifierType modifiers);
KkcKeyEvent* kkc_key_event_construct_from_x_event (GType object_type, guint keyval, guint keycode, KkcModifierType modifiers);
KkcKanaKeyEventFilter* kkc_kana_key_event_filter_new (void);
KkcKanaKeyEventFilter* kkc_kana_key_event_filter_construct (GType object_type);

static const guint KKC_SIMPLE_KEY_EVENT_FILTER_modifier_keyvals[12] = {KKC_KEYSYMS_Shift_L, KKC_KEYSYMS_Shift_R, KKC_KEYSYMS_Control_L, KKC_KEYSYMS_Control_R, KKC_KEYSYMS_Meta_L, KKC_KEYSYMS_Meta_R, KKC_KEYSYMS_Alt_L, KKC_KEYSYMS_Alt_R, KKC_KEYSYMS_Super_L, KKC_KEYSYMS_Super_R, KKC_KEYSYMS_Hyper_L, KKC_KEYSYMS_Hyper_R};

/**
         * Convert a key event to another.
         *
         * @param key a key event
         *
         * @return a KeyEvent or `null` if the result cannot be
         * fetched immediately
         */
static KkcKeyEvent* kkc_key_event_filter_real_filter_key_event (KkcKeyEventFilter* self, KkcKeyEvent* key) {
	g_critical ("Type `%s' does not implement abstract method `kkc_key_event_filter_filter_key_event'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return NULL;
}


KkcKeyEvent* kkc_key_event_filter_filter_key_event (KkcKeyEventFilter* self, KkcKeyEvent* key) {
	g_return_val_if_fail (self != NULL, NULL);
	return KKC_KEY_EVENT_FILTER_GET_CLASS (self)->filter_key_event (self, key);
}


/**
         * Reset the filter.
         */
static void kkc_key_event_filter_real_reset (KkcKeyEventFilter* self) {
}


void kkc_key_event_filter_reset (KkcKeyEventFilter* self) {
	g_return_if_fail (self != NULL);
	KKC_KEY_EVENT_FILTER_GET_CLASS (self)->reset (self);
}


KkcKeyEventFilter* kkc_key_event_filter_construct (GType object_type) {
	KkcKeyEventFilter * self = NULL;
	self = (KkcKeyEventFilter*) g_object_new (object_type, NULL);
	return self;
}


static void kkc_key_event_filter_class_init (KkcKeyEventFilterClass * klass) {
	kkc_key_event_filter_parent_class = g_type_class_peek_parent (klass);
	KKC_KEY_EVENT_FILTER_CLASS (klass)->filter_key_event = kkc_key_event_filter_real_filter_key_event;
	KKC_KEY_EVENT_FILTER_CLASS (klass)->reset = kkc_key_event_filter_real_reset;
	/**
	         * Signal emitted when a new key event is generated in the filter.
	         *
	         * @param key a key event
	         */
	g_signal_new ("forwarded", KKC_TYPE_KEY_EVENT_FILTER, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__OBJECT, G_TYPE_NONE, 1, KKC_TYPE_KEY_EVENT);
}


static void kkc_key_event_filter_instance_init (KkcKeyEventFilter * self) {
}


/**
     * Base class of a key event filter.
     */
GType kkc_key_event_filter_get_type (void) {
	static volatile gsize kkc_key_event_filter_type_id__volatile = 0;
	if (g_once_init_enter (&kkc_key_event_filter_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (KkcKeyEventFilterClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) kkc_key_event_filter_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (KkcKeyEventFilter), 0, (GInstanceInitFunc) kkc_key_event_filter_instance_init, NULL };
		GType kkc_key_event_filter_type_id;
		kkc_key_event_filter_type_id = g_type_register_static (G_TYPE_OBJECT, "KkcKeyEventFilter", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
		g_once_init_leave (&kkc_key_event_filter_type_id__volatile, kkc_key_event_filter_type_id);
	}
	return kkc_key_event_filter_type_id__volatile;
}


/**
         * {@inheritDoc}
         */
static gboolean _vala_uint_array_contains (guint* stack, int stack_length, guint needle) {
	int i;
	for (i = 0; i < stack_length; i++) {
		if (needle == stack[i]) {
			return TRUE;
		}
	}
	return FALSE;
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static KkcKeyEvent* kkc_simple_key_event_filter_real_filter_key_event (KkcKeyEventFilter* base, KkcKeyEvent* key) {
	KkcSimpleKeyEventFilter * self;
	KkcKeyEvent* result = NULL;
	KkcKeyEvent* _tmp0_;
	guint _tmp1_;
	guint _tmp2_;
	KkcKeyEvent* _tmp3_;
	KkcModifierType _tmp4_;
	KkcModifierType _tmp5_;
	KkcKeyEvent* _tmp6_;
	KkcKeyEvent* _tmp7_;
	self = (KkcSimpleKeyEventFilter*) base;
	g_return_val_if_fail (key != NULL, NULL);
	_tmp0_ = key;
	_tmp1_ = kkc_key_event_get_keyval (_tmp0_);
	_tmp2_ = _tmp1_;
	if (_vala_uint_array_contains (KKC_SIMPLE_KEY_EVENT_FILTER_modifier_keyvals, G_N_ELEMENTS (KKC_SIMPLE_KEY_EVENT_FILTER_modifier_keyvals), _tmp2_)) {
		result = NULL;
		return result;
	}
	_tmp3_ = key;
	_tmp4_ = kkc_key_event_get_modifiers (_tmp3_);
	_tmp5_ = _tmp4_;
	if ((_tmp5_ & KKC_MODIFIER_TYPE_RELEASE_MASK) != 0) {
		result = NULL;
		return result;
	}
	_tmp6_ = key;
	_tmp7_ = _g_object_ref0 (_tmp6_);
	result = _tmp7_;
	return result;
}


KkcSimpleKeyEventFilter* kkc_simple_key_event_filter_construct (GType object_type) {
	KkcSimpleKeyEventFilter * self = NULL;
	self = (KkcSimpleKeyEventFilter*) kkc_key_event_filter_construct (object_type);
	return self;
}


KkcSimpleKeyEventFilter* kkc_simple_key_event_filter_new (void) {
	return kkc_simple_key_event_filter_construct (KKC_TYPE_SIMPLE_KEY_EVENT_FILTER);
}


static void kkc_simple_key_event_filter_class_init (KkcSimpleKeyEventFilterClass * klass) {
	kkc_simple_key_event_filter_parent_class = g_type_class_peek_parent (klass);
	KKC_KEY_EVENT_FILTER_CLASS (klass)->filter_key_event = kkc_simple_key_event_filter_real_filter_key_event;
}


static void kkc_simple_key_event_filter_instance_init (KkcSimpleKeyEventFilter * self) {
}


/**
     * Simple implementation of a key event filter.
     *
     * This class is rarely used in programs but specified as "filter"
     * property in rule metadata.
     *
     * @see Rule
     */
GType kkc_simple_key_event_filter_get_type (void) {
	static volatile gsize kkc_simple_key_event_filter_type_id__volatile = 0;
	if (g_once_init_enter (&kkc_simple_key_event_filter_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (KkcSimpleKeyEventFilterClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) kkc_simple_key_event_filter_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (KkcSimpleKeyEventFilter), 0, (GInstanceInitFunc) kkc_simple_key_event_filter_instance_init, NULL };
		GType kkc_simple_key_event_filter_type_id;
		kkc_simple_key_event_filter_type_id = g_type_register_static (KKC_TYPE_KEY_EVENT_FILTER, "KkcSimpleKeyEventFilter", &g_define_type_info, 0);
		g_once_init_leave (&kkc_simple_key_event_filter_type_id__volatile, kkc_simple_key_event_filter_type_id);
	}
	return kkc_simple_key_event_filter_type_id__volatile;
}


/**
         * {@inheritDoc}
         */
static KkcKeyEvent* kkc_kana_key_event_filter_real_filter_key_event (KkcKeyEventFilter* base, KkcKeyEvent* key) {
	KkcKanaKeyEventFilter * self;
	KkcKeyEvent* result = NULL;
	KkcKeyEvent* _key = NULL;
	KkcKeyEvent* _tmp0_;
	KkcKeyEvent* _tmp1_ = NULL;
	KkcKeyEvent* _tmp2_;
	gboolean _tmp3_ = FALSE;
	KkcKeyEvent* _tmp4_;
	guint _tmp5_;
	guint _tmp6_;
	gboolean _tmp10_;
	self = (KkcKanaKeyEventFilter*) base;
	g_return_val_if_fail (key != NULL, NULL);
	_tmp0_ = key;
	_tmp1_ = KKC_KEY_EVENT_FILTER_CLASS (kkc_kana_key_event_filter_parent_class)->filter_key_event ((KkcKeyEventFilter*) G_TYPE_CHECK_INSTANCE_CAST (self, KKC_TYPE_SIMPLE_KEY_EVENT_FILTER, KkcSimpleKeyEventFilter), _tmp0_);
	_key = _tmp1_;
	_tmp2_ = _key;
	if (_tmp2_ == NULL) {
		result = NULL;
		_g_object_unref0 (_key);
		return result;
	}
	_tmp4_ = _key;
	_tmp5_ = kkc_key_event_get_keyval (_tmp4_);
	_tmp6_ = _tmp5_;
	if (_tmp6_ == KKC_KEYSYMS_backslash) {
		KkcKeyEvent* _tmp7_;
		guint _tmp8_;
		guint _tmp9_;
		_tmp7_ = _key;
		_tmp8_ = kkc_key_event_get_keycode (_tmp7_);
		_tmp9_ = _tmp8_;
		_tmp3_ = _tmp9_ == ((guint) 124);
	} else {
		_tmp3_ = FALSE;
	}
	_tmp10_ = _tmp3_;
	if (_tmp10_) {
		KkcKeyEvent* _tmp11_;
		guint _tmp12_;
		guint _tmp13_;
		KkcKeyEvent* _tmp14_;
		KkcModifierType _tmp15_;
		KkcModifierType _tmp16_;
		KkcKeyEvent* _tmp17_;
		_tmp11_ = _key;
		_tmp12_ = kkc_key_event_get_keycode (_tmp11_);
		_tmp13_ = _tmp12_;
		_tmp14_ = _key;
		_tmp15_ = kkc_key_event_get_modifiers (_tmp14_);
		_tmp16_ = _tmp15_;
		_tmp17_ = kkc_key_event_new_from_x_event (KKC_KEYSYMS_yen, _tmp13_, _tmp16_);
		result = _tmp17_;
		_g_object_unref0 (_key);
		return result;
	}
	result = _key;
	return result;
}


KkcKanaKeyEventFilter* kkc_kana_key_event_filter_construct (GType object_type) {
	KkcKanaKeyEventFilter * self = NULL;
	self = (KkcKanaKeyEventFilter*) kkc_simple_key_event_filter_construct (object_type);
	return self;
}


KkcKanaKeyEventFilter* kkc_kana_key_event_filter_new (void) {
	return kkc_kana_key_event_filter_construct (KKC_TYPE_KANA_KEY_EVENT_FILTER);
}


static void kkc_kana_key_event_filter_class_init (KkcKanaKeyEventFilterClass * klass) {
	kkc_kana_key_event_filter_parent_class = g_type_class_peek_parent (klass);
	KKC_KEY_EVENT_FILTER_CLASS (klass)->filter_key_event = kkc_kana_key_event_filter_real_filter_key_event;
}


static void kkc_kana_key_event_filter_instance_init (KkcKanaKeyEventFilter * self) {
}


/**
     * Key event filter for Kana typing rule.
     *
     * This class is rarely used in programs but specified as "filter"
     * property in rule metadata.
     *
     * @see Rule
     */
GType kkc_kana_key_event_filter_get_type (void) {
	static volatile gsize kkc_kana_key_event_filter_type_id__volatile = 0;
	if (g_once_init_enter (&kkc_kana_key_event_filter_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (KkcKanaKeyEventFilterClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) kkc_kana_key_event_filter_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (KkcKanaKeyEventFilter), 0, (GInstanceInitFunc) kkc_kana_key_event_filter_instance_init, NULL };
		GType kkc_kana_key_event_filter_type_id;
		kkc_kana_key_event_filter_type_id = g_type_register_static (KKC_TYPE_SIMPLE_KEY_EVENT_FILTER, "KkcKanaKeyEventFilter", &g_define_type_info, 0);
		g_once_init_leave (&kkc_kana_key_event_filter_type_id__volatile, kkc_kana_key_event_filter_type_id);
	}
	return kkc_kana_key_event_filter_type_id__volatile;
}



