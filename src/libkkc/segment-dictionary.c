/* segment-dictionary.c generated by valac 0.20.1.19-a6516, the Vala compiler
 * generated from segment-dictionary.vala, do not modify */

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


#define KKC_TYPE_DICTIONARY (kkc_dictionary_get_type ())
#define KKC_DICTIONARY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_DICTIONARY, KkcDictionary))
#define KKC_IS_DICTIONARY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_DICTIONARY))
#define KKC_DICTIONARY_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), KKC_TYPE_DICTIONARY, KkcDictionaryIface))

typedef struct _KkcDictionary KkcDictionary;
typedef struct _KkcDictionaryIface KkcDictionaryIface;

#define KKC_TYPE_SEGMENT_DICTIONARY (kkc_segment_dictionary_get_type ())
#define KKC_SEGMENT_DICTIONARY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_SEGMENT_DICTIONARY, KkcSegmentDictionary))
#define KKC_IS_SEGMENT_DICTIONARY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_SEGMENT_DICTIONARY))
#define KKC_SEGMENT_DICTIONARY_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), KKC_TYPE_SEGMENT_DICTIONARY, KkcSegmentDictionaryIface))

typedef struct _KkcSegmentDictionary KkcSegmentDictionary;
typedef struct _KkcSegmentDictionaryIface KkcSegmentDictionaryIface;

#define KKC_TYPE_CANDIDATE (kkc_candidate_get_type ())
#define KKC_CANDIDATE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_CANDIDATE, KkcCandidate))
#define KKC_CANDIDATE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_CANDIDATE, KkcCandidateClass))
#define KKC_IS_CANDIDATE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_CANDIDATE))
#define KKC_IS_CANDIDATE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_CANDIDATE))
#define KKC_CANDIDATE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_CANDIDATE, KkcCandidateClass))

typedef struct _KkcCandidate KkcCandidate;
typedef struct _KkcCandidateClass KkcCandidateClass;

#define KKC_TYPE_EMPTY_SEGMENT_DICTIONARY (kkc_empty_segment_dictionary_get_type ())
#define KKC_EMPTY_SEGMENT_DICTIONARY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_EMPTY_SEGMENT_DICTIONARY, KkcEmptySegmentDictionary))
#define KKC_EMPTY_SEGMENT_DICTIONARY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_EMPTY_SEGMENT_DICTIONARY, KkcEmptySegmentDictionaryClass))
#define KKC_IS_EMPTY_SEGMENT_DICTIONARY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_EMPTY_SEGMENT_DICTIONARY))
#define KKC_IS_EMPTY_SEGMENT_DICTIONARY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_EMPTY_SEGMENT_DICTIONARY))
#define KKC_EMPTY_SEGMENT_DICTIONARY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_EMPTY_SEGMENT_DICTIONARY, KkcEmptySegmentDictionaryClass))

typedef struct _KkcEmptySegmentDictionary KkcEmptySegmentDictionary;
typedef struct _KkcEmptySegmentDictionaryClass KkcEmptySegmentDictionaryClass;
typedef struct _KkcEmptySegmentDictionaryPrivate KkcEmptySegmentDictionaryPrivate;

struct _KkcDictionaryIface {
	GTypeInterface parent_iface;
	void (*reload) (KkcDictionary* self, GError** error);
	void (*save) (KkcDictionary* self, GError** error);
};

struct _KkcSegmentDictionaryIface {
	GTypeInterface parent_iface;
	gboolean (*lookup_candidates) (KkcSegmentDictionary* self, const gchar* midasi, gboolean okuri, KkcCandidate*** candidates, int* candidates_length1);
	gchar** (*complete) (KkcSegmentDictionary* self, const gchar* midasi, int* result_length1);
	gboolean (*select_candidate) (KkcSegmentDictionary* self, KkcCandidate* candidate);
	gboolean (*purge_candidate) (KkcSegmentDictionary* self, KkcCandidate* candidate);
};

struct _KkcEmptySegmentDictionary {
	GObject parent_instance;
	KkcEmptySegmentDictionaryPrivate * priv;
};

