/* 
 * Copyright (C) 2011 Piotr Pokora <piotrek.pokora@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */
#ifndef _MIDGARD_BASE_MIXIN_H
#define _MIDGARD_BASE_MIXIN_H

#include <glib-object.h>

G_BEGIN_DECLS

/* convention macros */
#define MIDGARD_TYPE_BASE_MIXIN (midgard_base_mixin_get_type()) 
#define MIDGARD_BASE_MIXIN(object)  (G_TYPE_CHECK_INSTANCE_CAST ((object),MIDGARD_TYPE_BASE_MIXIN, MidgardBaseMixin))
#define MIDGARD_IS_BASE_MIXIN(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), MIDGARD_TYPE_BASE_MIXIN))
#define MIDGARD_BASE_MIXIN_GET_INTERFACE(inst) (G_TYPE_INSTANCE_GET_INTERFACE ((inst), MIDGARD_TYPE_BASE_MIXIN, MidgardBaseMixinIFace))

typedef struct _MidgardBaseMixin MidgardBaseMixin; /* dummy */
typedef struct _MidgardBaseMixinIFace MidgardBaseMixinIFace;

struct _MidgardBaseMixinIFace {
	GTypeInterface  parent;
};

GType	midgard_base_mixin_get_type	(void);

G_END_DECLS
#endif /* MIDGARD_BASE_MIXIN_H */
