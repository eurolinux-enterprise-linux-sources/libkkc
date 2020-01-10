/* numeric-template.c generated by valac 0.20.1.19-a6516, the Vala compiler
 * generated from numeric-template.vala, do not modify */

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


#define KKC_TYPE_TEMPLATE (kkc_template_get_type ())
#define KKC_TEMPLATE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_TEMPLATE, KkcTemplate))
#define KKC_IS_TEMPLATE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_TEMPLATE))
#define KKC_TEMPLATE_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), KKC_TYPE_TEMPLATE, KkcTemplateIface))

typedef struct _KkcTemplate KkcTemplate;
typedef struct _KkcTemplateIface KkcTemplateIface;

#define KKC_TYPE_NUMERIC_TEMPLATE (kkc_numeric_template_get_type ())
#define KKC_NUMERIC_TEMPLATE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_NUMERIC_TEMPLATE, KkcNumericTemplate))
#define KKC_NUMERIC_TEMPLATE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_NUMERIC_TEMPLATE, KkcNumericTemplateClass))
#define KKC_IS_NUMERIC_TEMPLATE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_NUMERIC_TEMPLATE))
#define KKC_IS_NUMERIC_TEMPLATE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_NUMERIC_TEMPLATE))
#define KKC_NUMERIC_TEMPLATE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_NUMERIC_TEMPLATE, KkcNumericTemplateClass))

