/*
 *  Copyright © 2017-2022 Wellington Wallace
 *
 *  This file is part of EasyEffects.
 *
 *  EasyEffects is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  EasyEffects is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with EasyEffects.  If not, see <https://www.gnu.org/licenses/>.
 */

#pragma once

#include <adwaita.h>
#include <ranges>
#include <unordered_map>
#include "application.hpp"
#include "node_info_holder.hpp"
#include "pipeline_type.hpp"
#include "plugin_name.hpp"

namespace ui::apps_box {

G_BEGIN_DECLS

#define EE_TYPE_APPS_BOX (apps_box_get_type())

G_DECLARE_FINAL_TYPE(AppsBox, apps_box, EE, APPS_BOX, GtkBox)

G_END_DECLS

auto create() -> AppsBox*;

void setup(AppsBox* self, app::Application* application, PipelineType pipeline_type);

}  // namespace ui::apps_box