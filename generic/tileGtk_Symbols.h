/*
 *  tileGtk_Symbols.h
 * --------------------
 *
 * This file is part of the Tile-Gtk package, a Tk/Tile based theme that uses
 * Gtk/GNOME for drawing.
 *
 * Copyright (C) 2004-2012 by:
 * Georgios Petasis, petasis@iit.demokritos.gr,
 * Software and Knowledge Engineering Laboratory,
 * Institute of Informatics and Telecommunications,
 * National Centre for Scientific Research (NCSR) "Demokritos",
 * Aghia Paraskevi, 153 10, Athens, Greece.
 */
/* THIS FILE IS AUTOMATICALLY GENERATED - DO NOT EDIT! */
#ifndef _TILEGTK_SYMBOLS
#define _TILEGTK_SYMBOLS
#include "tcl.h"
#ifdef LOAD_SYMBOLS_WITH_TCL
#else
#include <glib.h>
#endif
#include <gdk/gdk.h>
#include <gtk/gtk.h>
#include <gdk-pixbuf/gdk-pixbuf.h>
#ifndef __WIN32__
#include <gdk-pixbuf-xlib/gdk-pixbuf-xlib.h>
#include <gdk/gdkx.h>
#else
#include <gdk/gdkwin32.h>
#endif