typedef struct _KkcNumericTemplate KkcNumericTemplate;
typedef struct _KkcNumericTemplateClass KkcNumericTemplateClass;
typedef struct _KkcNumericTemplatePrivate KkcNumericTemplatePrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_regex_unref0(var) ((var == NULL) ? NULL : (var = (g_regex_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
#define _g_match_info_free0(var) ((var == NULL) ? NULL : (var = (g_match_info_free (var), NULL)))
#define _g_string_free0(var) ((var == NULL) ? NULL : (var = (g_string_free (var, TRUE), NULL)))

#define KKC_TYPE_NUMERIC_CONVERSION_TYPE (kkc_numeric_conversion_type_get_type ())

struct _KkcTemplateIface {
	GTypeInterface parent_iface;
	gchar* (*expand) (KkcTemplate* self, const gchar* text);
	const gchar* (*get_source) (KkcTemplate* self);
	void (*set_source) (KkcTemplate* self, const gchar* value);
	gboolean (*get_okuri) (KkcTemplate* self);
	void (*set_okuri) (KkcTemplate* self, gboolean value);
};

struct _KkcNumericTemplate {
	GObject parent_instance;
	KkcNumericTemplatePrivate * priv;
};

struct _KkcNumericTemplateClass {
	GObjectClass parent_class;
};

struct _KkcNumericTemplatePrivate {
	GeeArrayList* numerics;
	gchar* _source;
	gboolean _okuri;
	GRegex* regex;
	GRegex* ref_regex;
};

typedef enum  {
	KKC_NUMERIC_CONVERSION_TYPE_LATIN,
	KKC_NUMERIC_CONVERSION_TYPE_WIDE_LATIN,
	KKC_NUMERIC_CONVERSION_TYPE_KANJI_NUMERAL,
	KKC_NUMERIC_CONVERSION_TYPE_KANJI,
	KKC_NUMERIC_CONVERSION_TYPE_RECONVERT,
	KKC_NUMERIC_CONVERSION_TYPE_DAIJI,
	KKC_NUMERIC_CONVERSION_TYPE_RESERVED6,
	KKC_NUMERIC_CONVERSION_TYPE_RESERVED7,
	KKC_NUMERIC_CONVERSION_TYPE_GROUPING,
	KKC_NUMERIC_CONVERSION_TYPE_SHOGI
} KkcNumericConversionType;


static gpointer kkc_numeric_template_parent_class = NULL;
static KkcTemplateIface* kkc_numeric_template_kkc_template_parent_iface = NULL;

GType kkc_template_get_type (void) G_GNUC_CONST;
GType kkc_numeric_template_get_type (void) G_GNUC_CONST;
#define KKC_NUMERIC_TEMPLATE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), KKC_TYPE_NUMERIC_TEMPLATE, KkcNumericTemplatePrivate))
enum  {
	KKC_NUMERIC_TEMPLATE_DUMMY_PROPERTY,
	KKC_NUMERIC_TEMPLATE_SOURCE,
	KKC_NUMERIC_TEMPLATE_OKURI
};
KkcNumericTemplate* kkc_numeric_template_new (const gchar* source);
KkcNumericTemplate* kkc_numeric_template_construct (GType object_type, const gchar* source);
void kkc_template_set_okuri (KkcTemplate* self, gboolean value);
static void kkc_numeric_template_extract_numerics (KkcNumericTemplate* self, const gchar* source);
void kkc_template_set_source (KkcTemplate* self, const gchar* value);
static gchar* kkc_numeric_template_real_expand (KkcTemplate* base, const gchar* text);
const gchar* kkc_template_get_source (KkcTemplate* self);
GType kkc_numeric_conversion_type_get_type (void) G_GNUC_CONST;
gchar* kkc_rom_kana_utils_get_numeric (gint numeric, KkcNumericConversionType type);
static void kkc_numeric_template_finalize (GObject* obj);
gboolean kkc_template_get_okuri (KkcTemplate* self);
static void _vala_kkc_numeric_template_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_kkc_numeric_template_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


KkcNumericTemplate* kkc_numeric_template_construct (GType object_type, const gchar* source) {
	KkcNumericTemplate * self = NULL;
	const gchar* _tmp4_;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (source != NULL, NULL);
	self = (KkcNumericTemplate*) g_object_new (object_type, NULL);
	{
		GRegex* _tmp0_ = NULL;
		GRegex* _tmp1_;
		_tmp1_ = g_regex_new ("[0-9]+", 0, 0, &_inner_error_);
		_tmp0_ = _tmp1_;
		if (_inner_error_ != NULL) {
			if (_inner_error_->domain == G_REGEX_ERROR) {
				goto __catch21_g_regex_error;
			}
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
		_g_regex_unref0 (self->priv->regex);
		self->priv->regex = _tmp0_;
	}
	goto __finally21;
	__catch21_g_regex_error:
	{
		GError* e = NULL;
		e = _inner_error_;
		_inner_error_ = NULL;
		g_assert_not_reached ();
		_g_error_free0 (e);
	}
	__finally21:
	if (_inner_error_ != NULL) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return NULL;
	}
	{
		GRegex* _tmp2_ = NULL;
		GRegex* _tmp3_;
		_tmp3_ = g_regex_new ("#([0-9])", 0, 0, &_inner_error_);
		_tmp2_ = _tmp3_;
		if (_inner_error_ != NULL) {
			if (_inner_error_->domain == G_REGEX_ERROR) {
				goto __catch22_g_regex_error;
			}
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
		_g_regex_unref0 (self->priv->ref_regex);
		self->priv->ref_regex = _tmp2_;
	}
	goto __finally22;
	__catch22_g_regex_error:
	{
		GError* e = NULL;
		e = _inner_error_;
		_inner_error_ = NULL;
		g_assert_not_reached ();
		_g_error_free0 (e);
	}
	__finally22:
	if (_inner_error_ != NULL) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return NULL;
	}
	kkc_template_set_okuri ((KkcTemplate*) self, FALSE);
	_tmp4_ = source;
	kkc_numeric_template_extract_numerics (self, _tmp4_);
	return self;
}


KkcNumericTemplate* kkc_numeric_template_new (const gchar* source) {
	return kkc_numeric_template_construct (KKC_TYPE_NUMERIC_TEMPLATE, source);
}


static gchar* string_slice (const gchar* self, glong start, glong end) {
	gchar* result = NULL;
	glong string_length = 0L;
	gint _tmp0_;
	gint _tmp1_;
	glong _tmp2_;
	glong _tmp5_;
	gboolean _tmp8_ = FALSE;
	glong _tmp9_;
	gboolean _tmp12_;
	gboolean _tmp13_ = FALSE;
	glong _tmp14_;
	gboolean _tmp17_;
	glong _tmp18_;
	glong _tmp19_;
	glong _tmp20_;
	glong _tmp21_;
	glong _tmp22_;
	gchar* _tmp23_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = strlen (self);
	_tmp1_ = _tmp0_;
	string_length = (glong) _tmp1_;
	_tmp2_ = start;
	if (_tmp2_ < ((glong) 0)) {
		glong _tmp3_;
		glong _tmp4_;
		_tmp3_ = string_length;
		_tmp4_ = start;
		start = _tmp3_ + _tmp4_;
	}
	_tmp5_ = end;
	if (_tmp5_ < ((glong) 0)) {
		glong _tmp6_;
		glong _tmp7_;
		_tmp6_ = string_length;
		_tmp7_ = end;
		end = _tmp6_ + _tmp7_;
	}
	_tmp9_ = start;
	if (_tmp9_ >= ((glong) 0)) {
		glong _tmp10_;
		glong _tmp11_;
		_tmp10_ = start;
		_tmp11_ = string_length;
		_tmp8_ = _tmp10_ <= _tmp11_;
	} else {
		_tmp8_ = FALSE;
	}
	_tmp12_ = _tmp8_;
	g_return_val_if_fail (_tmp12_, NULL);
	_tmp14_ = end;
	if (_tmp14_ >= ((glong) 0)) {
		glong _tmp15_;
		glong _tmp16_;
		_tmp15_ = end;
		_tmp16_ = string_length;
		_tmp13_ = _tmp15_ <= _tmp16_;
	} else {
		_tmp13_ = FALSE;
	}
	_tmp17_ = _tmp13_;
	g_return_val_if_fail (_tmp17_, NULL);
	_tmp18_ = start;
	_tmp19_ = end;
	g_return_val_if_fail (_tmp18_ <= _tmp19_, NULL);
	_tmp20_ = start;
	_tmp21_ = end;
	_tmp22_ = start;
	_tmp23_ = g_strndup (((gchar*) self) + _tmp20_, (gsize) (_tmp21_ - _tmp22_));
	result = _tmp23_;
	return result;
}


static void kkc_numeric_template_extract_numerics (KkcNumericTemplate* self, const gchar* source) {
	GMatchInfo* info = NULL;
	gint start_pos = 0;
	GString* builder = NULL;
	GString* _tmp0_;
	GString* _tmp23_;
	const gchar* _tmp24_;
	gint _tmp25_;
	const gchar* _tmp26_;
	gint _tmp27_;
	gint _tmp28_;
	gchar* _tmp29_ = NULL;
	gchar* _tmp30_;
	GString* _tmp31_;
	const gchar* _tmp32_;
	GError * _inner_error_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (source != NULL);
	info = NULL;
	start_pos = 0;
	_tmp0_ = g_string_new ("");
	builder = _tmp0_;
	while (TRUE) {
		gchar* numeric = NULL;
		GMatchInfo* _tmp7_;
		gchar* _tmp8_ = NULL;
		gint match_start_pos = 0;
		gint match_end_pos = 0;
		GMatchInfo* _tmp9_;
		gint _tmp10_ = 0;
		gint _tmp11_ = 0;
		GeeArrayList* _tmp12_;
		const gchar* _tmp13_;
		gint _tmp14_ = 0;
		GString* _tmp15_;
		const gchar* _tmp16_;
		gint _tmp17_;
		gint _tmp18_;
		gchar* _tmp19_ = NULL;
		gchar* _tmp20_;
		GString* _tmp21_;
		gint _tmp22_;
		{
			gboolean _tmp1_ = FALSE;
			GRegex* _tmp2_;
			const gchar* _tmp3_;
			gint _tmp4_;
			GMatchInfo* _tmp5_ = NULL;
			gboolean _tmp6_ = FALSE;
			_tmp2_ = self->priv->regex;
			_tmp3_ = source;
			_tmp4_ = start_pos;
			_tmp6_ = g_regex_match_full (_tmp2_, _tmp3_, (gssize) (-1), _tmp4_, 0, &_tmp5_, &_inner_error_);
			_g_match_info_free0 (info);
			info = _tmp5_;
			_tmp1_ = _tmp6_;
			if (_inner_error_ != NULL) {
				if (_inner_error_->domain == G_REGEX_ERROR) {
					goto __catch23_g_regex_error;
				}
				_g_string_free0 (builder);
				_g_match_info_free0 (info);
				g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
				g_clear_error (&_inner_error_);
				return;
			}
			if (!_tmp1_) {
				break;
			}
		}
		goto __finally23;
		__catch23_g_regex_error:
		{
			GError* e = NULL;
			e = _inner_error_;
			_inner_error_ = NULL;
			g_return_if_reached ();
			_g_error_free0 (e);
		}
		__finally23:
		if (_inner_error_ != NULL) {
			_g_string_free0 (builder);
			_g_match_info_free0 (info);
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return;
		}
		_tmp7_ = info;
		_tmp8_ = g_match_info_fetch (_tmp7_, 0);
		numeric = _tmp8_;
		_tmp9_ = info;
		g_match_info_fetch_pos (_tmp9_, 0, &_tmp10_, &_tmp11_);
		match_start_pos = _tmp10_;
		match_end_pos = _tmp11_;
		_tmp12_ = self->priv->numerics;
		_tmp13_ = numeric;
		_tmp14_ = atoi (_tmp13_);
		gee_abstract_collection_add ((GeeAbstractCollection*) _tmp12_, (gpointer) ((gintptr) _tmp14_));
		_tmp15_ = builder;
		_tmp16_ = source;
		_tmp17_ = start_pos;
		_tmp18_ = match_start_pos;
		_tmp19_ = string_slice (_tmp16_, (glong) _tmp17_, (glong) _tmp18_);
		_tmp20_ = _tmp19_;
		g_string_append (_tmp15_, _tmp20_);
		_g_free0 (_tmp20_);
		_tmp21_ = builder;
		g_string_append (_tmp21_, "#");
		_tmp22_ = match_end_pos;
		start_pos = _tmp22_;
		_g_free0 (numeric);
	}
	_tmp23_ = builder;
	_tmp24_ = source;
	_tmp25_ = start_pos;
	_tmp26_ = source;
	_tmp27_ = strlen (_tmp26_);
	_tmp28_ = _tmp27_;
	_tmp29_ = string_slice (_tmp24_, (glong) _tmp25_, (glong) _tmp28_);
	_tmp30_ = _tmp29_;
	g_string_append (_tmp23_, _tmp30_);
	_g_free0 (_tmp30_);
	_tmp31_ = builder;
	_tmp32_ = _tmp31_->str;
	kkc_template_set_source ((KkcTemplate*) self, _tmp32_);
	_g_string_free0 (builder);
	_g_match_info_free0 (info);
}


static gchar string_get (const gchar* self, glong index) {
	gchar result = '\0';
	glong _tmp0_;
	gchar _tmp1_;
	g_return_val_if_fail (self != NULL, '\0');
	_tmp0_ = index;
	_tmp1_ = ((gchar*) self)[_tmp0_];
	result = _tmp1_;
	return result;
}


static gchar* kkc_numeric_template_real_expand (KkcTemplate* base, const gchar* text) {
	KkcNumericTemplate * self;
	gchar* result = NULL;
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_ = FALSE;
	const gchar* _tmp2_;
	const gchar* _tmp3_;
	gboolean _tmp5_;
	gboolean _tmp9_;
	GString* builder = NULL;
	GString* _tmp13_;
	GMatchInfo* info = NULL;
	gint start_pos = 0;
	GString* _tmp63_;
	const gchar* _tmp64_;
	gint _tmp65_;
	const gchar* _tmp66_;
	gint _tmp67_;
	gint _tmp68_;
	gchar* _tmp69_ = NULL;
	gchar* _tmp70_;
	GString* _tmp71_;
	const gchar* _tmp72_;
	gchar* _tmp73_;
	GError * _inner_error_ = NULL;
	self = (KkcNumericTemplate*) base;
	g_return_val_if_fail (text != NULL, NULL);
	_tmp2_ = kkc_template_get_source ((KkcTemplate*) self);
	_tmp3_ = _tmp2_;
	if (g_strcmp0 (_tmp3_, "#") == 0) {
		const gchar* _tmp4_;
		_tmp4_ = text;
		_tmp1_ = g_strcmp0 (_tmp4_, "＃") == 0;
	} else {
		_tmp1_ = FALSE;
	}
	_tmp5_ = _tmp1_;
	if (_tmp5_) {
		GeeArrayList* _tmp6_;
		gint _tmp7_;
		gint _tmp8_;
		_tmp6_ = self->priv->numerics;
		_tmp7_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp6_);
		_tmp8_ = _tmp7_;
		_tmp0_ = _tmp8_ > 0;
	} else {
		_tmp0_ = FALSE;
	}
	_tmp9_ = _tmp0_;
	if (_tmp9_) {
		GeeArrayList* _tmp10_;
		gpointer _tmp11_ = NULL;
		gchar* _tmp12_ = NULL;
		_tmp10_ = self->priv->numerics;
		_tmp11_ = gee_abstract_list_get ((GeeAbstractList*) _tmp10_, 0);
		_tmp12_ = kkc_rom_kana_utils_get_numeric ((gint) ((gintptr) _tmp11_), KKC_NUMERIC_CONVERSION_TYPE_LATIN);
		result = _tmp12_;
		return result;
	}
	_tmp13_ = g_string_new ("");
	builder = _tmp13_;
	info = NULL;
	start_pos = 0;
	{
		gint index = 0;
		index = 0;
		{
			gboolean _tmp14_ = FALSE;
			_tmp14_ = TRUE;
			while (TRUE) {
				gboolean _tmp15_;
				gint _tmp17_;
				GeeArrayList* _tmp18_;
				gint _tmp19_;
				gint _tmp20_;
				gint match_start_pos = 0;
				gint match_end_pos = 0;
				GMatchInfo* _tmp28_;
				gint _tmp29_ = 0;
				gint _tmp30_ = 0;
				GString* _tmp31_;
				const gchar* _tmp32_;
				gint _tmp33_;
				gint _tmp34_;
				gchar* _tmp35_ = NULL;
				gchar* _tmp36_;
				gchar* type = NULL;
				GMatchInfo* _tmp37_;
				gchar* _tmp38_ = NULL;
				const gchar* _tmp39_;
				gchar _tmp40_ = '\0';
				gint _tmp62_;
				_tmp15_ = _tmp14_;
				if (!_tmp15_) {
					gint _tmp16_;
					_tmp16_ = index;
					index = _tmp16_ + 1;
				}
				_tmp14_ = FALSE;
				_tmp17_ = index;
				_tmp18_ = self->priv->numerics;
				_tmp19_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp18_);
				_tmp20_ = _tmp19_;
				if (!(_tmp17_ < _tmp20_)) {
					break;
				}
				{
					gboolean _tmp21_ = FALSE;
					GRegex* _tmp22_;
					const gchar* _tmp23_;
					gint _tmp24_;
					GMatchInfo* _tmp25_ = NULL;
					gboolean _tmp26_ = FALSE;
					_tmp22_ = self->priv->ref_regex;
					_tmp23_ = text;
					_tmp24_ = start_pos;
					_tmp26_ = g_regex_match_full (_tmp22_, _tmp23_, (gssize) (-1), _tmp24_, 0, &_tmp25_, &_inner_error_);
					_g_match_info_free0 (info);
					info = _tmp25_;
					_tmp21_ = _tmp26_;
					if (_inner_error_ != NULL) {
						if (_inner_error_->domain == G_REGEX_ERROR) {
							goto __catch24_g_regex_error;
						}
						_g_match_info_free0 (info);
						_g_string_free0 (builder);
						g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
						g_clear_error (&_inner_error_);
						return NULL;
					}
					if (!_tmp21_) {
						break;
					}
				}
				goto __finally24;
				__catch24_g_regex_error:
				{
					GError* e = NULL;
					const gchar* _tmp27_;
					e = _inner_error_;
					_inner_error_ = NULL;
					_tmp27_ = text;
					g_return_val_if_reached (_tmp27_);
					_g_error_free0 (e);
				}
				__finally24:
				if (_inner_error_ != NULL) {
					_g_match_info_free0 (info);
					_g_string_free0 (builder);
					g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
					g_clear_error (&_inner_error_);
					return NULL;
				}
				_tmp28_ = info;
				g_match_info_fetch_pos (_tmp28_, 0, &_tmp29_, &_tmp30_);
				match_start_pos = _tmp29_;
				match_end_pos = _tmp30_;
				_tmp31_ = builder;
				_tmp32_ = text;
				_tmp33_ = start_pos;
				_tmp34_ = match_start_pos;
				_tmp35_ = string_slice (_tmp32_, (glong) _tmp33_, (glong) _tmp34_);
				_tmp36_ = _tmp35_;
				g_string_append (_tmp31_, _tmp36_);
				_g_free0 (_tmp36_);
				_tmp37_ = info;
				_tmp38_ = g_match_info_fetch (_tmp37_, 1);
				type = _tmp38_;
				_tmp39_ = type;
				_tmp40_ = string_get (_tmp39_, (glong) 0);
				switch (_tmp40_) {
					case '0':
					case '1':
					case '2':
					case '3':
					case '5':
					case '8':
					{
						GString* _tmp41_;
						GeeArrayList* _tmp42_;
						gint _tmp43_;
						gpointer _tmp44_ = NULL;
						const gchar* _tmp45_;
						gchar _tmp46_ = '\0';
						gchar* _tmp47_ = NULL;
						gchar* _tmp48_;
						_tmp41_ = builder;
						_tmp42_ = self->priv->numerics;
						_tmp43_ = index;
						_tmp44_ = gee_abstract_list_get ((GeeAbstractList*) _tmp42_, _tmp43_);
						_tmp45_ = type;
						_tmp46_ = string_get (_tmp45_, (glong) 0);
						_tmp47_ = kkc_rom_kana_utils_get_numeric ((gint) ((gintptr) _tmp44_), (KkcNumericConversionType) (_tmp46_ - '0'));
						_tmp48_ = _tmp47_;
						g_string_append (_tmp41_, _tmp48_);
						_g_free0 (_tmp48_);
						break;
					}
					case '4':
					case '9':
					{
						GString* _tmp49_;
						GeeArrayList* _tmp50_;
						gint _tmp51_;
						gpointer _tmp52_ = NULL;
						gchar* _tmp53_ = NULL;
						gchar* _tmp54_;
						_tmp49_ = builder;
						_tmp50_ = self->priv->numerics;
						_tmp51_ = index;
						_tmp52_ = gee_abstract_list_get ((GeeAbstractList*) _tmp50_, _tmp51_);
						_tmp53_ = kkc_rom_kana_utils_get_numeric ((gint) ((gintptr) _tmp52_), KKC_NUMERIC_CONVERSION_TYPE_LATIN);
						_tmp54_ = _tmp53_;
						g_string_append (_tmp49_, _tmp54_);
						_g_free0 (_tmp54_);
						break;
					}
					default:
					{
						const gchar* _tmp55_;
						GString* _tmp56_;
						GeeArrayList* _tmp57_;
						gint _tmp58_;
						gpointer _tmp59_ = NULL;
						gchar* _tmp60_ = NULL;
						gchar* _tmp61_;
						_tmp55_ = type;
						g_warning ("numeric-template.vala:124: unknown numeric conversion type: %s", _tmp55_);
						_tmp56_ = builder;
						_tmp57_ = self->priv->numerics;
						_tmp58_ = index;
						_tmp59_ = gee_abstract_list_get ((GeeAbstractList*) _tmp57_, _tmp58_);
						_tmp60_ = kkc_rom_kana_utils_get_numeric ((gint) ((gintptr) _tmp59_), KKC_NUMERIC_CONVERSION_TYPE_LATIN);
						_tmp61_ = _tmp60_;
						g_string_append (_tmp56_, _tmp61_);
						_g_free0 (_tmp61_);
						break;
					}
				}
				_tmp62_ = match_end_pos;
				start_pos = _tmp62_;
				_g_free0 (type);
			}
		}
	}
	_tmp63_ = builder;
	_tmp64_ = text;
	_tmp65_ = start_pos;
	_tmp66_ = text;
	_tmp67_ = strlen (_tmp66_);
	_tmp68_ = _tmp67_;
	_tmp69_ = string_slice (_tmp64_, (glong) _tmp65_, (glong) _tmp68_);
	_tmp70_ = _tmp69_;
	g_string_append (_tmp63_, _tmp70_);
	_g_free0 (_tmp70_);
	_tmp71_ = builder;
	_tmp72_ = _tmp71_->str;
	_tmp73_ = g_strdup (_tmp72_);
	result = _tmp73_;
	_g_match_info_free0 (info);
	_g_string_free0 (builder);
	return result;
}


static const gchar* kkc_numeric_template_real_get_source (KkcTemplate* base) {
	const gchar* result;
	KkcNumericTemplate* self;
	const gchar* _tmp0_;
	self = (KkcNumericTemplate*) base;
	_tmp0_ = self->priv->_source;
	result = _tmp0_;
	return result;
}


static void kkc_numeric_template_real_set_source (KkcTemplate* base, const gchar* value) {
	KkcNumericTemplate* self;
	const gchar* _tmp0_;
	gchar* _tmp1_;
	self = (KkcNumericTemplate*) base;
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_source);
	self->priv->_source = _tmp1_;
	g_object_notify ((GObject *) self, "source");
}


