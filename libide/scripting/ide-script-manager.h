/* ide-script-manager.h
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

#ifndef IDE_SCRIPT_MANAGER_H
#define IDE_SCRIPT_MANAGER_H

#include "ide-object.h"

G_BEGIN_DECLS

#define IDE_TYPE_SCRIPT_MANAGER (ide_script_manager_get_type())

G_DECLARE_FINAL_TYPE (IdeScriptManager, ide_script_manager, IDE, SCRIPT_MANAGER, IdeObject)

const gchar *ide_script_manager_get_scripts_directory (IdeScriptManager *self);
void         ide_script_manager_load_async            (IdeScriptManager    *self,
                                                       GCancellable        *cancellable,
                                                       GAsyncReadyCallback  callback,
                                                       gpointer             user_data);
gboolean     ide_script_manager_load_finish           (IdeScriptManager  *self,
                                                       GAsyncResult      *result,
                                                       GError           **error);

G_END_DECLS

#endif /* IDE_SCRIPT_MANAGER_H */