#ifdef    TILEGTK_LOAD_GTK_DYNAMICALLY
extern "C" {
  typedef void (*Ptr_g_free)(gpointer mem);
  extern Ptr_g_free TileGtk_g_free;
  typedef GList* (*Ptr_g_hash_table_get_keys)(GHashTable *hash_table);
  extern Ptr_g_hash_table_get_keys TileGtk_g_hash_table_get_keys;
  typedef gpointer (*Ptr_g_malloc)(gsize n_bytes);
  extern Ptr_g_malloc TileGtk_g_malloc;
  typedef gpointer (*Ptr_g_malloc0)(gsize n_bytes);
  extern Ptr_g_malloc0 TileGtk_g_malloc0;
  typedef void (*Ptr_g_object_get)(gpointer object, const gchar *first_property_name, ...);
  extern Ptr_g_object_get TileGtk_g_object_get;
  typedef void (*Ptr_g_object_unref)(gpointer object);
  extern Ptr_g_object_unref TileGtk_g_object_unref;
  typedef void (*Ptr_g_option_context_add_main_entries)(GOptionContext *context, const GOptionEntry *entries, const gchar *translation_domain);
  extern Ptr_g_option_context_add_main_entries TileGtk_g_option_context_add_main_entries;
  typedef GOptionContext* (*Ptr_g_option_context_new)(const gchar *parameter_string);
  extern Ptr_g_option_context_new TileGtk_g_option_context_new;
  typedef void (*Ptr_g_strfreev)(gchar **str_array);
  extern Ptr_g_strfreev TileGtk_g_strfreev;
  typedef gchar* (*Ptr_gdk_color_to_string)(const GdkColor *color);
  extern Ptr_gdk_color_to_string TileGtk_gdk_color_to_string;
  typedef GdkDisplay* (*Ptr_gdk_display_get_default)(void);
  extern Ptr_gdk_display_get_default TileGtk_gdk_display_get_default;
  typedef GdkScreen* (*Ptr_gdk_display_get_screen)(GdkDisplay*, gint);
  extern Ptr_gdk_display_get_screen TileGtk_gdk_display_get_screen;
  typedef void (*Ptr_gdk_drawable_set_colormap)(GdkColormap*);
  extern Ptr_gdk_drawable_set_colormap TileGtk_gdk_drawable_set_colormap;
  typedef GdkGC* (*Ptr_gdk_gc_new)(GdkDrawable *drawable);
  extern Ptr_gdk_gc_new TileGtk_gdk_gc_new;
  typedef GdkPixbuf* (*Ptr_gdk_pixbuf_get_from_drawable)(GdkPixbuf *dest, GdkDrawable *src, GdkColormap *cmap, int src_x, int src_y, int dest_x, int dest_y, int width, int height);
  extern Ptr_gdk_pixbuf_get_from_drawable TileGtk_gdk_pixbuf_get_from_drawable;
  typedef GdkPixbuf* (*Ptr_gdk_pixbuf_new)(GdkColorspace colorspace, gboolean has_alpha, int bits_per_sample, int width, int height);
  extern Ptr_gdk_pixbuf_new TileGtk_gdk_pixbuf_new;
  typedef void (*Ptr_gdk_pixbuf_unref)(GdkPixbuf *pixbuf);
  extern Ptr_gdk_pixbuf_unref TileGtk_gdk_pixbuf_unref;
  typedef void (*Ptr_gdk_pixbuf_xlib_render_to_drawable)(GdkPixbuf *pixbuf, Drawable drawable, GC gc, int src_x, int src_y, int dest_x, int dest_y, int width, int height, XlibRgbDither dither, int x_dither, int y_dither);
  extern Ptr_gdk_pixbuf_xlib_render_to_drawable TileGtk_gdk_pixbuf_xlib_render_to_drawable;
  typedef GdkPixmap* (*Ptr_gdk_pixmap_foreign_new_for_screen)(GdkScreen *screen, GdkNativeWindow anid, gint width, gint height, gint depth);
  extern Ptr_gdk_pixmap_foreign_new_for_screen TileGtk_gdk_pixmap_foreign_new_for_screen;
  typedef GdkPixmap* (*Ptr_gdk_pixmap_new)(GdkDrawable *drawable, gint width, gint height, gint depth);
  extern Ptr_gdk_pixmap_new TileGtk_gdk_pixmap_new;
  typedef GdkColormap* (*Ptr_gdk_x11_colormap_foreign_new)(GdkVisual *visual, Colormap xcolormap);
  extern Ptr_gdk_x11_colormap_foreign_new TileGtk_gdk_x11_colormap_foreign_new;
  typedef GdkDisplay* (*Ptr_gdk_x11_lookup_xdisplay)(Display *xdisplay);
  extern Ptr_gdk_x11_lookup_xdisplay TileGtk_gdk_x11_lookup_xdisplay;
  typedef GdkVisual* (*Ptr_gdk_x11_screen_lookup_visual)(GdkScreen *screen, VisualID xvisualid);
  extern Ptr_gdk_x11_screen_lookup_visual TileGtk_gdk_x11_screen_lookup_visual;
  typedef GtkObject* (*Ptr_gtk_adjustment_new)(double, double, double, double, double, double);
  extern Ptr_gtk_adjustment_new TileGtk_gtk_adjustment_new;
  typedef void (*Ptr_gtk_adjustment_set_value)(GtkAdjustment *adjustment, gdouble value);
  extern Ptr_gtk_adjustment_set_value TileGtk_gtk_adjustment_set_value;
  typedef GtkWidget* (*Ptr_gtk_arrow_new)(GtkArrowType at, GtkShadowType st);
  extern Ptr_gtk_arrow_new TileGtk_gtk_arrow_new;
  typedef void (*Ptr_gtk_border_free)(GtkBorder*);
  extern Ptr_gtk_border_free TileGtk_gtk_border_free;
  typedef GtkReliefStyle (*Ptr_gtk_button_get_relief)(GtkButton *button);
  extern Ptr_gtk_button_get_relief TileGtk_gtk_button_get_relief;
  typedef GtkWidget* (*Ptr_gtk_button_new)(void);
  extern Ptr_gtk_button_new TileGtk_gtk_button_new;
  typedef void (*Ptr_gtk_button_set_relief)(GtkButton *button, GtkReliefStyle newstyle);
  extern Ptr_gtk_button_set_relief TileGtk_gtk_button_set_relief;
  typedef GtkWidget* (*Ptr_gtk_check_button_new)(void);
  extern Ptr_gtk_check_button_new TileGtk_gtk_check_button_new;
  typedef GtkWidget* (*Ptr_gtk_combo_box_entry_new)(void);
  extern Ptr_gtk_combo_box_entry_new TileGtk_gtk_combo_box_entry_new;
  typedef GtkWidget* (*Ptr_gtk_combo_box_new)(void);
  extern Ptr_gtk_combo_box_new TileGtk_gtk_combo_box_new;
  typedef void (*Ptr_gtk_container_add)(GtkContainer *container, GtkWidget *widget);
  extern Ptr_gtk_container_add TileGtk_gtk_container_add;
  typedef void (*Ptr_gtk_disable_setlocale)(void);
  extern Ptr_gtk_disable_setlocale TileGtk_gtk_disable_setlocale;
  typedef GtkWidget* (*Ptr_gtk_entry_new)(void);
  extern Ptr_gtk_entry_new TileGtk_gtk_entry_new;
  typedef GtkWidget* (*Ptr_gtk_fixed_new)(void);
  extern Ptr_gtk_fixed_new TileGtk_gtk_fixed_new;
  typedef GtkWidget* (*Ptr_gtk_frame_new)(const gchar *label);
  extern Ptr_gtk_frame_new TileGtk_gtk_frame_new;
  typedef GtkWidget* (*Ptr_gtk_hpaned_new)(void);
  extern Ptr_gtk_hpaned_new TileGtk_gtk_hpaned_new;
  typedef GtkWidget* (*Ptr_gtk_hscale_new_with_range)(gdouble min, gdouble max, gdouble step);
  extern Ptr_gtk_hscale_new_with_range TileGtk_gtk_hscale_new_with_range;
  typedef GtkWidget* (*Ptr_gtk_hscrollbar_new)(GtkAdjustment *);
  extern Ptr_gtk_hscrollbar_new TileGtk_gtk_hscrollbar_new;
  typedef gboolean (*Ptr_gtk_init_check)(int *argc, char ***argv);
  extern Ptr_gtk_init_check TileGtk_gtk_init_check;
  typedef GtkWidget* (*Ptr_gtk_notebook_new)(void);
  extern Ptr_gtk_notebook_new TileGtk_gtk_notebook_new;
  typedef void (*Ptr_gtk_object_get)(GtkObject *object, const gchar *first_property_name, ...);
  extern Ptr_gtk_object_get TileGtk_gtk_object_get;
  typedef void (*Ptr_gtk_paint_arrow)(GtkStyle*,GdkWindow*, GtkStateType, GtkShadowType, const GdkRectangle *, GtkWidget *, const gchar *, GtkArrowType, gboolean, gint , gint , gint , gint);
  extern Ptr_gtk_paint_arrow TileGtk_gtk_paint_arrow;
  typedef void (*Ptr_gtk_paint_box)(GtkStyle*,GdkWindow*, GtkStateType, GtkShadowType, const GdkRectangle *, GtkWidget *, const gchar *, gint , gint , gint , gint);
  extern Ptr_gtk_paint_box TileGtk_gtk_paint_box;
  typedef void (*Ptr_gtk_paint_box_gap)(GtkStyle*,GdkWindow*, GtkStateType, GtkShadowType, const GdkRectangle *, GtkWidget *, const gchar *, gint, gint, gint , gint, GtkPositionType, gint gap_x, gint gap_width);
  extern Ptr_gtk_paint_box_gap TileGtk_gtk_paint_box_gap;
  typedef void (*Ptr_gtk_paint_check)(GtkStyle*,GdkWindow*, GtkStateType, GtkShadowType, const GdkRectangle *, GtkWidget *, const gchar *, gint , gint , gint , gint);
  extern Ptr_gtk_paint_check TileGtk_gtk_paint_check;
  typedef void (*Ptr_gtk_paint_extension)(GtkStyle *, GdkWindow *, GtkStateType, GtkShadowType, const GdkRectangle *, GtkWidget *, const gchar *, gint, gint, gint, gint, GtkPositionType);
  extern Ptr_gtk_paint_extension TileGtk_gtk_paint_extension;
  typedef void (*Ptr_gtk_paint_flat_box)(GtkStyle*,GdkWindow*, GtkStateType, GtkShadowType, const GdkRectangle *, GtkWidget *, const gchar *, gint , gint , gint , gint);
  extern Ptr_gtk_paint_flat_box TileGtk_gtk_paint_flat_box;
  typedef void (*Ptr_gtk_paint_focus)(GtkStyle *style, GdkWindow *window, GtkStateType state_type, GdkRectangle *area, GtkWidget *widget, const gchar *detail, gint x, gint y, gint width, gint height);
  extern Ptr_gtk_paint_focus TileGtk_gtk_paint_focus;
  typedef void (*Ptr_gtk_paint_handle)(GtkStyle*,GdkWindow*, GtkStateType, GtkShadowType, const GdkRectangle *, GtkWidget *, const gchar *, gint , gint , gint , gint, GtkOrientation);
  extern Ptr_gtk_paint_handle TileGtk_gtk_paint_handle;
  typedef void (*Ptr_gtk_paint_option)(GtkStyle*,GdkWindow*, GtkStateType, GtkShadowType, const GdkRectangle *, GtkWidget *, const gchar *, gint , gint , gint , gint);
  extern Ptr_gtk_paint_option TileGtk_gtk_paint_option;
  typedef void (*Ptr_gtk_paint_resize_grip)(GtkStyle*,GdkWindow*, GtkStateType, const GdkRectangle *, GtkWidget *, const gchar *, GdkWindowEdge, gint , gint , gint , gint);
  extern Ptr_gtk_paint_resize_grip TileGtk_gtk_paint_resize_grip;
  typedef void (*Ptr_gtk_paint_shadow)(GtkStyle*,GdkWindow*, GtkStateType, GtkShadowType, const GdkRectangle *, GtkWidget *, const gchar *, gint , gint , gint , gint);
  extern Ptr_gtk_paint_shadow TileGtk_gtk_paint_shadow;
  typedef void (*Ptr_gtk_paint_slider)(GtkStyle*,GdkWindow*, GtkStateType, GtkShadowType, const GdkRectangle *, GtkWidget *, const gchar *, gint , gint , gint , gint, GtkOrientation);
  extern Ptr_gtk_paint_slider TileGtk_gtk_paint_slider;
  typedef GtkWidget* (*Ptr_gtk_progress_bar_new)(void);
  extern Ptr_gtk_progress_bar_new TileGtk_gtk_progress_bar_new;
  typedef void (*Ptr_gtk_progress_bar_set_bar_style)(GtkProgressBar *pbar, GtkProgressBarStyle style);
  extern Ptr_gtk_progress_bar_set_bar_style TileGtk_gtk_progress_bar_set_bar_style;
  typedef void (*Ptr_gtk_progress_bar_set_fraction)(GtkProgressBar *pbar, gdouble fraction);
  extern Ptr_gtk_progress_bar_set_fraction TileGtk_gtk_progress_bar_set_fraction;
  typedef void (*Ptr_gtk_progress_bar_set_orientation)(GtkProgressBar *pbar, GtkProgressBarOrientation orientation);
  extern Ptr_gtk_progress_bar_set_orientation TileGtk_gtk_progress_bar_set_orientation;
  typedef GtkAdjustment * (*Ptr_gtk_range_get_adjustment)(GtkRange *range);
  extern Ptr_gtk_range_get_adjustment TileGtk_gtk_range_get_adjustment;
  typedef gchar** (*Ptr_gtk_rc_get_default_files)(void);
  extern Ptr_gtk_rc_get_default_files TileGtk_gtk_rc_get_default_files;
  typedef GtkStyle * (*Ptr_gtk_rc_get_style)(GtkWidget*);
  extern Ptr_gtk_rc_get_style TileGtk_gtk_rc_get_style;
  typedef gchar* (*Ptr_gtk_rc_get_theme_dir)(void);
  extern Ptr_gtk_rc_get_theme_dir TileGtk_gtk_rc_get_theme_dir;
  typedef gboolean (*Ptr_gtk_rc_reparse_all_for_settings)(GtkSettings *settings, gboolean force_load);
  extern Ptr_gtk_rc_reparse_all_for_settings TileGtk_gtk_rc_reparse_all_for_settings;
  typedef void (*Ptr_gtk_rc_reset_styles)(GtkSettings *settings);
  extern Ptr_gtk_rc_reset_styles TileGtk_gtk_rc_reset_styles;
  typedef void (*Ptr_gtk_rc_set_default_files)(gchar **filenames);
  extern Ptr_gtk_rc_set_default_files TileGtk_gtk_rc_set_default_files;
  typedef GtkSettings * (*Ptr_gtk_settings_get_default)(void);
  extern Ptr_gtk_settings_get_default TileGtk_gtk_settings_get_default;
  typedef GtkWidget* (*Ptr_gtk_statusbar_new)(void);
  extern Ptr_gtk_statusbar_new TileGtk_gtk_statusbar_new;
  typedef void (*Ptr_gtk_style_apply_default_background)(GtkStyle *style, GdkWindow *window, gboolean set_bg, GtkStateType state_type, GdkRectangle *area, gint x, gint y, gint width, gint height);
  extern Ptr_gtk_style_apply_default_background TileGtk_gtk_style_apply_default_background;
  typedef GtkStyle* (*Ptr_gtk_style_attach)(GtkStyle *, GdkWindow *);
  extern Ptr_gtk_style_attach TileGtk_gtk_style_attach;
  typedef gboolean (*Ptr_gtk_style_lookup_color)(GtkStyle *style, const gchar *color_name, GdkColor *color);
  extern Ptr_gtk_style_lookup_color TileGtk_gtk_style_lookup_color;
  typedef GtkWidget* (*Ptr_gtk_toolbar_new)(void);
  extern Ptr_gtk_toolbar_new TileGtk_gtk_toolbar_new;
  typedef GtkWidget* (*Ptr_gtk_vpaned_new)(void);
  extern Ptr_gtk_vpaned_new TileGtk_gtk_vpaned_new;
  typedef GtkWidget* (*Ptr_gtk_vscale_new_with_range)(gdouble min, gdouble max, gdouble step);
  extern Ptr_gtk_vscale_new_with_range TileGtk_gtk_vscale_new_with_range;
  typedef GtkWidget* (*Ptr_gtk_vscrollbar_new)(GtkAdjustment *);
  extern Ptr_gtk_vscrollbar_new TileGtk_gtk_vscrollbar_new;
  typedef void (*Ptr_gtk_widget_destroy)(GtkWidget *);
  extern Ptr_gtk_widget_destroy TileGtk_gtk_widget_destroy;
  typedef void (*Ptr_gtk_widget_realize)(GtkWidget *);
  extern Ptr_gtk_widget_realize TileGtk_gtk_widget_realize;
  typedef void (*Ptr_gtk_widget_set_size_request)(GtkWidget *widget, gint width, gint height);
  extern Ptr_gtk_widget_set_size_request TileGtk_gtk_widget_set_size_request;
  typedef void (*Ptr_gtk_widget_size_request)(GtkWidget *widget, GtkRequisition *requisition);
  extern Ptr_gtk_widget_size_request TileGtk_gtk_widget_size_request;
  typedef void (*Ptr_gtk_widget_style_get)(GtkWidget *, const gchar *first_property_name, ...);
  extern Ptr_gtk_widget_style_get TileGtk_gtk_widget_style_get;
  typedef GtkWidget* (*Ptr_gtk_window_new)(GtkWindowType);
  extern Ptr_gtk_window_new TileGtk_gtk_window_new;
  typedef void (*Ptr_xlib_rgb_init)(Display *display, Screen *screen);
  extern Ptr_xlib_rgb_init TileGtk_xlib_rgb_init;
}