struct _KkcEmptySegmentDictionaryClass {
	GObjectClass parent_class;
};


static gpointer kkc_empty_segment_dictionary_parent_class = NULL;
static KkcDictionaryIface* kkc_empty_segment_dictionary_kkc_dictionary_parent_iface = NULL;
static KkcSegmentDictionaryIface* kkc_empty_segment_dictionary_kkc_segment_dictionary_parent_iface = NULL;

GType kkc_dictionary_get_type (void) G_GNUC_CONST;
GType kkc_candidate_get_type (void) G_GNUC_CONST;
GType kkc_segment_dictionary_get_type (void) G_GNUC_CONST;
gboolean kkc_segment_dictionary_lookup_candidates (KkcSegmentDictionary* self, const gchar* midasi, gboolean okuri, KkcCandidate*** candidates, int* candidates_length1);
gchar** kkc_segment_dictionary_complete (KkcSegmentDictionary* self, const gchar* midasi, int* result_length1);
gboolean kkc_segment_dictionary_select_candidate (KkcSegmentDictionary* self, KkcCandidate* candidate);
static gboolean kkc_segment_dictionary_real_select_candidate (KkcSegmentDictionary* self, KkcCandidate* candidate);
gboolean kkc_segment_dictionary_purge_candidate (KkcSegmentDictionary* self, KkcCandidate* candidate);
static gboolean kkc_segment_dictionary_real_purge_candidate (KkcSegmentDictionary* self, KkcCandidate* candidate);
GType kkc_empty_segment_dictionary_get_type (void) G_GNUC_CONST;
enum  {
	KKC_EMPTY_SEGMENT_DICTIONARY_DUMMY_PROPERTY
};
static void kkc_empty_segment_dictionary_real_reload (KkcDictionary* base, GError** error);
static gboolean kkc_empty_segment_dictionary_real_lookup_candidates (KkcSegmentDictionary* base, const gchar* midasi, gboolean okuri, KkcCandidate*** candidates, int* candidates_length1);
static gchar** kkc_empty_segment_dictionary_real_complete (KkcSegmentDictionary* base, const gchar* midasi, int* result_length1);
KkcEmptySegmentDictionary* kkc_empty_segment_dictionary_new (void);
KkcEmptySegmentDictionary* kkc_empty_segment_dictionary_construct (GType object_type);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


/**
         * Lookup candidates in the dictionary.
         *
         * @param midasi a midasi (title) string to lookup
         * @param okuri whether to search okuri-ari entries or
         * okuri-nasi entries
         * @param candidates output location of candidates
         *
         * @return `true` if found, `false` otherwise
         */
gboolean kkc_segment_dictionary_lookup_candidates (KkcSegmentDictionary* self, const gchar* midasi, gboolean okuri, KkcCandidate*** candidates, int* candidates_length1) {
	g_return_val_if_fail (self != NULL, FALSE);
	return KKC_SEGMENT_DICTIONARY_GET_INTERFACE (self)->lookup_candidates (self, midasi, okuri, candidates, candidates_length1);
}


/**
         * Return an array of strings which matches midasi.
         *
         * @param midasi a midasi (title) string to lookup
         *
         * @return an array of strings
         */
gchar** kkc_segment_dictionary_complete (KkcSegmentDictionary* self, const gchar* midasi, int* result_length1) {
	g_return_val_if_fail (self != NULL, NULL);
	return KKC_SEGMENT_DICTIONARY_GET_INTERFACE (self)->complete (self, midasi, result_length1);
}


/**
         * Select a candidate in the dictionary.
         *
         * @param candidate an Candidate
         *
         * @return `true` if the dictionary is modified, `false` otherwise.
         */
static gboolean kkc_segment_dictionary_real_select_candidate (KkcSegmentDictionary* self, KkcCandidate* candidate) {
	gboolean result = FALSE;
	g_return_val_if_fail (candidate != NULL, FALSE);
	result = FALSE;
	return result;
}


