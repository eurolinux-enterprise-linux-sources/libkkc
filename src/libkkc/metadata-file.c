/* metadata-file.c generated by valac 0.20.1.19-a6516, the Vala compiler
 * generated from metadata-file.vala, do not modify */

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
#include <gio/gio.h>
#include <json-glib/json-glib.h>
#include <stdlib.h>
#include <string.h>
#include <glib/gi18n-lib.h>
#include <config.h>


#define KKC_TYPE_METADATA_FILE (kkc_metadata_file_get_type ())
#define KKC_METADATA_FILE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_METADATA_FILE, KkcMetadataFile))
#define KKC_METADATA_FILE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_METADATA_FILE, KkcMetadataFileClass))
#define KKC_IS_METADATA_FILE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_METADATA_FILE))
#define KKC_IS_METADATA_FILE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_METADATA_FILE))
#define KKC_METADATA_FILE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_METADATA_FILE, KkcMetadataFileClass))

typedef struct _KkcMetadataFile KkcMetadataFile;
typedef struct _KkcMetadataFileClass KkcMetadataFileClass;
typedef struct _KkcMetadataFilePrivate KkcMetadataFilePrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define __vala_JsonNode_free0(var) ((var == NULL) ? NULL : (var = (_vala_JsonNode_free (var), NULL)))
#define __vala_JsonObject_free0(var) ((var == NULL) ? NULL : (var = (_vala_JsonObject_free (var), NULL)))

typedef enum  {
	KKC_METADATA_FORMAT_ERROR_MISSING_FIELD,
	KKC_METADATA_FORMAT_ERROR_INVALID_FIELD
} KkcMetadataFormatError;
#define KKC_METADATA_FORMAT_ERROR kkc_metadata_format_error_quark ()
struct _KkcMetadataFile {
	GObject parent_instance;
	KkcMetadataFilePrivate * priv;
};

struct _KkcMetadataFileClass {
	GObjectClass parent_class;
	gboolean (*parse) (KkcMetadataFile* self, JsonObject* object, GError** error);
};

struct _KkcMetadataFilePrivate {
	gchar* _name;
	gchar* _label;
	gchar* _description;
	gchar* _filename;
};


static gpointer kkc_metadata_file_parent_class = NULL;
static GInitableIface* kkc_metadata_file_g_initable_parent_iface = NULL;

GQuark kkc_metadata_format_error_quark (void);
GType kkc_metadata_file_get_type (void) G_GNUC_CONST;
#define KKC_METADATA_FILE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), KKC_TYPE_METADATA_FILE, KkcMetadataFilePrivate))
enum  {
	KKC_METADATA_FILE_DUMMY_PROPERTY,
	KKC_METADATA_FILE_NAME,
	KKC_METADATA_FILE_LABEL,
	KKC_METADATA_FILE_DESCRIPTION,
	KKC_METADATA_FILE_FILENAME
};
KkcMetadataFile* kkc_metadata_file_construct (GType object_type, const gchar* name, const gchar* filename, GError** error);
gboolean kkc_metadata_file_parse (KkcMetadataFile* self, JsonObject* object, GError** error);
static gboolean kkc_metadata_file_real_parse (KkcMetadataFile* self, JsonObject* object, GError** error);
static gboolean kkc_metadata_file_real_init (GInitable* base, GCancellable* cancellable, GError** error);
const gchar* kkc_metadata_file_get_filename (KkcMetadataFile* self);
static JsonNode* _vala_JsonNode_copy (JsonNode* self);
static void _vala_JsonNode_free (JsonNode* self);
static JsonObject* _vala_JsonObject_copy (JsonObject* self);
static void _vala_JsonObject_free (JsonObject* self);
void kkc_metadata_file_set_label (KkcMetadataFile* self, const gchar* value);
void kkc_metadata_file_set_description (KkcMetadataFile* self, const gchar* value);
const gchar* kkc_metadata_file_get_name (KkcMetadataFile* self);
void kkc_metadata_file_set_name (KkcMetadataFile* self, const gchar* value);
const gchar* kkc_metadata_file_get_label (KkcMetadataFile* self);
const gchar* kkc_metadata_file_get_description (KkcMetadataFile* self);
void kkc_metadata_file_set_filename (KkcMetadataFile* self, const gchar* value);
static void kkc_metadata_file_finalize (GObject* obj);
static void _vala_kkc_metadata_file_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_kkc_metadata_file_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