extern int TileGtk_InitialiseSymbols_gdk(Tcl_Interp *interp, Tcl_Obj *file_name);
#define TILEGTK_LAST_SYMBOL_gdk TileGtk_gdk_x11_screen_lookup_visual
extern int TileGtk_InitialiseSymbols_gdk_pixbuf(Tcl_Interp *interp, Tcl_Obj *file_name);
#define TILEGTK_LAST_SYMBOL_gdk_pixbuf TileGtk_gdk_pixbuf_unref
extern int TileGtk_InitialiseSymbols_gdk_pixbuf_xlib(Tcl_Interp *interp, Tcl_Obj *file_name);
#define TILEGTK_LAST_SYMBOL_gdk_pixbuf_xlib TileGtk_xlib_rgb_init
extern int TileGtk_InitialiseSymbols_glib(Tcl_Interp *interp, Tcl_Obj *file_name);
#define TILEGTK_LAST_SYMBOL_glib TileGtk_g_strfreev
extern int TileGtk_InitialiseSymbols_gobject(Tcl_Interp *interp, Tcl_Obj *file_name);
#define TILEGTK_LAST_SYMBOL_gobject TileGtk_g_object_unref
extern int TileGtk_InitialiseSymbols_gtk(Tcl_Interp *interp, Tcl_Obj *file_name);
#define TILEGTK_LAST_SYMBOL_gtk TileGtk_gtk_window_new