static gboolean kkc_numeric_template_real_get_okuri (KkcTemplate* base) {
	gboolean result;
	KkcNumericTemplate* self;
	gboolean _tmp0_;
	self = (KkcNumericTemplate*) base;
	_tmp0_ = self->priv->_okuri;
	result = _tmp0_;
	return result;
}


static void kkc_numeric_template_real_set_okuri (KkcTemplate* base, gboolean value) {
	KkcNumericTemplate* self;
	gboolean _tmp0_;
	self = (KkcNumericTemplate*) base;
	_tmp0_ = value;
	self->priv->_okuri = _tmp0_;
	g_object_notify ((GObject *) self, "okuri");
}


static void kkc_numeric_template_class_init (KkcNumericTemplateClass * klass) {
	kkc_numeric_template_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (KkcNumericTemplatePrivate));
	G_OBJECT_CLASS (klass)->get_property = _vala_kkc_numeric_template_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_kkc_numeric_template_set_property;
	G_OBJECT_CLASS (klass)->finalize = kkc_numeric_template_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), KKC_NUMERIC_TEMPLATE_SOURCE, g_param_spec_string ("source", "source", "source", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT));
	g_object_class_install_property (G_OBJECT_CLASS (klass), KKC_NUMERIC_TEMPLATE_OKURI, g_param_spec_boolean ("okuri", "okuri", "okuri", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT));
}