gboolean kkc_segment_dictionary_select_candidate (KkcSegmentDictionary* self, KkcCandidate* candidate) {
	g_return_val_if_fail (self != NULL, FALSE);
	return KKC_SEGMENT_DICTIONARY_GET_INTERFACE (self)->select_candidate (self, candidate);
}


/**
         * Purge a candidate in the dictionary.
         *
         * @param candidate an Candidate
         *
         * @return `true` if the dictionary is modified, `false` otherwise.
         */
static gboolean kkc_segment_dictionary_real_purge_candidate (KkcSegmentDictionary* self, KkcCandidate* candidate) {
	gboolean result = FALSE;
	g_return_val_if_fail (candidate != NULL, FALSE);
	result = FALSE;
	return result;
}


gboolean kkc_segment_dictionary_purge_candidate (KkcSegmentDictionary* self, KkcCandidate* candidate) {
	g_return_val_if_fail (self != NULL, FALSE);
	return KKC_SEGMENT_DICTIONARY_GET_INTERFACE (self)->purge_candidate (self, candidate);
}


static void kkc_segment_dictionary_base_init (KkcSegmentDictionaryIface * iface) {
	static gboolean initialized = FALSE;
	if (!initialized) {
		initialized = TRUE;
		iface->select_candidate = kkc_segment_dictionary_real_select_candidate;
		iface->purge_candidate = kkc_segment_dictionary_real_purge_candidate;
	}
}


/**
     * Base interface of segment dictionaries.
     */