#else  /* TILEGTK_LOAD_GTK_DYNAMICALLY */

#define TileGtk_g_free \
                g_free
#define TileGtk_g_hash_table_get_keys \
                g_hash_table_get_keys
#define TileGtk_g_malloc \
                g_malloc
#define TileGtk_g_malloc0 \
                g_malloc0
#define TileGtk_g_object_get \
                g_object_get
#define TileGtk_g_object_unref \
                g_object_unref
#define TileGtk_g_option_context_add_main_entries \
                g_option_context_add_main_entries
#define TileGtk_g_option_context_new \
                g_option_context_new
#define TileGtk_g_strfreev \
                g_strfreev
#define TileGtk_gdk_color_to_string \
                gdk_color_to_string
#define TileGtk_gdk_display_get_default \
                gdk_display_get_default
#define TileGtk_gdk_display_get_screen \
                gdk_display_get_screen
#define TileGtk_gdk_drawable_set_colormap \
                gdk_drawable_set_colormap
#define TileGtk_gdk_gc_new \
                gdk_gc_new
#define TileGtk_gdk_pixbuf_get_from_drawable \
                gdk_pixbuf_get_from_drawable
#define TileGtk_gdk_pixbuf_new \
                gdk_pixbuf_new
#define TileGtk_gdk_pixbuf_unref \
                gdk_pixbuf_unref