GQuark kkc_metadata_format_error_quark (void) {
	return g_quark_from_static_string ("kkc_metadata_format_error-quark");
}


KkcMetadataFile* kkc_metadata_file_construct (GType object_type, const gchar* name, const gchar* filename, GError** error) {
	KkcMetadataFile * self = NULL;
	const gchar* _tmp0_;
	const gchar* _tmp1_;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (name != NULL, NULL);
	g_return_val_if_fail (filename != NULL, NULL);
	_tmp0_ = name;
	_tmp1_ = filename;
	self = (KkcMetadataFile*) g_object_new (object_type, "name", _tmp0_, "filename", _tmp1_, NULL);
	g_initable_init ((GInitable*) self, NULL, &_inner_error_);
	if (_inner_error_ != NULL) {
		g_propagate_error (error, _inner_error_);
		_g_object_unref0 (self);
		return NULL;
	}
	return self;
}


static gboolean kkc_metadata_file_real_parse (KkcMetadataFile* self, JsonObject* object, GError** error) {
	g_critical ("Type `%s' does not implement abstract method `kkc_metadata_file_parse'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return FALSE;
}


gboolean kkc_metadata_file_parse (KkcMetadataFile* self, JsonObject* object, GError** error) {
	g_return_val_if_fail (self != NULL, FALSE);
	return KKC_METADATA_FILE_GET_CLASS (self)->parse (self, object, error);
}


static JsonNode* _vala_JsonNode_copy (JsonNode* self) {
	return g_boxed_copy (json_node_get_type (), self);
}


static gpointer __vala_JsonNode_copy0 (gpointer self) {
	return self ? _vala_JsonNode_copy (self) : NULL;
}


static void _vala_JsonNode_free (JsonNode* self) {
	g_boxed_free (json_node_get_type (), self);
}


static JsonObject* _vala_JsonObject_copy (JsonObject* self) {
	return g_boxed_copy (json_object_get_type (), self);
}


static gpointer __vala_JsonObject_copy0 (gpointer self) {
	return self ? _vala_JsonObject_copy (self) : NULL;
}


static void _vala_JsonObject_free (JsonObject* self) {
	g_boxed_free (json_object_get_type (), self);
}


static gboolean kkc_metadata_file_real_init (GInitable* base, GCancellable* cancellable, GError** error) {
	KkcMetadataFile * self;
	gboolean result = FALSE;
	JsonParser* parser = NULL;
	JsonParser* _tmp0_;
	JsonParser* _tmp1_;
	const gchar* _tmp2_;
	JsonNode* root = NULL;
	JsonParser* _tmp3_;
	JsonNode* _tmp4_ = NULL;
	JsonNode* _tmp5_;
	JsonNode* _tmp6_;
	JsonNodeType _tmp7_ = 0;
	JsonObject* object = NULL;
	JsonNode* _tmp9_;
	JsonObject* _tmp10_ = NULL;
	JsonObject* _tmp11_;
	JsonNode* member = NULL;
	JsonObject* _tmp12_;
	gboolean _tmp13_ = FALSE;
	JsonObject* _tmp15_;
	JsonNode* _tmp16_ = NULL;
	JsonNode* _tmp17_;
	gchar* name = NULL;
	JsonNode* _tmp18_;
	const gchar* _tmp19_ = NULL;
	gchar* _tmp20_;
	JsonObject* _tmp21_;
	gboolean _tmp22_ = FALSE;
	JsonObject* _tmp24_;
	JsonNode* _tmp25_ = NULL;
	JsonNode* _tmp26_;
	gchar* description = NULL;
	JsonNode* _tmp27_;
	const gchar* _tmp28_ = NULL;
	gchar* _tmp29_;
	JsonObject* _tmp30_;
	gchar* label = NULL;
	const gchar* _tmp31_;
	gchar* _tmp32_;
	const gchar* _tmp33_;
	const gchar* _tmp37_;
	const gchar* _tmp41_;
	const gchar* _tmp42_;
	GError * _inner_error_ = NULL;
	self = (KkcMetadataFile*) base;
	_tmp0_ = json_parser_new ();
	parser = _tmp0_;
	_tmp1_ = parser;
	_tmp2_ = self->priv->_filename;
	json_parser_load_from_file (_tmp1_, _tmp2_, &_inner_error_);
	if (_inner_error_ != NULL) {
		g_propagate_error (error, _inner_error_);
		_g_object_unref0 (parser);
		return FALSE;
	}
	_tmp3_ = parser;
	_tmp4_ = json_parser_get_root (_tmp3_);
	_tmp5_ = __vala_JsonNode_copy0 (_tmp4_);
	root = _tmp5_;
	_tmp6_ = root;
	_tmp7_ = json_node_get_node_type (_tmp6_);
	if (_tmp7_ != JSON_NODE_OBJECT) {
		GError* _tmp8_;
		_tmp8_ = g_error_new_literal (KKC_METADATA_FORMAT_ERROR, KKC_METADATA_FORMAT_ERROR_MISSING_FIELD, "metadata must be a JSON object");
		_inner_error_ = _tmp8_;
		g_propagate_error (error, _inner_error_);
		__vala_JsonNode_free0 (root);
		_g_object_unref0 (parser);
		return FALSE;
	}
	_tmp9_ = root;
	_tmp10_ = json_node_get_object (_tmp9_);
	_tmp11_ = __vala_JsonObject_copy0 (_tmp10_);
	object = _tmp11_;
	_tmp12_ = object;
	_tmp13_ = json_object_has_member (_tmp12_, "name");
	if (!_tmp13_) {
		GError* _tmp14_;
		_tmp14_ = g_error_new_literal (KKC_METADATA_FORMAT_ERROR, KKC_METADATA_FORMAT_ERROR_MISSING_FIELD, "name is not defined in metadata");
		_inner_error_ = _tmp14_;
		g_propagate_error (error, _inner_error_);
		__vala_JsonNode_free0 (member);
		__vala_JsonObject_free0 (object);
		__vala_JsonNode_free0 (root);
		_g_object_unref0 (parser);
		return FALSE;
	}
	_tmp15_ = object;
	_tmp16_ = json_object_get_member (_tmp15_, "name");
	_tmp17_ = __vala_JsonNode_copy0 (_tmp16_);
	__vala_JsonNode_free0 (member);
	member = _tmp17_;
	_tmp18_ = member;
	_tmp19_ = json_node_get_string (_tmp18_);
	_tmp20_ = g_strdup (_tmp19_);
	name = _tmp20_;
	_tmp21_ = object;
	_tmp22_ = json_object_has_member (_tmp21_, "description");
	if (!_tmp22_) {
		GError* _tmp23_;
		_tmp23_ = g_error_new_literal (KKC_METADATA_FORMAT_ERROR, KKC_METADATA_FORMAT_ERROR_MISSING_FIELD, "description is not defined in metadata");
		_inner_error_ = _tmp23_;
		g_propagate_error (error, _inner_error_);
		_g_free0 (name);
		__vala_JsonNode_free0 (member);
		__vala_JsonObject_free0 (object);
		__vala_JsonNode_free0 (root);
		_g_object_unref0 (parser);
		return FALSE;
	}
	_tmp24_ = object;
	_tmp25_ = json_object_get_member (_tmp24_, "description");
	_tmp26_ = __vala_JsonNode_copy0 (_tmp25_);
	__vala_JsonNode_free0 (member);
	member = _tmp26_;
	_tmp27_ = member;
	_tmp28_ = json_node_get_string (_tmp27_);
	_tmp29_ = g_strdup (_tmp28_);
	description = _tmp29_;
	_tmp30_ = object;
	kkc_metadata_file_parse (self, _tmp30_, &_inner_error_);
	if (_inner_error_ != NULL) {
		g_propagate_error (error, _inner_error_);
		_g_free0 (description);
		_g_free0 (name);
		__vala_JsonNode_free0 (member);
		__vala_JsonObject_free0 (object);
		__vala_JsonNode_free0 (root);
		_g_object_unref0 (parser);
		return FALSE;
	}
	_tmp31_ = name;
	_tmp32_ = g_strdup (_tmp31_);
	label = _tmp32_;
	_tmp33_ = label;
	if (g_strcmp0 (_tmp33_, "") != 0) {
		const gchar* _tmp34_;
		const gchar* _tmp35_ = NULL;
		gchar* _tmp36_;
		_tmp34_ = label;
		_tmp35_ = g_dgettext (GETTEXT_PACKAGE, _tmp34_);
		_tmp36_ = g_strdup (_tmp35_);
		_g_free0 (label);
		label = _tmp36_;
	}
	_tmp37_ = description;
	if (g_strcmp0 (_tmp37_, "") != 0) {
		const gchar* _tmp38_;
		const gchar* _tmp39_ = NULL;
		gchar* _tmp40_;
		_tmp38_ = description;
		_tmp39_ = g_dgettext (GETTEXT_PACKAGE, _tmp38_);
		_tmp40_ = g_strdup (_tmp39_);
		_g_free0 (description);
		description = _tmp40_;
	}
	_tmp41_ = label;
	kkc_metadata_file_set_label (self, _tmp41_);
	_tmp42_ = description;
	kkc_metadata_file_set_description (self, _tmp42_);
	result = TRUE;
	_g_free0 (label);
	_g_free0 (description);
	_g_free0 (name);
	__vala_JsonNode_free0 (member);
	__vala_JsonObject_free0 (object);
	__vala_JsonNode_free0 (root);
	_g_object_unref0 (parser);
	return result;
}


const gchar* kkc_metadata_file_get_name (KkcMetadataFile* self) {
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_name;
	result = _tmp0_;
	return result;
}


void kkc_metadata_file_set_name (KkcMetadataFile* self, const gchar* value) {
	const gchar* _tmp0_;
	gchar* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_name);
	self->priv->_name = _tmp1_;
	g_object_notify ((GObject *) self, "name");
}