static void kkc_numeric_template_kkc_template_interface_init (KkcTemplateIface * iface) {
	kkc_numeric_template_kkc_template_parent_iface = g_type_interface_peek_parent (iface);
	iface->expand = (gchar* (*)(KkcTemplate*, const gchar*)) kkc_numeric_template_real_expand;
	iface->get_source = kkc_numeric_template_real_get_source;
	iface->set_source = kkc_numeric_template_real_set_source;
	iface->get_okuri = kkc_numeric_template_real_get_okuri;
	iface->set_okuri = kkc_numeric_template_real_set_okuri;
}


static void kkc_numeric_template_instance_init (KkcNumericTemplate * self) {
	GeeArrayList* _tmp0_;
	self->priv = KKC_NUMERIC_TEMPLATE_GET_PRIVATE (self);
	_tmp0_ = gee_array_list_new (G_TYPE_INT, NULL, NULL, NULL);
	self->priv->numerics = _tmp0_;
}


static void kkc_numeric_template_finalize (GObject* obj) {
	KkcNumericTemplate * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, KKC_TYPE_NUMERIC_TEMPLATE, KkcNumericTemplate);
	_g_object_unref0 (self->priv->numerics);
	_g_free0 (self->priv->_source);
	_g_regex_unref0 (self->priv->regex);
	_g_regex_unref0 (self->priv->ref_regex);
	G_OBJECT_CLASS (kkc_numeric_template_parent_class)->finalize (obj);
}