#define TileGtk_gdk_pixbuf_xlib_render_to_drawable \
                gdk_pixbuf_xlib_render_to_drawable
#define TileGtk_gdk_pixmap_foreign_new_for_screen \
                gdk_pixmap_foreign_new_for_screen
#define TileGtk_gdk_pixmap_new \
                gdk_pixmap_new
#define TileGtk_gdk_x11_colormap_foreign_new \
                gdk_x11_colormap_foreign_new
#define TileGtk_gdk_x11_lookup_xdisplay \
                gdk_x11_lookup_xdisplay
#define TileGtk_gdk_x11_screen_lookup_visual \
                gdk_x11_screen_lookup_visual
#define TileGtk_gtk_adjustment_new \
                gtk_adjustment_new
#define TileGtk_gtk_adjustment_set_value \
                gtk_adjustment_set_value
#define TileGtk_gtk_arrow_new \
                gtk_arrow_new
#define TileGtk_gtk_border_free \
                gtk_border_free
#define TileGtk_gtk_button_get_relief \
                gtk_button_get_relief
#define TileGtk_gtk_button_new \
                gtk_button_new
#define TileGtk_gtk_button_set_relief \
                gtk_button_set_relief
#define TileGtk_gtk_check_button_new \
                gtk_check_button_new
