/* func-jump.c
 *
 * Copyright (C) 2016 Tashrif Sanil <tashrifsanil@kloke-source.com>
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

#include <glib/gi18n.h>
#include <ide.h>

#include "func-jump.h"

static void workbench_addin_iface_init (IdeWorkbenchAddinInterface *iface);

struct _FuncJump
{
  GObject    parent_instance;

  IdeTree   *tree;
  GtkWidget *panel;
};

G_DEFINE_TYPE_EXTENDED (FuncJump, func_jump, G_TYPE_OBJECT, 0,
                        G_IMPLEMENT_INTERFACE (IDE_TYPE_WORKBENCH_ADDIN, workbench_addin_iface_init))

/*q
static void
func_jump_context_set (GtkWidget  *widget,
                                   IdeContext *context)
{

}
*/

static void
func_jump_load (IdeWorkbenchAddin *addin,
                            IdeWorkbench      *workbench)
{

}

static void
func_jump_unload (IdeWorkbenchAddin *addin,
                              IdeWorkbench      *workbench)
{

}

static void
workbench_addin_iface_init (IdeWorkbenchAddinInterface *iface)
{
  iface->load = func_jump_load;
  iface->unload = func_jump_unload;
}

static void
func_jump_class_init (FuncJumpClass *klass)
{
}

static void
func_jump_init (FuncJump *addin)
{
}
