/* gb-view-stack-split.h
 *
 * Copyright (C) 2015 Christian Hergert <christian@hergert.me>
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

#ifndef GB_VIEW_STACK_SPLIT_H
#define GB_VIEW_STACK_SPLIT_H

#include <glib-object.h>

G_BEGIN_DECLS

/**
 * GbViewGridSplit:
 * %GB_VIEW_GRID_SPLIT_LEFT:
 * %GB_VIEW_GRID_SPLIT_RIGHT:
 * %GB_VIEW_GRID_SPLIT_MOVE_LEFT:
 * %GB_VIEW_GRID_SPLIT_MOVE_RIGHT:
 *
 */
typedef enum
{
  GB_VIEW_GRID_SPLIT_LEFT = 1,
  GB_VIEW_GRID_SPLIT_RIGHT = 2,
  GB_VIEW_GRID_SPLIT_MOVE_LEFT = 3,
  GB_VIEW_GRID_SPLIT_MOVE_RIGHT = 4,
} GbViewGridSplit;

GType gb_view_stack_split_get_type (void);

G_END_DECLS

#endif /* GB_VIEW_STACK_SPLIT_H */