#define TileGtk_gtk_combo_box_entry_new \
                gtk_combo_box_entry_new
#define TileGtk_gtk_combo_box_new \
                gtk_combo_box_new
#define TileGtk_gtk_container_add \
                gtk_container_add
#define TileGtk_gtk_disable_setlocale \
                gtk_disable_setlocale
#define TileGtk_gtk_entry_new \
                gtk_entry_new
#define TileGtk_gtk_fixed_new \
                gtk_fixed_new
#define TileGtk_gtk_frame_new \
                gtk_frame_new
#define TileGtk_gtk_hpaned_new \
                gtk_hpaned_new
#define TileGtk_gtk_hscale_new_with_range \
                gtk_hscale_new_with_range
#define TileGtk_gtk_hscrollbar_new \
                gtk_hscrollbar_new
#define TileGtk_gtk_init_check \
                gtk_init_check
#define TileGtk_gtk_notebook_new \
                gtk_notebook_new
#define TileGtk_gtk_object_get \
                gtk_object_get
#define TileGtk_gtk_paint_arrow \
                gtk_paint_arrow
#define TileGtk_gtk_paint_box \
                gtk_paint_box
#define TileGtk_gtk_paint_box_gap \
                gtk_paint_box_gap
#define TileGtk_gtk_paint_check \
                gtk_paint_check
