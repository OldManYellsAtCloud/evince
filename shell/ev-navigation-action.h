/*
 *  Copyright (C) 2003, 2004 Marco Pesenti Gritti
 *  Copyright (C) 2003, 2004 Christian Persch
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 *  $Id$
 */

#ifndef EV_NAVIGATION_ACTION_H
#define EV_NAVIGATION_ACTION_H

#include <gtk/gtkaction.h>

G_BEGIN_DECLS

#define EV_TYPE_NAVIGATION_ACTION            (ev_navigation_action_get_type ())
#define EV_NAVIGATION_ACTION(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), EV_TYPE_NAVIGATION_ACTION, EvNavigationAction))
#define EV_NAVIGATION_ACTION_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass), EV_TYPE_NAVIGATION_ACTION, EvNavigationActionClass))
#define EV_IS_NAVIGATION_ACTION(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), EV_TYPE_NAVIGATION_ACTION))
#define EV_IS_NAVIGATION_ACTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((obj), EV_TYPE_NAVIGATION_ACTION))
#define EV_NAVIGATION_ACTION_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS((obj), EV_TYPE_NAVIGATION_ACTION, EvNavigationActionClass))

typedef struct _EvNavigationAction		EvNavigationAction;
typedef struct _EvNavigationActionPrivate	EvNavigationActionPrivate;
typedef struct _EvNavigationActionClass		EvNavigationActionClass;

typedef enum
{
	EV_NAVIGATION_DIRECTION_BACK,
	EV_NAVIGATION_DIRECTION_FORWARD
} EvNavigationDirection;

struct _EvNavigationAction
{
	GtkAction parent;
	
	/*< private >*/
	EvNavigationActionPrivate *priv;
};

struct _EvNavigationActionClass
{
	GtkActionClass parent_class;
};

GType ev_navigation_action_get_type (void);

G_END_DECLS

#endif