const gchar* kkc_metadata_file_get_label (KkcMetadataFile* self) {
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_label;
	result = _tmp0_;
	return result;
}


void kkc_metadata_file_set_label (KkcMetadataFile* self, const gchar* value) {
	const gchar* _tmp0_;
	gchar* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_label);
	self->priv->_label = _tmp1_;
	g_object_notify ((GObject *) self, "label");
}


const gchar* kkc_metadata_file_get_description (KkcMetadataFile* self) {
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_description;
	result = _tmp0_;
	return result;
}


void kkc_metadata_file_set_description (KkcMetadataFile* self, const gchar* value) {
	const gchar* _tmp0_;
	gchar* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_description);
	self->priv->_description = _tmp1_;
	g_object_notify ((GObject *) self, "description");
}


const gchar* kkc_metadata_file_get_filename (KkcMetadataFile* self) {
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_filename;
	result = _tmp0_;
	return result;
}


void kkc_metadata_file_set_filename (KkcMetadataFile* self, const gchar* value) {
	const gchar* _tmp0_;
	gchar* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_filename);
	self->priv->_filename = _tmp1_;
	g_object_notify ((GObject *) self, "filename");
}


static void kkc_metadata_file_class_init (KkcMetadataFileClass * klass) {
	kkc_metadata_file_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (KkcMetadataFilePrivate));
	KKC_METADATA_FILE_CLASS (klass)->parse = kkc_metadata_file_real_parse;
	G_OBJECT_CLASS (klass)->get_property = _vala_kkc_metadata_file_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_kkc_metadata_file_set_property;
	G_OBJECT_CLASS (klass)->finalize = kkc_metadata_file_finalize;
	/**
	         * Name of the metadata.
	         */
	g_object_class_install_property (G_OBJECT_CLASS (klass), KKC_METADATA_FILE_NAME, g_param_spec_string ("name", "name", "name", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT));
	/**
	         * Label string of the metadata.
	         */
	g_object_class_install_property (G_OBJECT_CLASS (klass), KKC_METADATA_FILE_LABEL, g_param_spec_string ("label", "label", "label", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT));
	/**
	         * Description of the metadata.
	         */
	g_object_class_install_property (G_OBJECT_CLASS (klass), KKC_METADATA_FILE_DESCRIPTION, g_param_spec_string ("description", "description", "description", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT));
	/**
	         * Location of the metadata file.
	         */
	g_object_class_install_property (G_OBJECT_CLASS (klass), KKC_METADATA_FILE_FILENAME, g_param_spec_string ("filename", "filename", "filename", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT));
}