#define TileGtk_gtk_paint_extension \
                gtk_paint_extension
#define TileGtk_gtk_paint_flat_box \
                gtk_paint_flat_box
#define TileGtk_gtk_paint_focus \
                gtk_paint_focus
#define TileGtk_gtk_paint_handle \
                gtk_paint_handle
#define TileGtk_gtk_paint_option \
                gtk_paint_option
#define TileGtk_gtk_paint_resize_grip \
                gtk_paint_resize_grip
#define TileGtk_gtk_paint_shadow \
                gtk_paint_shadow
#define TileGtk_gtk_paint_slider \
                gtk_paint_slider
#define TileGtk_gtk_progress_bar_new \
                gtk_progress_bar_new
#define TileGtk_gtk_progress_bar_set_bar_style \
                gtk_progress_bar_set_bar_style
#define TileGtk_gtk_progress_bar_set_fraction \
                gtk_progress_bar_set_fraction
#define TileGtk_gtk_progress_bar_set_orientation \
                gtk_progress_bar_set_orientation
#define TileGtk_gtk_range_get_adjustment \
                gtk_range_get_adjustment
#define TileGtk_gtk_rc_get_default_files \
                gtk_rc_get_default_files
#define TileGtk_gtk_rc_get_style \
                gtk_rc_get_style
#define TileGtk_gtk_rc_get_theme_dir \
                gtk_rc_get_theme_dir
#define TileGtk_gtk_rc_reparse_all_for_settings \
                gtk_rc_reparse_all_for_settings
#define TileGtk_gtk_rc_reset_styles \
                gtk_rc_reset_styles
#define TileGtk_gtk_rc_set_default_files \
                gtk_rc_set_default_files
#define TileGtk_gtk_settings_get_default \
                gtk_settings_get_default
#define TileGtk_gtk_statusbar_new \
                gtk_statusbar_new
#define TileGtk_gtk_style_apply_default_background \
                gtk_style_apply_default_background
#define TileGtk_gtk_style_attach \
                gtk_style_attach
#define TileGtk_gtk_style_lookup_color \
                gtk_style_lookup_color
#define TileGtk_gtk_toolbar_new \
                gtk_toolbar_new
#define TileGtk_gtk_vpaned_new \
                gtk_vpaned_new
#define TileGtk_gtk_vscale_new_with_range \
                gtk_vscale_new_with_range
#define TileGtk_gtk_vscrollbar_new \
                gtk_vscrollbar_new
#define TileGtk_gtk_widget_destroy \
                gtk_widget_destroy
#define TileGtk_gtk_widget_realize \
                gtk_widget_realize
#define TileGtk_gtk_widget_set_size_request \
                gtk_widget_set_size_request
#define TileGtk_gtk_widget_size_request \
                gtk_widget_size_request
#define TileGtk_gtk_widget_style_get \
                gtk_widget_style_get
#define TileGtk_gtk_window_new \
                gtk_window_new
#define TileGtk_xlib_rgb_init \
                xlib_rgb_init
#endif /* TILEGTK_LOAD_GTK_DYNAMICALLY */

#endif /* _TILEGTK_SYMBOLS */