GType kkc_numeric_template_get_type (void) {
	static volatile gsize kkc_numeric_template_type_id__volatile = 0;
	if (g_once_init_enter (&kkc_numeric_template_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (KkcNumericTemplateClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) kkc_numeric_template_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (KkcNumericTemplate), 0, (GInstanceInitFunc) kkc_numeric_template_instance_init, NULL };
		static const GInterfaceInfo kkc_template_info = { (GInterfaceInitFunc) kkc_numeric_template_kkc_template_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType kkc_numeric_template_type_id;
		kkc_numeric_template_type_id = g_type_register_static (G_TYPE_OBJECT, "KkcNumericTemplate", &g_define_type_info, 0);
		g_type_add_interface_static (kkc_numeric_template_type_id, KKC_TYPE_TEMPLATE, &kkc_template_info);
		g_once_init_leave (&kkc_numeric_template_type_id__volatile, kkc_numeric_template_type_id);
	}
	return kkc_numeric_template_type_id__volatile;
}


static void _vala_kkc_numeric_template_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	KkcNumericTemplate * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, KKC_TYPE_NUMERIC_TEMPLATE, KkcNumericTemplate);
	switch (property_id) {
		case KKC_NUMERIC_TEMPLATE_SOURCE:
		g_value_set_string (value, kkc_template_get_source ((KkcTemplate*) self));
		break;
		case KKC_NUMERIC_TEMPLATE_OKURI:
		g_value_set_boolean (value, kkc_template_get_okuri ((KkcTemplate*) self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_kkc_numeric_template_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	KkcNumericTemplate * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, KKC_TYPE_NUMERIC_TEMPLATE, KkcNumericTemplate);
	switch (property_id) {
		case KKC_NUMERIC_TEMPLATE_SOURCE:
		kkc_template_set_source ((KkcTemplate*) self, g_value_get_string (value));
		break;
		case KKC_NUMERIC_TEMPLATE_OKURI:
		kkc_template_set_okuri ((KkcTemplate*) self, g_value_get_boolean (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