static void kkc_metadata_file_g_initable_interface_init (GInitableIface * iface) {
	kkc_metadata_file_g_initable_parent_iface = g_type_interface_peek_parent (iface);
	iface->init = (gboolean (*)(GInitable*, GCancellable*, GError**)) kkc_metadata_file_real_init;
}


static void kkc_metadata_file_instance_init (KkcMetadataFile * self) {
	self->priv = KKC_METADATA_FILE_GET_PRIVATE (self);
}


static void kkc_metadata_file_finalize (GObject* obj) {
	KkcMetadataFile * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, KKC_TYPE_METADATA_FILE, KkcMetadataFile);
	_g_free0 (self->priv->_name);
	_g_free0 (self->priv->_label);
	_g_free0 (self->priv->_description);
	_g_free0 (self->priv->_filename);
	G_OBJECT_CLASS (kkc_metadata_file_parent_class)->finalize (obj);
}


GType kkc_metadata_file_get_type (void) {
	static volatile gsize kkc_metadata_file_type_id__volatile = 0;
	if (g_once_init_enter (&kkc_metadata_file_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (KkcMetadataFileClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) kkc_metadata_file_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (KkcMetadataFile), 0, (GInstanceInitFunc) kkc_metadata_file_instance_init, NULL };
		static const GInterfaceInfo g_initable_info = { (GInterfaceInitFunc) kkc_metadata_file_g_initable_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType kkc_metadata_file_type_id;
		kkc_metadata_file_type_id = g_type_register_static (G_TYPE_OBJECT, "KkcMetadataFile", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
		g_type_add_interface_static (kkc_metadata_file_type_id, G_TYPE_INITABLE, &g_initable_info);
		g_once_init_leave (&kkc_metadata_file_type_id__volatile, kkc_metadata_file_type_id);
	}
	return kkc_metadata_file_type_id__volatile;
}


static void _vala_kkc_metadata_file_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	KkcMetadataFile * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, KKC_TYPE_METADATA_FILE, KkcMetadataFile);
	switch (property_id) {
		case KKC_METADATA_FILE_NAME:
		g_value_set_string (value, kkc_metadata_file_get_name (self));
		break;
		case KKC_METADATA_FILE_LABEL:
		g_value_set_string (value, kkc_metadata_file_get_label (self));
		break;
		case KKC_METADATA_FILE_DESCRIPTION:
		g_value_set_string (value, kkc_metadata_file_get_description (self));
		break;
		case KKC_METADATA_FILE_FILENAME:
		g_value_set_string (value, kkc_metadata_file_get_filename (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_kkc_metadata_file_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	KkcMetadataFile * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, KKC_TYPE_METADATA_FILE, KkcMetadataFile);
	switch (property_id) {
		case KKC_METADATA_FILE_NAME:
		kkc_metadata_file_set_name (self, g_value_get_string (value));
		break;
		case KKC_METADATA_FILE_LABEL:
		kkc_metadata_file_set_label (self, g_value_get_string (value));
		break;
		case KKC_METADATA_FILE_DESCRIPTION:
		kkc_metadata_file_set_description (self, g_value_get_string (value));
		break;
		case KKC_METADATA_FILE_FILENAME:
		kkc_metadata_file_set_filename (self, g_value_get_string (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