GType kkc_segment_dictionary_get_type (void) {
	static volatile gsize kkc_segment_dictionary_type_id__volatile = 0;
	if (g_once_init_enter (&kkc_segment_dictionary_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (KkcSegmentDictionaryIface), (GBaseInitFunc) kkc_segment_dictionary_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType kkc_segment_dictionary_type_id;
		kkc_segment_dictionary_type_id = g_type_register_static (G_TYPE_INTERFACE, "KkcSegmentDictionary", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (kkc_segment_dictionary_type_id, G_TYPE_OBJECT);
		g_type_interface_add_prerequisite (kkc_segment_dictionary_type_id, KKC_TYPE_DICTIONARY);
		g_once_init_leave (&kkc_segment_dictionary_type_id__volatile, kkc_segment_dictionary_type_id);
	}
	return kkc_segment_dictionary_type_id__volatile;
}


/**
         * {@inheritDoc}
         */
static void kkc_empty_segment_dictionary_real_reload (KkcDictionary* base, GError** error) {
	KkcEmptySegmentDictionary * self;
	self = (KkcEmptySegmentDictionary*) base;
}


/**
         * {@inheritDoc}
         */
static gboolean kkc_empty_segment_dictionary_real_lookup_candidates (KkcSegmentDictionary* base, const gchar* midasi, gboolean okuri, KkcCandidate*** candidates, int* candidates_length1) {
	KkcEmptySegmentDictionary * self;
	KkcCandidate** _vala_candidates = NULL;
	int _vala_candidates_length1 = 0;
	gboolean result = FALSE;
	KkcCandidate** _tmp0_ = NULL;
	self = (KkcEmptySegmentDictionary*) base;
	g_return_val_if_fail (midasi != NULL, FALSE);
	_tmp0_ = g_new0 (KkcCandidate*, 0 + 1);
	_vala_candidates = (_vala_array_free (_vala_candidates, _vala_candidates_length1, (GDestroyNotify) g_object_unref), NULL);
	_vala_candidates = _tmp0_;
	_vala_candidates_length1 = 0;
	result = FALSE;
	if (candidates) {
		*candidates = _vala_candidates;
	} else {
		_vala_candidates = (_vala_array_free (_vala_candidates, _vala_candidates_length1, (GDestroyNotify) g_object_unref), NULL);
	}
	if (candidates_length1) {
		*candidates_length1 = _vala_candidates_length1;
	}
	return result;
}


/**
         * {@inheritDoc}
         */
static gchar** kkc_empty_segment_dictionary_real_complete (KkcSegmentDictionary* base, const gchar* midasi, int* result_length1) {
	KkcEmptySegmentDictionary * self;
	gchar** result = NULL;
	gchar** _tmp0_ = NULL;
	gchar** _tmp1_;
	gint _tmp1__length1;
	self = (KkcEmptySegmentDictionary*) base;
	g_return_val_if_fail (midasi != NULL, NULL);
	_tmp0_ = g_new0 (gchar*, 0 + 1);
	_tmp1_ = _tmp0_;
	_tmp1__length1 = 0;
	if (result_length1) {
		*result_length1 = _tmp1__length1;
	}
	result = _tmp1_;
	return result;
}


KkcEmptySegmentDictionary* kkc_empty_segment_dictionary_construct (GType object_type) {
	KkcEmptySegmentDictionary * self = NULL;
	self = (KkcEmptySegmentDictionary*) g_object_new (object_type, NULL);
	return self;
}


KkcEmptySegmentDictionary* kkc_empty_segment_dictionary_new (void) {
	return kkc_empty_segment_dictionary_construct (KKC_TYPE_EMPTY_SEGMENT_DICTIONARY);
}


static void kkc_empty_segment_dictionary_class_init (KkcEmptySegmentDictionaryClass * klass) {
	kkc_empty_segment_dictionary_parent_class = g_type_class_peek_parent (klass);
}


static void kkc_empty_segment_dictionary_kkc_dictionary_interface_init (KkcDictionaryIface * iface) {
	kkc_empty_segment_dictionary_kkc_dictionary_parent_iface = g_type_interface_peek_parent (iface);
	iface->reload = (void (*)(KkcDictionary*, GError**)) kkc_empty_segment_dictionary_real_reload;
}


static void kkc_empty_segment_dictionary_kkc_segment_dictionary_interface_init (KkcSegmentDictionaryIface * iface) {
	kkc_empty_segment_dictionary_kkc_segment_dictionary_parent_iface = g_type_interface_peek_parent (iface);
	iface->lookup_candidates = (gboolean (*)(KkcSegmentDictionary*, const gchar*, gboolean, KkcCandidate***, int*)) kkc_empty_segment_dictionary_real_lookup_candidates;
	iface->complete = (gchar** (*)(KkcSegmentDictionary*, const gchar*, int*)) kkc_empty_segment_dictionary_real_complete;
}


static void kkc_empty_segment_dictionary_instance_init (KkcEmptySegmentDictionary * self) {
}


/**
     * Null implementation of Dictionary.
     */
GType kkc_empty_segment_dictionary_get_type (void) {
	static volatile gsize kkc_empty_segment_dictionary_type_id__volatile = 0;
	if (g_once_init_enter (&kkc_empty_segment_dictionary_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (KkcEmptySegmentDictionaryClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) kkc_empty_segment_dictionary_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (KkcEmptySegmentDictionary), 0, (GInstanceInitFunc) kkc_empty_segment_dictionary_instance_init, NULL };
		static const GInterfaceInfo kkc_dictionary_info = { (GInterfaceInitFunc) kkc_empty_segment_dictionary_kkc_dictionary_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		static const GInterfaceInfo kkc_segment_dictionary_info = { (GInterfaceInitFunc) kkc_empty_segment_dictionary_kkc_segment_dictionary_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType kkc_empty_segment_dictionary_type_id;
		kkc_empty_segment_dictionary_type_id = g_type_register_static (G_TYPE_OBJECT, "KkcEmptySegmentDictionary", &g_define_type_info, 0);
		g_type_add_interface_static (kkc_empty_segment_dictionary_type_id, KKC_TYPE_DICTIONARY, &kkc_dictionary_info);
		g_type_add_interface_static (kkc_empty_segment_dictionary_type_id, KKC_TYPE_SEGMENT_DICTIONARY, &kkc_segment_dictionary_info);
		g_once_init_leave (&kkc_empty_segment_dictionary_type_id__volatile, kkc_empty_segment_dictionary_type_id);
	}
	return kkc_empty_segment_dictionary_type_id__volatile;
}


static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	if ((array != NULL) && (destroy_func != NULL)) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}


static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}



